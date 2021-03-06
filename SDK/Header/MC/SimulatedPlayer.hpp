// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "ServerPlayer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ScriptNavigationResult.hpp"

#undef BEFORE_EXTRA

class SimulatedPlayer : public ServerPlayer {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI bool simulateDestory();
    LIAPI bool simulateUseItem();

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const&) = delete;
    SimulatedPlayer(class SimulatedPlayer const&) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*14*/ virtual ~SimulatedPlayer();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*182*/ virtual void __unk_vfn_182();
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void __unk_vfn_196();
    /*198*/ virtual void sendMotionPacketIfNeeded();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void setAuxValue(int);
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*276*/ virtual void spawnAnim();
    /*290*/ virtual void aiStep();
    /*303*/ virtual void __unk_vfn_303();
    /*305*/ virtual bool isAlliedTo(class Mob*);
    /*307*/ virtual void __unk_vfn_307();
    /*331*/ virtual void onBorn(class Actor&, class Actor&);
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*337*/ virtual bool canExistWhenDisallowMob() const;
    /*338*/ virtual void __unk_vfn_338();
    /*346*/ virtual void updateAi();
    /*348*/ virtual void _serverAiMobStep();
    /*354*/ virtual void __unk_vfn_354();
    /*364*/ virtual void __unk_vfn_364();
    /*369*/ virtual void __unk_vfn_369();
    /*370*/ virtual void __unk_vfn_370();
    /*372*/ virtual void __unk_vfn_372();
    /*374*/ virtual void __unk_vfn_374();
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void __unk_vfn_381();
    /*384*/ virtual void __unk_vfn_384();
    /*385*/ virtual void __unk_vfn_385();
    /*387*/ virtual void __unk_vfn_387();
    /*388*/ virtual void __unk_vfn_388();
    /*397*/ virtual void __unk_vfn_397();
    /*398*/ virtual void __unk_vfn_398();
    /*402*/ virtual void __unk_vfn_402();
    /*409*/ virtual void __unk_vfn_409();
    /*437*/ virtual void __unk_vfn_437();
    /*438*/ virtual std::string getXuid() const;
    /*439*/ virtual struct PlayerMovementSettings const& getMovementSettings() const;
    /*441*/ virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);
    /*442*/ virtual int _getSpawnChunkLimit() const;
    /*443*/ virtual void _updateChunkPublisherView(class Vec3 const&, float);
    /*
    inline bool useNewAi() const{
        bool (SimulatedPlayer::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@SimulatedPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSimulated() const{
        bool (SimulatedPlayer::*rv)() const;
        *((void**)&rv) = dlsym("?isSimulated@SimulatedPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI SimulatedPlayer(class Level&, class PacketSender&, class NetworkHandler&, class ClientBlobCache::Server::ActiveTransfersManager&, enum GameType, class NetworkIdentifier const&, unsigned char, class std::function<void (class ServerPlayer& )>, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    MCAPI bool simulateAttack(class Actor&);
    MCAPI bool simulateAttack();
    MCAPI bool simulateDestroyBlock(class BlockPos const&, unsigned char);
    MCAPI void simulateDisconnect();
    MCAPI bool simulateGiveItem(class ItemStack&, bool);
    MCAPI bool simulateInteract(class Actor&);
    MCAPI bool simulateInteract(class BlockPos const&, unsigned char);
    MCAPI bool simulateInteract();
    MCAPI bool simulateJump();
    MCAPI void simulateLocalMove(class Vec3 const&, float);
    MCAPI void simulateLookAt(class Actor&);
    MCAPI void simulateLookAt(class BlockPos const&);
    MCAPI void simulateLookAt(class Vec3 const&);
    MCAPI void simulateMoveToLocation(class Vec3 const&, float);
    MCAPI struct ScriptNavigationResult simulateNavigateToEntity(class Actor&, float);
    MCAPI struct ScriptNavigationResult simulateNavigateToLocation(class Vec3 const&, float);
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&&, float);
    MCAPI void simulateSetBodyRotation(float);
    MCAPI bool simulateSetItem(class ItemStack&, bool, int);
    MCAPI void simulateStopDestroyingBlock();
    MCAPI void simulateStopInteracting();
    MCAPI void simulateStopMoving();
    MCAPI void simulateStopUsingItem();
    MCAPI bool simulateUseItem(class ItemStack&);
    MCAPI bool simulateUseItemInSlot(int);
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const&, unsigned char, class Vec3 const&);
    MCAPI bool simulateUseItemOnBlock(class ItemStack&, class BlockPos const&, unsigned char, class Vec3 const&);
    MCAPI void simulateWorldMove(class Vec3 const&, float);
    MCAPI static class SimulatedPlayer* create(std::string const&, class BlockPos const&, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler> >);
    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext&, bool);

protected:

private:
    MCAPI void _addMoveComponent();
    MCAPI struct ScriptNavigationResult _createNavigationResult(class NavigationComponent*) const;
    MCAPI float _getInputSpeed();
    MCAPI void _startCooldown();
    MCAPI bool _trySwing();
    MCAPI void _updateMovement();

};