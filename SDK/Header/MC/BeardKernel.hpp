// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct BeardKernel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDKERNEL
public:
    struct BeardKernel& operator=(struct BeardKernel const&) = delete;
    BeardKernel(struct BeardKernel const&) = delete;
#endif

public:
    MCAPI BeardKernel();
    MCAPI float getContribution(int, int, int) const;

protected:

private:
    MCAPI class std::array<float, 13824> const createBeardKernel();

};