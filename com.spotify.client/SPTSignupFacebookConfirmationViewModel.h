//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSString, SPTAuthenticationHandler, SPTLoginDialogController, SPTLoginEmailAlreadyExistsDialogLogger, SPTSignupCreateUserDataLoader, SPTSignupFacebookConfirmationLogger, SPTSignupTermsAndPolicyViewModel, SPTSignupUserInfoModel;
@protocol GLUEImageLoader, SPTNavigationRouter, SPTSignupFacebookConfirmationViewModelDelegate;

@interface SPTSignupFacebookConfirmationViewModel : NSObject <SPTSignupDataLoaderDelegate>
{
    id <SPTSignupFacebookConfirmationViewModelDelegate> _delegate;
    SPTSignupFacebookConfirmationLogger *_logger;
    SPTSignupTermsAndPolicyViewModel *_termsAndPolicyViewModel;
    SPTSignupUserInfoModel *_userInfo;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTNavigationRouter> _navigationRouter;
    SPTSignupCreateUserDataLoader *_createUserDataLoader;
    SPTAuthenticationHandler *_authenticationHandler;
    SPTLoginDialogController *_dialogController;
    SPTLoginEmailAlreadyExistsDialogLogger *_emailExistDialogLogger;
}

@property(retain, nonatomic) SPTLoginEmailAlreadyExistsDialogLogger *emailExistDialogLogger; // @synthesize emailExistDialogLogger=_emailExistDialogLogger;
@property(retain, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(retain, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(retain, nonatomic) SPTSignupCreateUserDataLoader *createUserDataLoader; // @synthesize createUserDataLoader=_createUserDataLoader;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTSignupUserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyViewModel *termsAndPolicyViewModel; // @synthesize termsAndPolicyViewModel=_termsAndPolicyViewModel;
@property(readonly, nonatomic) SPTSignupFacebookConfirmationLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSignupFacebookConfirmationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoader:(id)arg1 didFinishLoadingWithSuccessResponse:(id)arg2;
- (void)presentLoginViewWithEmail:(id)arg1;
- (void)loginWithFacebookCredentials;
- (id)imageLoader;
- (id)profilePictureURL;
- (id)loginButtonTitle;
- (id)createButtonLoadingTitle;
- (id)createButtonTitle;
- (id)separatorText;
- (id)explanationText;
- (id)greetingText;
- (id)initWithUserInfo:(id)arg1 imageLoader:(id)arg2 navigationRouter:(id)arg3 logger:(id)arg4 termsAndPolicyViewModel:(id)arg5 createUserDataLoader:(id)arg6 authenticationHandler:(id)arg7 dialogController:(id)arg8 emailExistsDialogLogger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

