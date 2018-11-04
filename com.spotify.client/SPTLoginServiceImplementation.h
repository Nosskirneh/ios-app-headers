//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLoginService.h"
#import "SPTPageRegistryObserver.h"
#import "SPTPreSignupExperimentationFeatureFlagsLoaderDelegate.h"

@class NSError, NSString, SPTAllocationContext, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginForcedOfflineWarningLogger, SPTLoginKeychainManagerImplementation, SPTLoginStateControllerImplementation, SPTObserverManager;

@interface SPTLoginServiceImplementation : NSObject <SPTPageRegistryObserver, SPTPreSignupExperimentationFeatureFlagsLoaderDelegate, SPTLoginService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTServiceManagerService> _serviceManagerService;
    id <SPTPreSignupExperimentationService> _psesService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTCoreService> _coreService;
    id <SPTFacebookIntegrationService> _facebookIntegrationService;
    id <SPTNetworkService> _networkService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTPreSignupExperimentationFeatureFlagsLoader> _flagsLoader;
    id <SPTPreSignupExperimentationFeatureFlags> _featureFlags;
    NSError *_autoLoginError;
    SPTLoginStateControllerImplementation *_loginStateController;
    SPTLoginKeychainManagerImplementation *_keychainManager;
    SPTObserverManager *_observerManager;
    SPTLoginDialogController *_dialogController;
    SPTLoginErrorDecorator *_loginErrorDecorator;
    SPTLoginForcedOfflineWarningLogger *_forcedOfflineLogger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginForcedOfflineWarningLogger *forcedOfflineLogger; // @synthesize forcedOfflineLogger=_forcedOfflineLogger;
@property(retain, nonatomic) SPTLoginErrorDecorator *loginErrorDecorator; // @synthesize loginErrorDecorator=_loginErrorDecorator;
@property(retain, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTLoginKeychainManagerImplementation *keychainManager; // @synthesize keychainManager=_keychainManager;
@property(retain, nonatomic) SPTLoginStateControllerImplementation *loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) NSError *autoLoginError; // @synthesize autoLoginError=_autoLoginError;
@property(retain, nonatomic) id <SPTPreSignupExperimentationFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTPreSignupExperimentationFeatureFlagsLoader> flagsLoader; // @synthesize flagsLoader=_flagsLoader;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTFacebookIntegrationService> facebookIntegrationService; // @synthesize facebookIntegrationService=_facebookIntegrationService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> psesService; // @synthesize psesService=_psesService;
@property(nonatomic) __weak id <SPTServiceManagerService> serviceManagerService; // @synthesize serviceManagerService=_serviceManagerService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideSignupNavigationCoordinator;
- (id)recoverAccountHelpController;
- (id)authenticationHandler;
- (id)provideWelcomeViewController;
- (id)provideLoginViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideMagicLinkSentConfirmationViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)registerMagicLinkSentConfirmationViewController;
- (void)registerLoginViewController;
- (void)registerWelcomeViewController;
- (void)registerViewControllers;
- (void)showLoginView;
- (void)userDidLogoutNotificationReceived:(id)arg1;
- (void)featureFlagsLoaderDidFailToLoadFeatureFlags:(id)arg1;
- (void)featureFlagsLoader:(id)arg1 didLoadFeatureFlags:(id)arg2;
- (void)loadFeatureFlags;
- (void)tryToLoginAutomaticallyWithCredentials:(id)arg1 loginOptions:(id)arg2;
- (void)tryToLoginAutomatically;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)provideKeychainManager;
- (id)provideLoginStateControllerImplementation;
- (id)provideLoginStateController;
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
