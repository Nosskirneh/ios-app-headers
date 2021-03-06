//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingPlatformService-Protocol.h"

@class NSString, SPTAllocationContext, SPTNowPlayingRemoteControlEventControllerManager;
@protocol SPTAbbaService, SPTFeatureFlaggingService, SPTFreeTierService, SPTNowPlayingContentLayerResolver, SPTNowPlayingModeResolver, SPTNowPlayingModeViewControllerRegistry, SPTNowPlayingModesRegistry, SPTNowPlayingRemoteControlPolicyRegistry, SPTNowPlayingScrollDataSource_Internal, SPTNowPlayingTestManager, SPTOnDemandService, SPTPlayer, SPTPlayerFeature, SPTRadioRemoteConfigService, SPTSessionService;

@interface SPTNowPlayingPlatformServiceImplementation : NSObject <SPTNowPlayingPlatformService>
{
    id <SPTSessionService> _sessionService;
    id <SPTAbbaService> _abbaService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTOnDemandService> _onDemandService;
    id <SPTRadioRemoteConfigService> _radioRemoteConfigService;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTNowPlayingModeResolver> _modeResolver;
    id <SPTNowPlayingModesRegistry> _modesRegistry;
    id <SPTNowPlayingModeViewControllerRegistry> _modeViewControllerRegistry;
    id <SPTNowPlayingModeViewControllerRegistry> _sideBarViewControllerRegistry;
    id <SPTNowPlayingRemoteControlPolicyRegistry> _remoteControlPolicyRegistry;
    SPTNowPlayingRemoteControlEventControllerManager *_remoteControlEventControllerManager;
    id <SPTNowPlayingScrollDataSource_Internal> _scrollDataSource;
    id <SPTNowPlayingContentLayerResolver> _contentLayerResolver;
    id <SPTPlayer> _player;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTNowPlayingContentLayerResolver> contentLayerResolver; // @synthesize contentLayerResolver=_contentLayerResolver;
@property(retain, nonatomic) id <SPTNowPlayingScrollDataSource_Internal> scrollDataSource; // @synthesize scrollDataSource=_scrollDataSource;
@property(retain, nonatomic) SPTNowPlayingRemoteControlEventControllerManager *remoteControlEventControllerManager; // @synthesize remoteControlEventControllerManager=_remoteControlEventControllerManager;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicyRegistry> remoteControlPolicyRegistry; // @synthesize remoteControlPolicyRegistry=_remoteControlPolicyRegistry;
@property(retain, nonatomic) id <SPTNowPlayingModeViewControllerRegistry> sideBarViewControllerRegistry; // @synthesize sideBarViewControllerRegistry=_sideBarViewControllerRegistry;
@property(retain, nonatomic) id <SPTNowPlayingModeViewControllerRegistry> modeViewControllerRegistry; // @synthesize modeViewControllerRegistry=_modeViewControllerRegistry;
@property(retain, nonatomic) id <SPTNowPlayingModesRegistry> modesRegistry; // @synthesize modesRegistry=_modesRegistry;
@property(retain, nonatomic) id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTRadioRemoteConfigService> radioRemoteConfigService; // @synthesize radioRemoteConfigService=_radioRemoteConfigService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
- (void).cxx_destruct;
- (id)provideContentLayerResolver;
- (id)provideScrollDataSource;
- (id)provideRemoteControlEventControllerRegistry;
- (id)provideRemoteControlPolicyRegistry;
- (id)provideSideBarViewControllerRegistry;
- (id)provideModeViewControllerRegistry;
- (id)provideModesRegistry;
- (id)provideModeResolver;
- (id)provideTestManager;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

