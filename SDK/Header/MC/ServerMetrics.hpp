// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerMetrics {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMETRICS
public:
    class ServerMetrics& operator=(class ServerMetrics const&) = delete;
    ServerMetrics(class ServerMetrics const&) = delete;
    ServerMetrics() = delete;
#endif

public:
    /*0*/ virtual ~ServerMetrics();
    /*
    inline  ~ServerMetrics(){
         (ServerMetrics::*rv)();
        *((void**)&rv) = dlsym("??1ServerMetrics@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};