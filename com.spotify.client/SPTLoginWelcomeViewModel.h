//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTMetaViewControllerObserver.h"

@class NSString, SPTLoginDialogController, SPTLoginTheme, SPTLoginWelcomeViewLogger;

@interface SPTLoginWelcomeViewModel : NSObject <SPTMetaViewControllerObserver>
{
    id <SPTLoginWelcomeViewModelDelegate> _delegate;
    SPTLoginWelcomeViewLogger *_logger;
    SPTLoginTheme *_theme;
    id <SPTLoginStateController> _loginStateController;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTLoginNavigationCoordinator> _signupNavigationCoordinator;
    SPTLoginDialogController *_alertController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
}

@property(retain, nonatomic) id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(retain, nonatomic) SPTLoginDialogController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTLoginNavigationCoordinator> signupNavigationCoordinator; // @synthesize signupNavigationCoordinator=_signupNavigationCoordinator;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginWelcomeViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTLoginWelcomeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)carouselMessages;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)navigateToLogin;
- (void)loginWithFacebook;
- (void)presentSignupStepOneViewController;
- (id)carouselViewModel;
- (double)messageCarouselAnimationDuration;
- (long long)messageCarouselNumberOfPages;
- (id)signupButtonText;
- (id)facebookButtonText;
- (id)loginButtonText;
- (id)spotifyLogo;
- (id)viewStyle;
- (id)initWithTheme:(id)arg1 loginStateController:(id)arg2 metaViewController:(id)arg3 navigationRouter:(id)arg4 signupNavigationCoordinator:(id)arg5 alertController:(id)arg6 logger:(id)arg7 sessionServicesLoader:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
