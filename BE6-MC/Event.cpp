#include "pch.h"
#include "Event.h"
#include "Tools.h"
#include "Config.h"
#include <EventAPI.h>
#include <MC/Level.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include <LLAPI.h>
#include <regex>
#include "Mqtt.h"
using namespace std;

void LoadEvent() {
	Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent ev) {
		Mqtt = MqttInit("BE6MC/WorldChat");
		return true;
		});
	Event::PlayerChatEvent::subscribe_ref([](Event::PlayerChatEvent& ev) {
		string msg = ev.mMessage;
		auto pl = ev.mPlayer;
		
		if (ChatFilter) {
			std::wstring result = Wordtrie.replaceSensitive(SBCConvert::s2ws(msg));
			ev.mMessage = SBCConvert::ws2s(result);
			
		}
		if (WorldChat) {
			string topic = "BE6MC/WorldChat";
			pubchat(Mqtt, topic.c_str(), pl->getRealName() + ":" + msg);
		}
		if (ChatPrefix) {
			string _msg = ChatMsg;
			vector<string> scores;
			regex SCORE("\\{SCOREITEM=([^}]*)\\}");
			sregex_iterator pos(_msg.cbegin(), _msg.cend(), SCORE);
			sregex_iterator end;
			for (; pos != end; pos++) {
				scores.push_back(pos->str(1));
			}
			for (vector<string>::iterator itr = scores.begin(); itr != scores.end(); ++itr) {
				ReplaceStr(_msg, "{SCOREITEM=" + *itr + "}", std::to_string(pl->getScore(*itr)));
			}
			setPlayerMsg(_msg, pl);
			ReplaceStr(_msg, "{MSG}", ev.mMessage);
			Level::broadcastText(_msg, TextType::RAW);
			return false;
		}
		return true;
		});
	Event::PlayerCmdEvent::subscribe_ref([](Event::PlayerCmdEvent& ev) {
		std::string cmd = ev.mCommand;
		auto pl = ev.mPlayer;
		string topic = "BE6CLOUD/PlayerCmd";
		publish(Mqtt, topic.c_str(), pl->getRealName() + ":" + cmd);
		subscribe(Mqtt, topic.c_str());
		std::regex tell("tell .*"), msg("msg .*"), me("me .*"), w("w .*"), say("say .*"), tellraw("tellraw .*");
		bool flag = std::regex_match(cmd, tell) || std::regex_match(cmd, tellraw) || std::regex_match(cmd, say) || std::regex_match(cmd, msg) || std::regex_match(cmd, me) || std::regex_match(cmd, w);
		if (flag) {
			std::wstring result = Wordtrie.replaceSensitive(SBCConvert::s2ws(cmd));
			ev.mCommand = SBCConvert::ws2s(result);
		}
		return true;
		});
	Event::ConsoleCmdEvent::subscribe_ref([](Event::ConsoleCmdEvent& ev) {
		std::string cmd = ev.mCommand;
		string topic = "BE6CLOUD/Cmd";
		publish(Mqtt, topic.c_str(), "控制台:" + cmd);
		std::regex tell("tell .*"), msg("msg .*"), tellraw("tellraw .*"), w("w .*"), say("say .*");
		bool flag = std::regex_match(cmd, tell) || std::regex_match(cmd, say) || std::regex_match(cmd, msg) || std::regex_match(cmd, tellraw) || std::regex_match(cmd, w);
		if (flag) {
			std::wstring result = Wordtrie.replaceSensitive(SBCConvert::s2ws(UnicodeStrToUtf8(cmd)));
			ev.mCommand = SBCConvert::ws2s(result);
		}
		return true;
	});
	Event::PlayerJoinEvent::subscribe_ref([](Event::PlayerJoinEvent& ev) {
		string msg = JoinMsg;
		auto pl = ev.mPlayer;
		string topic = "BE6CLOUD/PlayerJoin";
		setPlayerMsg(msg, ev.mPlayer);
		Level::broadcastText(msg, TextType::RAW);
		publish(Mqtt,topic.c_str(), msg);
		return true;
	});
	logger.info("[Event] 监听已注册{}个！！！",4);
}