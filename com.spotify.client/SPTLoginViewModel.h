//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSignupDataLoaderDelegate.h"

@class NSString, SPTAuthenticationHandler, SPTLoginMagicLinkTestManager, SPTLoginNetworkControllerUtility, SPTLoginOnePasswordHandler, SPTLoginRecoverAccountDataLoader, SPTLoginRecoverAccountHelpController, SPTLoginTheme, SPTLoginViewLogger, SPTPopupManager;

@interface SPTLoginViewModel : NSObject <SPTSignupDataLoaderDelegate>
{
    id <SPTLoginViewModelDelegate> _delegate;
    SPTLoginViewLogger *_logger;
    SPTLoginOnePasswordHandler *_onePassword;
    SPTLoginMagicLinkTestManager *_magicLinkTestManager;
    NSString *_userEmail;
    SPTLoginTheme *_theme;
    id <SPTNavigationRouter> _navigationRouter;
    SPTAuthenticationHandler *_authenticationHandler;
    SPTPopupManager *_popupManager;
    SPTLoginNetworkControllerUtility *_networkControllerUtility;
    SPTLoginRecoverAccountHelpController *_recoverAccountHelpController;
    SPTLoginRecoverAccountDataLoader *_recoverAccountDataLoader;
}

@property(retain, nonatomic) SPTLoginRecoverAccountDataLoader *recoverAccountDataLoader; // @synthesize recoverAccountDataLoader=_recoverAccountDataLoader;
@property(retain, nonatomic) SPTLoginRecoverAccountHelpController *recoverAccountHelpController; // @synthesize recoverAccountHelpController=_recoverAccountHelpController;
@property(retain, nonatomic) SPTLoginNetworkControllerUtility *networkControllerUtility; // @synthesize networkControllerUtility=_networkControllerUtility;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(retain, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) SPTLoginMagicLinkTestManager *magicLinkTestManager; // @synthesize magicLinkTestManager=_magicLinkTestManager;
@property(readonly, nonatomic) SPTLoginOnePasswordHandler *onePassword; // @synthesize onePassword=_onePassword;
@property(readonly, nonatomic) SPTLoginViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTLoginViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)localizedDescriptionForErrorCode:(long long)arg1;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoaderFinishLoadingWithSuccess:(id)arg1;
- (id)emptyEmailErrorMessage;
- (id)loginWithoutPasswordButtonText;
- (void)requestLoginLinkWithEmail:(id)arg1;
- (_Bool)shouldShowProgressViewOnLogin;
- (_Bool)isForgotPasswordLinkHidden;
- (void)presentDisableForcedOfflinePopup;
- (double)backgroundGradientAnimationDuration;
- (id)forgotPasswordLabelText;
- (id)loginButtonLoadingText;
- (id)loginButtonText;
- (id)passwordLabelText;
- (id)emailLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (void)presentForgotPasswordView;
- (_Bool)shouldEnableLoginButtonForEmail:(id)arg1 password:(id)arg2;
- (void)reportLoginCompletionWithError:(id)arg1;
- (void)loginWithUser:(id)arg1 andPassword:(id)arg2;
- (id)initWithTheme:(id)arg1 navigationRouter:(id)arg2 logger:(id)arg3 authenticationHandler:(id)arg4 onePasswordLogin:(id)arg5 popupManager:(id)arg6 networkControllerUtility:(id)arg7 userEmail:(id)arg8 recoverAccountHelpController:(id)arg9 magicLinkTestManager:(id)arg10 recoverAccountDataLoader:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
