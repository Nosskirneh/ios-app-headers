//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCoreLoginController-Protocol.h"

@class NSString, SPSession, SPTConnectivityManager, SPTCoreCreateOptions, SPTCoreSchedulerThread, SPTPreferencesImplementation, SPTStorageSystem;
@protocol SPTCoreLoginControllerDelegate, SPTCoreLoginIdentifierControllerDelegate, SPTOfflineModeState, SPTSessionBootstrapDelegate;

@interface SPCore : NSObject <SPTCoreLoginController>
{
    struct unique_ptr<spotify::client::Core, std::__1::default_delete<spotify::client::Core>> _core;
    unique_ptr_af2c9e6c _cppSession;
    struct scoped_connection _reloginConnection;
    struct scoped_connection _didLogoutConnection;
    SPSession *_session;
    id <SPTCoreLoginControllerDelegate> _loginControllerDelegate;
    id <SPTCoreLoginIdentifierControllerDelegate> _loginIdentifierControllerDelegate;
    SPTPreferencesImplementation *_preferences;
    SPTConnectivityManager *_connectivityManager;
    id <SPTOfflineModeState> _offlineNotifier;
    SPTStorageSystem *_storageSystem;
    SPTCoreSchedulerThread *_coreScheduler;
    SPSession *_internalSession;
    SPTCoreCreateOptions *_createOptions;
    id <SPTSessionBootstrapDelegate> _bootstrapDelegate;
    unsigned long long _loginWithPhoneNumberRetryNumber;
    optional_f8dbc4af _loginCodeRequiredProceedCallback;
    optional_b0104c67 _loginCodeRequiredResendCallback;
}

+ (id)coreWithCreateOptions:(id)arg1 bootstrapDelegate:(id)arg2 scheduler:(id)arg3 error:(id *)arg4;
+ (id)coreWithCreateOptions:(id)arg1 scheduler:(id)arg2 error:(id *)arg3;
@property(nonatomic) unsigned long long loginWithPhoneNumberRetryNumber; // @synthesize loginWithPhoneNumberRetryNumber=_loginWithPhoneNumberRetryNumber;
@property(nonatomic) optional_b0104c67 loginCodeRequiredResendCallback; // @synthesize loginCodeRequiredResendCallback=_loginCodeRequiredResendCallback;
@property(nonatomic) optional_f8dbc4af loginCodeRequiredProceedCallback; // @synthesize loginCodeRequiredProceedCallback=_loginCodeRequiredProceedCallback;
@property(nonatomic) __weak id <SPTSessionBootstrapDelegate> bootstrapDelegate; // @synthesize bootstrapDelegate=_bootstrapDelegate;
@property(retain, nonatomic) SPTCoreCreateOptions *createOptions; // @synthesize createOptions=_createOptions;
@property(retain, nonatomic) SPSession *internalSession; // @synthesize internalSession=_internalSession;
@property(retain, nonatomic) SPTCoreSchedulerThread *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(retain, nonatomic) SPTStorageSystem *storageSystem; // @synthesize storageSystem=_storageSystem;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(retain, nonatomic) SPTConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(retain, nonatomic) SPTPreferencesImplementation *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <SPTCoreLoginIdentifierControllerDelegate> loginIdentifierControllerDelegate; // @synthesize loginIdentifierControllerDelegate=_loginIdentifierControllerDelegate;
@property(nonatomic) __weak id <SPTCoreLoginControllerDelegate> loginControllerDelegate; // @synthesize loginControllerDelegate=_loginControllerDelegate;
@property(retain, nonatomic) SPSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createConnectivity;
- (id)createAccesspointResolverWithDelegate:(id)arg1;
- (id)createRequestAccounting;
@property(nonatomic) _Bool keepAliveAPNetwork;
- (void)notifyLogoutOnMainThread;
- (void)notifyLoginFailureOnMainThread:(id)arg1;
- (void)onLoginSuccess;
- (void)notifyLoginSuccessOnMainThread;
- (void)notifyLoginSuccessOnMainThreadWithIdentifier:(id)arg1;
- (id)errorForErrorCode:(const struct error_code *)arg1;
- (void)teardownServices;
- (void)destroySession;
- (void)onLogout;
- (void)onLoginSuccess:(unique_ptr_af2c9e6c)arg1;
- (void)flushCaches;
- (void)setRememberMeModeForUsername:(id)arg1 rememberMe:(_Bool)arg2;
- (void)prepareForShutdown;
- (void)eraseOfflineUser:(id)arg1;
- (void)forgetStoredCredentials;
- (_Bool)hasStoredCredentials;
- (id)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (id)storedCredentialsAndCanonicalUsername:(id *)arg1;
- (void)loginWithCppCredentials:(variant_5d3576ba)arg1 options:(struct LoginOptions)arg2;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2;
- (void)loginWithParentChild:(id)arg1 options:(id)arg2;
- (void)notifyChallengeSucceededWithIdentifierToken:(basic_string_7c0a1c0b)arg1;
- (void)notifyChallengeReceivedForIdentifier:(id)arg1 withCode:(struct Code)arg2 isInvalidCredentials:(_Bool)arg3;
- (void)notifyFailureWithErrorCode:(struct error_code)arg1 description:(basic_string_7c0a1c0b)arg2;
- (void)resetLoginCodeRequiredCallbacks;
- (void)requestNewChallenge;
- (void)respondToIdentityLoginChallengeWithCode:(id)arg1;
- (void)loginWithIdentifier:(id)arg1;
- (void)respondToBootstrapChallenge:(struct LoginBootstrap *)arg1;
- (struct TimerManager *)mainScheduler;
- (struct Core *)cpp;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCreateOptions:(id)arg1 bootstrapDelegate:(id)arg2 scheduler:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

