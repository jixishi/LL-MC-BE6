// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerStonecutter : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERSTONECUTTER
public:
    class CraftHandlerStonecutter& operator=(class CraftHandlerStonecutter const&) = delete;
    CraftHandlerStonecutter(class CraftHandlerStonecutter const&) = delete;
    CraftHandlerStonecutter() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerStonecutter();
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;
    MCAPI CraftHandlerStonecutter(class Player&, class ItemStackRequestActionCraftHandler&);

protected:

private:

};