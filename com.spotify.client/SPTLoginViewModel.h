//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginRecoverAccountHelpControllerDelegate-Protocol.h"
#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSString, SPTAuthenticationHandler, SPTLoginMagicLinkTestManager, SPTLoginNetworkControllerUtility, SPTLoginOnePasswordHandler, SPTLoginRecoverAccountDataLoader, SPTLoginRecoverAccountHelpController, SPTLoginSpinnerButtonTestManager, SPTLoginTheme, SPTLoginViewLogger, SPTPopupManager;
@protocol SPTLoginViewModelDelegate, SPTNavigationRouter;

@interface SPTLoginViewModel : NSObject <SPTSignupDataLoaderDelegate, SPTLoginRecoverAccountHelpControllerDelegate>
{
    id <SPTLoginViewModelDelegate> _delegate;
    SPTLoginViewLogger *_logger;
    SPTLoginOnePasswordHandler *_onePassword;
    SPTLoginMagicLinkTestManager *_magicLinkTestManager;
    SPTLoginSpinnerButtonTestManager *_spinnerButtonTestManager;
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
@property(readonly, nonatomic) SPTLoginSpinnerButtonTestManager *spinnerButtonTestManager; // @synthesize spinnerButtonTestManager=_spinnerButtonTestManager;
@property(retain, nonatomic) SPTLoginMagicLinkTestManager *magicLinkTestManager; // @synthesize magicLinkTestManager=_magicLinkTestManager;
@property(readonly, nonatomic) SPTLoginOnePasswordHandler *onePassword; // @synthesize onePassword=_onePassword;
@property(readonly, nonatomic) SPTLoginViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTLoginViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recoverAccountHelpController:(id)arg1 didRequestLoginLinkWithEmail:(id)arg2;
- (id)localizedDescriptionForErrorCode:(long long)arg1;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoaderFinishLoadingWithSuccess:(id)arg1;
- (id)loginWithoutPasswordButtonText;
- (void)requestLoginLinkWithEmail:(id)arg1;
- (_Bool)shouldShowProgressViewOnLogin;
- (_Bool)isForgotPasswordLinkHidden;
- (void)presentDisableForcedOfflinePopup;
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
- (id)initWithTheme:(id)arg1 navigationRouter:(id)arg2 logger:(id)arg3 authenticationHandler:(id)arg4 onePasswordLogin:(id)arg5 popupManager:(id)arg6 networkControllerUtility:(id)arg7 userEmail:(id)arg8 recoverAccountHelpController:(id)arg9 magicLinkTestManager:(id)arg10 spinnerButtonTestManager:(id)arg11 recoverAccountDataLoader:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

