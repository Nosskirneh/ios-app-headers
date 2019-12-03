//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTIncognitoModeHandlerObserver-Protocol.h"

@class NSString, SPCore, SPSession, SPTApplicationStateTracker, SPTAudioVolumeControl, SPTEntityService, SPTHermesController, SPTIncognitoModeHandler, SPTLogger, SPTOauthClient, SPTOfflineManager, SPTPlayerMftCanPlayChecker, SPTPlayerProxyContextPlayer, SPTRouterFactory, SPTSocialManager, SPTUserFactory;
@protocol SPTAsyncScheduler, SPTResolver;

@interface SPTCoreClientFeatures : NSObject <SPTIncognitoModeHandlerObserver, SPSessionObserver>
{
    struct unique_ptr<spotify::client_features::ClientFeatureStack, std::__1::default_delete<spotify::client_features::ClientFeatureStack>> _clientFeatureStack;
    id <SPTResolver> _cosmosRouter;
    SPTApplicationStateTracker *_applicationStateTracker;
    SPTLogger *_logger;
    SPTEntityService *_entityService;
    SPTHermesController *_hermes;
    SPTOauthClient *_oauthClient;
    SPTAudioVolumeControl *_audioVolumeControl;
    SPTPlayerMftCanPlayChecker *_mftCanPlayChecker;
    SPTPlayerProxyContextPlayer *_proxyContextPlayer;
    SPTSocialManager *_socialManager;
    SPTUserFactory *_userFactory;
    SPTOfflineManager *_offlineManager;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    SPCore *_core;
    SPSession *_session;
    id <SPTAsyncScheduler> _scheduler;
    SPTRouterFactory *_routerFactory;
}

+ (id)clientFeaturesWithCore:(id)arg1 session:(id)arg2 coreCreateOptions:(id)arg3 prefs:(struct Prefs *)arg4 scheduler:(id)arg5;
@property(retain, nonatomic) SPTRouterFactory *routerFactory; // @synthesize routerFactory=_routerFactory;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTUserFactory *userFactory; // @synthesize userFactory=_userFactory;
@property(retain, nonatomic) SPTSocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(retain, nonatomic) SPTPlayerProxyContextPlayer *proxyContextPlayer; // @synthesize proxyContextPlayer=_proxyContextPlayer;
@property(retain, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker; // @synthesize mftCanPlayChecker=_mftCanPlayChecker;
@property(retain, nonatomic) SPTAudioVolumeControl *audioVolumeControl; // @synthesize audioVolumeControl=_audioVolumeControl;
@property(retain, nonatomic) SPTOauthClient *oauthClient; // @synthesize oauthClient=_oauthClient;
@property(retain, nonatomic) SPTHermesController *hermes; // @synthesize hermes=_hermes;
@property(retain, nonatomic) SPTEntityService *entityService; // @synthesize entityService=_entityService;
@property(retain, nonatomic) SPTLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTApplicationStateTracker *applicationStateTracker; // @synthesize applicationStateTracker=_applicationStateTracker;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)sessionLoginModeChanged:(id)arg1;
@property(readonly, nonatomic) const struct ClientFeatureStack *clientFeatureStack;
- (void)updateFromSessionState:(id)arg1;
- (void)prepareForShutdown;
- (void)flushCaches;
- (void)teardownServices;
- (void)invalidate;
- (id)initWithCore:(struct Core *)arg1 session:(struct Session *)arg2 prefs:(struct Prefs *)arg3 objcCore:(id)arg4 objcSession:(id)arg5 coreCreateOptions:(id)arg6 coreScheduler:(struct TimerManager *)arg7 scheduler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

