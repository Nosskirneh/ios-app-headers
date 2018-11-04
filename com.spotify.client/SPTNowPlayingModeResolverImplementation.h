//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDrivingModeControllerDelegate.h"
#import "SPTNowPlayingModeResolver.h"
#import "SPTPlayerObserver.h"

@class NSArray, NSString, SPTObserverManager, SPTPlayerState;

@interface SPTNowPlayingModeResolverImplementation : NSObject <SPTPlayerObserver, SPTDrivingModeControllerDelegate, SPTNowPlayingModeResolver>
{
    id <SPTNowPlayingModesRegistry> _modesRegistry;
    id <SPTPlayer> _player;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTPSXTestManager> _psxTestManager;
    id <SPTDrivingModeController> _drivingModeController;
    SPTPlayerState *_playerState;
    id <SPTNowPlayingMode> _mode;
    NSArray *_modes;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) NSArray *modes; // @synthesize modes=_modes;
@property(retain, nonatomic) id <SPTNowPlayingMode> mode; // @synthesize mode=_mode;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) id <SPTDrivingModeController> drivingModeController; // @synthesize drivingModeController=_drivingModeController;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingModesRegistry> modesRegistry; // @synthesize modesRegistry=_modesRegistry;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)drivingModeController:(id)arg1 didChangeDrivingModeEnabledState:(_Bool)arg2;
- (void)resolveMode;
- (_Bool)isFreeUserAndNotOnDemand:(id)arg1;
- (_Bool)isPersonalisedSet:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithModesRegistry:(id)arg1 player:(id)arg2 nowPlayingTestManager:(id)arg3 onDemandSet:(id)arg4 psxTestManager:(id)arg5;
- (void)updateDrivingModeController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
