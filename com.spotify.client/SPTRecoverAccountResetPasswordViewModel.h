//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTRecoverAccountResetPasswordDataLoaderDelegate-Protocol.h"

@class NSString, SPTLoginTheme, SPTRecoverAccountResetPasswordDataLoader, SPTRecoverAccountResetPasswordViewLogger, SPTSignupPasswordFieldValidator;
@protocol SPTRecoverAccountResetPasswordViewModelDelegate;

@interface SPTRecoverAccountResetPasswordViewModel : NSObject <SPTRecoverAccountResetPasswordDataLoaderDelegate>
{
    id <SPTRecoverAccountResetPasswordViewModelDelegate> _delegate;
    SPTRecoverAccountResetPasswordViewLogger *_logger;
    SPTLoginTheme *_theme;
    SPTRecoverAccountResetPasswordDataLoader *_dataLoader;
    SPTSignupPasswordFieldValidator *_passwordValidator;
    NSString *_passwordFieldText;
    NSString *_passwordConfirmationFieldText;
}

@property(retain, nonatomic) NSString *passwordConfirmationFieldText; // @synthesize passwordConfirmationFieldText=_passwordConfirmationFieldText;
@property(retain, nonatomic) NSString *passwordFieldText; // @synthesize passwordFieldText=_passwordFieldText;
@property(readonly, nonatomic) SPTSignupPasswordFieldValidator *passwordValidator; // @synthesize passwordValidator=_passwordValidator;
@property(readonly, nonatomic) SPTRecoverAccountResetPasswordDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTRecoverAccountResetPasswordViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTRecoverAccountResetPasswordViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetPasswordDataLoader:(id)arg1 didFailWithError:(id)arg2;
- (void)resetPasswordDataLoaderDidFinishWithSuccess:(id)arg1;
- (id)confirmationViewController;
- (_Bool)isInputValid;
- (void)userDidTouchUpinsideSubmitButton;
- (void)userDidChangeTextFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (id)dismissButtonText;
- (id)submitButtonLoadingText;
- (id)submitButtonText;
- (id)repeatPasswordLabelText;
- (id)newPasswordLabelText;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (id)initWithTheme:(id)arg1 dataLoader:(id)arg2 logger:(id)arg3 passwordValidator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

