// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandPropertyBag {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPROPERTYBAG
public:
    class CommandPropertyBag& operator=(class CommandPropertyBag const&) = delete;
    CommandPropertyBag(class CommandPropertyBag const&) = delete;
    CommandPropertyBag() = delete;
#endif

public:
    /*0*/ virtual ~CommandPropertyBag();
    MCAPI CommandPropertyBag(class Json::Value const&);
    MCAPI void addToResultList(std::string const&, std::string const&);
    MCAPI void set(std::string const&, class BlockPos const&);
    MCAPI void set(std::string const&, class Vec3);

protected:

private:

};