//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SPTApplicationStateTracker, SPTAudioVolumeControl, SPTCoreClientFeatures, SPTHermesController, SPTIncognitoModeHandler, SPTLogger, SPTOfflineModeNotifier, SPTPlayerMftCanPlayChecker, SPTPlayerProxyContextPlayer, SPTSocialManager, SPTUserFactory;
@protocol SPTAsyncScheduler, SPTConnectivityManager, SPTEntityService, SPTOfflineManager, SPTProductState, SPTResolver;

@interface SPSession : NSObject
{
    struct Session *_session;
    NSMapTable *_observers;
    struct scoped_connection _accesspointForcedUpdateConnection;
    struct scoped_connection _accesspointTemporaryConnectionErrorConnection;
    struct scoped_connection _loginModeChangedConnection;
    struct scoped_connection _offlineErrorConnection;
    _Bool _isOnline;
    _Bool _isOffline;
    _Bool _isLoggedIn;
    id <SPTProductState> _productState;
    NSString *_currentUsername;
    long long _currentLoginMode;
    id <SPTConnectivityManager> _connectivityManager;
    id <SPTAsyncScheduler> _scheduler;
    SPTOfflineModeNotifier *_offlineNotifier;
    SPTCoreClientFeatures *_clientFeatures;
}

@property(readonly, nonatomic) SPTCoreClientFeatures *clientFeatures; // @synthesize clientFeatures=_clientFeatures;
@property(readonly, nonatomic) SPTOfflineModeNotifier *offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak id <SPTConnectivityManager> connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(nonatomic) long long currentLoginMode; // @synthesize currentLoginMode=_currentLoginMode;
@property(readonly, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)webTokenRequestForURL:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *currentAP;
- (void)processLoginModeChanged;
- (void)processTemporaryConnectionErrorWithStatus:(int)arg1 connectionError:(id)arg2;
- (void)processOfflineSyncFailed:(const struct error_code *)arg1;
- (void)processAutoUpdateEvent;
- (const struct ClientFeatureStack *)clientFeatureStack;
- (struct Session *)cpp;
- (void)acceptLicenses:(id)arg1;
- (void)unacceptedLicencesWithCallback:(CDUnknownBlockType)arg1;
- (id)unacceptedLicences;
- (void)logout;
- (void)tryReconnect:(_Bool)arg1 toAp:(id)arg2;
- (void)loginModeChanged;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForShutdown;
- (void)flushCaches;
- (void)teardownServices;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (id)initWithCore:(id)arg1 coreCreateOptions:(id)arg2 isPerfTracingEnabled:(_Bool)arg3 session:(struct Session *)arg4 connectivityManager:(id)arg5 scheduler:(id)arg6;
@property(readonly, nonatomic) SPTIncognitoModeHandler *incognitoModeHandler;
@property(readonly, nonatomic) id <SPTOfflineManager> offlineManager;
@property(readonly, nonatomic) SPTUserFactory *userFactory;
@property(readonly, nonatomic) SPTSocialManager *socialManager;
@property(readonly, nonatomic) SPTPlayerProxyContextPlayer *proxyContextPlayer;
@property(readonly, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker;
@property(readonly, nonatomic) SPTAudioVolumeControl *audioVolumeControl;
@property(readonly, nonatomic) id <SPTEntityService> entityService;
@property(readonly, nonatomic) SPTHermesController *hermes;
@property(readonly, nonatomic) SPTLogger *logger;
@property(readonly, nonatomic) SPTApplicationStateTracker *applicationStateTracker;
@property(readonly, nonatomic) id <SPTResolver> cosmosRouter;

@end

