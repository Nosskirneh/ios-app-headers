//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginDelayedSignupBannerViewModelDelegate-Protocol.h"
#import "SPTLoginDelayedSignupDialogPresenterDelegate-Protocol.h"
#import "SPTLoginDelayedSignupService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLoginDelayedSignupBannerViewModel, SPTLoginDelayedSignupDialogLogger, SPTLoginDelayedSignupDialogPresenter, SPTLoginDelayedSignupGuestAccountTracker, UIViewController;
@protocol SPTBannerFeature, SPTContainerService, SPTContainerUIService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTPreSignupExperimentationService, SPTRemoteConfigurationService, SPTSessionService, SPTSignupService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTLoginDelayedSignupServiceImplementation : NSObject <SPTLoginDelayedSignupBannerViewModelDelegate, SPTLoginDelayedSignupDialogPresenterDelegate, SPTLoginDelayedSignupService>
{
    id <SPTLoginService> _loginService;
    id <SPTSessionService> _sessionService;
    id <SPTBannerFeature> _bannerService;
    id <SPTContainerService> _containerService;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTSignupService> _signupService;
    id <SPTGLUEService> _glueService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTPreSignupExperimentationService> _psesService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTLoginLoggingService> _loginLoggerService;
    UIViewController *_presentedController;
    SPTLoginDelayedSignupBannerViewModel *_bannerViewModel;
    SPTLoginDelayedSignupDialogPresenter *_dialogPresenter;
    SPTLoginDelayedSignupDialogLogger *_bannerLogger;
    SPTLoginDelayedSignupGuestAccountTracker *_guestTracker;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginDelayedSignupGuestAccountTracker *guestTracker; // @synthesize guestTracker=_guestTracker;
@property(retain, nonatomic) SPTLoginDelayedSignupDialogLogger *bannerLogger; // @synthesize bannerLogger=_bannerLogger;
@property(retain, nonatomic) SPTLoginDelayedSignupDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(retain, nonatomic) SPTLoginDelayedSignupBannerViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
@property(nonatomic) __weak UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property(nonatomic) __weak id <SPTLoginLoggingService> loginLoggerService; // @synthesize loginLoggerService=_loginLoggerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> psesService; // @synthesize psesService=_psesService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSignupService> signupService; // @synthesize signupService=_signupService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
- (void).cxx_destruct;
- (_Bool)isGuestAccount;
- (void)dialogPresenterWillOpenFacebookFlow:(id)arg1;
- (void)dialogPresenterWillOpenSignupFlow:(id)arg1;
- (void)dialogPresenterWillOpenLoginFlow:(id)arg1;
- (void)userDidTapOnSignupButton;
- (void)userDidTapOnLoginButton;
- (void)maybeRestoreLoginUI;
- (void)dismiss:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)presentURI:(id)arg1;
- (void)presentGuestAccountBanner;
- (id)provideExperimentController;
- (void)setupDialogPresenter;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

