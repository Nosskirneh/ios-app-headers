//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class ForgotPasswordPresenter, Lawyer, LegacyLoadingView, NSString, RACDisposable, ResetPasswordService, SmartCell, UIBarButtonItem, UITextView;
@protocol Validator, _TtP2UI14AlertPresenter_;

@interface ForgotPasswordViewController : BaseViewController
{
    ResetPasswordService *_service;
    ForgotPasswordPresenter *_presenter;
    id <_TtP2UI14AlertPresenter_> _successAlertPresenter;
    id <_TtP2UI14AlertPresenter_> _failureAlertPresenter;
    LegacyLoadingView *_loadingView;
    id <Validator> _validator;
    Lawyer *_lawyer;
    NSString *_initialEmail;
    RACDisposable *_submitDisposable;
    RACDisposable *_performDisposable;
    SmartCell *_emailTextField;
    UIBarButtonItem *_cancelButton;
    UITextView *_supportTextView;
}

@property(nonatomic) __weak UITextView *supportTextView; // @synthesize supportTextView=_supportTextView;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak SmartCell *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) RACDisposable *performDisposable; // @synthesize performDisposable=_performDisposable;
@property(retain, nonatomic) RACDisposable *submitDisposable; // @synthesize submitDisposable=_submitDisposable;
@property(retain, nonatomic) NSString *initialEmail; // @synthesize initialEmail=_initialEmail;
@property(readonly, nonatomic) Lawyer *lawyer; // @synthesize lawyer=_lawyer;
@property(readonly, nonatomic) id <Validator> validator; // @synthesize validator=_validator;
@property(readonly, nonatomic) LegacyLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) id <_TtP2UI14AlertPresenter_> failureAlertPresenter; // @synthesize failureAlertPresenter=_failureAlertPresenter;
@property(retain, nonatomic) id <_TtP2UI14AlertPresenter_> successAlertPresenter; // @synthesize successAlertPresenter=_successAlertPresenter;
@property(readonly, nonatomic) ForgotPasswordPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) ResetPasswordService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)applyTranslations;
- (id)passwordResetPerformSignal;
- (id)observePasswordResetPerform;
- (id)observePasswordResetSubmit;
- (void)stopObservingPasswordResetSubmitAndPerform;
- (void)startObservingPasswordResetPerform;
- (void)startObservingPasswordResetSubmit;
- (void)cancelButtonPressed:(id)arg1;
- (long long)screen;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPresenter:(id)arg1 successAlertPresenter:(id)arg2 failureAlertPresenter:(id)arg3 loadingView:(id)arg4 service:(id)arg5 validator:(id)arg6 lawyer:(id)arg7 coder:(id)arg8;
- (id)initWithCoder:(id)arg1;

@end

