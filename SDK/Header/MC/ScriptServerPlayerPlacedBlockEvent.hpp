// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerPlayerPlacedBlockEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERPLAYERPLACEDBLOCKEVENT
public:
    class ScriptServerPlayerPlacedBlockEvent& operator=(class ScriptServerPlayerPlacedBlockEvent const&) = delete;
    ScriptServerPlayerPlacedBlockEvent(class ScriptServerPlayerPlacedBlockEvent const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerPlayerPlacedBlockEvent();
    /*
    inline  ~ScriptServerPlayerPlacedBlockEvent(){
         (ScriptServerPlayerPlacedBlockEvent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptServerPlayerPlacedBlockEvent@@UEAA@XZ");
        return (this->*rv)();
    }
    inline bool _serialize(class ScriptEngine& a0, class ScriptApi::ScriptObjectHandle& a1) const{
        bool (ScriptServerPlayerPlacedBlockEvent::*rv)(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
        *((void**)&rv) = dlsym("?_serialize@ScriptServerPlayerPlacedBlockEvent@@EEBA_NAEAVScriptEngine@@AEAVScriptObjectHandle@ScriptApi@@@Z");
        return (this->*rv)(std::forward<class ScriptEngine&>(a0), std::forward<class ScriptApi::ScriptObjectHandle&>(a1));
    }
    */
    MCAPI ScriptServerPlayerPlacedBlockEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);

protected:

private:
    MCAPI static class HashedString const mHash;

};