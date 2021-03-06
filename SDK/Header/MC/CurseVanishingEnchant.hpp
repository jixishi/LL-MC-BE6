// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CurseVanishingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEVANISHINGENCHANT
public:
    class CurseVanishingEnchant& operator=(class CurseVanishingEnchant const&) = delete;
    CurseVanishingEnchant(class CurseVanishingEnchant const&) = delete;
    CurseVanishingEnchant() = delete;
#endif

public:
    /*0*/ virtual ~CurseVanishingEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual int getMaxLevel() const;
    /*8*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
    /*
    inline bool isTreasureOnly() const{
        bool (CurseVanishingEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@CurseVanishingEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};