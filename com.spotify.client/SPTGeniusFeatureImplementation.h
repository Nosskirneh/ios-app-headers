//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"
#import "SPTGeniusFeature-Protocol.h"
#import "SPTLocalSettingsObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTGeniusCardManager, SPTGeniusLoggingService, SPTGeniusService, SPTGeniusTestManager;
@protocol SPTAbbaFeatureFlags, SPTAbbaService, SPTContainerService, SPTCoreService, SPTLocalSettings, SPTLyricsFeature, SPTNetworkService, SPTNowPlayingPlatformService, SPTNowPlayingScrollService, SPTPageRegistrationToken, SPTPlayer, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTGeniusFeatureImplementation : NSObject <SPTLocalSettingsObserver, SPTAbbaFeatureFlagsObserver, SPTGeniusFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSettingsFeature> _settings;
    id <SPTAbbaService> _abbaService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTNowPlayingScrollService> _nowPlayingScrollService;
    id <SPTLyricsFeature> _lyricsFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTGeniusTestManager *_testManager;
    SPTGeniusService *_geniusService;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTPlayer> _player;
    SPTGeniusCardManager *_cardManager;
    SPTGeniusLoggingService *_loggingService;
    id <SPTPageRegistrationToken> _geniusNPVCardRegistration;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> geniusNPVCardRegistration; // @synthesize geniusNPVCardRegistration=_geniusNPVCardRegistration;
@property(retain, nonatomic) SPTGeniusLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) SPTGeniusCardManager *cardManager; // @synthesize cardManager=_cardManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
@property(retain, nonatomic) SPTGeniusTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTLyricsFeature> lyricsFeature; // @synthesize lyricsFeature=_lyricsFeature;
@property(nonatomic) __weak id <SPTNowPlayingScrollService> nowPlayingScrollService; // @synthesize nowPlayingScrollService=_nowPlayingScrollService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)featureFlagsDidChange:(id)arg1;
- (void)localSettingsDidChange:(id)arg1;
- (void)geniusEnabledSettingChanged;
- (id)provideGeniusLoggingService;
- (id)provideCardManager;
- (id)provideGeniusNowPlayingViewControllerFactory;
- (id)provideGeniusNPVCardViewController:(id)arg1 context:(id)arg2;
- (id)provideGeniusService;
- (id)provideGeniusPlaybackSettingsSection:(id)arg1;
- (id)providePlayer;
- (void)registerPlaybackSettingsSection;
- (void)registerFeatureSettingsPage;
- (void)registerScrollProvider;
- (void)registerCarouselContentProvider;
- (void)unregisterViewControllerURI;
- (void)registerViewControllerURI;
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

