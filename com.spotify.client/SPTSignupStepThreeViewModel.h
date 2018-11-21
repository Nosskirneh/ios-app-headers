//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"
#import "SPTSignupViewModel-Protocol.h"

@class NSDictionary, NSString, SPTAuthenticationHandler, SPTLoginSpinnerButtonTestManager, SPTLoginTheme, SPTSignupCreateUserDataLoader, SPTSignupStepThreeViewLogger, SPTSignupTermsAndPolicyViewModel, SPTSignupUserInfoModel;
@protocol SPTSignupStepThreeViewModelDelegate;

@interface SPTSignupStepThreeViewModel : NSObject <SPTSignupDataLoaderDelegate, SPTSignupViewModel>
{
    NSDictionary *_validators;
    id <SPTSignupStepThreeViewModelDelegate> _delegate;
    SPTSignupTermsAndPolicyViewModel *_termsAndPolicyViewModel;
    SPTSignupStepThreeViewLogger *_logger;
    SPTLoginSpinnerButtonTestManager *_spinnerButtonTestManager;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTSignupCreateUserDataLoader *_createUserDataLoader;
    SPTLoginTheme *_theme;
    SPTAuthenticationHandler *_authenticationHandler;
}

@property(retain, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSignupCreateUserDataLoader *createUserDataLoader; // @synthesize createUserDataLoader=_createUserDataLoader;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(readonly, nonatomic) SPTLoginSpinnerButtonTestManager *spinnerButtonTestManager; // @synthesize spinnerButtonTestManager=_spinnerButtonTestManager;
@property(readonly, nonatomic) SPTSignupStepThreeViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyViewModel *termsAndPolicyViewModel; // @synthesize termsAndPolicyViewModel=_termsAndPolicyViewModel;
@property(nonatomic) __weak id <SPTSignupStepThreeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoaderFinishLoadingWithSuccess:(id)arg1;
- (void)validateFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (void)textFieldUpdated:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)createUserAndPresentMainScreen;
- (id)displayNameSuggestion;
- (id)createButtonLoadingText;
- (id)createButtonText;
- (id)displayNameDisclosureText;
- (id)displayNameLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (id)initWithUserInfoModel:(id)arg1 createUserDataLoader:(id)arg2 theme:(id)arg3 logger:(id)arg4 termsAndPolicyViewModel:(id)arg5 authenticationHandler:(id)arg6 spinnerButtonTestManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

