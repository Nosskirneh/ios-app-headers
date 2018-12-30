//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGTouchViewController.h"

#import "LoaderDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AnimatedGradientButton, NSString, UITextField;

@interface ANGForgotPasswordViewController : ANGTouchViewController <UITextFieldDelegate, LoaderDelegate>
{
    double _originalY;
    double widthRatio;
    double heightRatio;
    UITextField *emailField;
    AnimatedGradientButton *recoverButton;
    _Bool showEmailSubmittedUI;
    NSString *_submittedEmailString;
}

@property(retain, nonatomic) NSString *submittedEmailString; // @synthesize submittedEmailString=_submittedEmailString;
- (void).cxx_destruct;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
- (void)loadingFinished:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)submitEmailForForgottenPassword;
- (void)resendEmailForForgottenPassword;
- (void)goToLogin;
- (void)setupUI;
- (void)setupSubmittedUI;
- (void)viewDidLayoutSubviews;
- (_Bool)transparentPurpleNavigationBar;
- (_Bool)hidesStatusBar;
- (void)setupButtonRatios;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewConstraintsBasedOnDevice;
- (void)viewDidLoad;
- (id)initWithEmailSubmitted:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
