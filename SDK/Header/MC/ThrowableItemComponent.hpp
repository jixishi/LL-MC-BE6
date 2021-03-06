// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ThrowableItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWABLEITEMCOMPONENT
public:
    class ThrowableItemComponent& operator=(class ThrowableItemComponent const&) = delete;
    ThrowableItemComponent(class ThrowableItemComponent const&) = delete;
    ThrowableItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~ThrowableItemComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (ThrowableItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@ThrowableItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ThrowableItemComponent(class ComponentItem*);
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const;
    MCAPI bool use(class ItemStack&, class Player&) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:
    MCAPI float _getLaunchPower(int, int, int) const;

};