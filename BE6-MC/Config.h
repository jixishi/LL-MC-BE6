#pragma once
#include <Nlohmann/json.hpp>
void LoadConfig(string ConfigPath, string ConfigFile, nlohmann::json& Config);
bool InitConfig();
void getConfig(nlohmann::json& Config); 
void setConfig(nlohmann::json& Config);