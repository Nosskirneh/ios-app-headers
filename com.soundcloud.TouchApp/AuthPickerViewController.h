//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AuthDelegate-Protocol.h"

@class Lawyer, NSString, UIBarButtonItem, UIButton, UILabel, UITextView;
@protocol AuthPickerDelegate;

@interface AuthPickerViewController : BaseViewController <AuthDelegate>
{
    long long _screen;
    id <AuthPickerDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_signUpButton;
    UIButton *_signInButton;
    UIBarButtonItem *_cancelButton;
    UITextView *_privacyPolicyTextView;
    Lawyer *_lawyer;
}

@property(readonly, nonatomic) Lawyer *lawyer; // @synthesize lawyer=_lawyer;
@property(retain, nonatomic) UITextView *privacyPolicyTextView; // @synthesize privacyPolicyTextView=_privacyPolicyTextView;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UIButton *signUpButton; // @synthesize signUpButton=_signUpButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AuthPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (void)applyTranslations;
- (void)dismissAuthControllers;
- (id)segueIdentifierForScreen:(unsigned long long)arg1;
- (void)pushToScreenIfNecessary:(unsigned long long)arg1;
- (void)authCancelled;
- (void)authCompletedForUser:(id)arg1;
- (void)cancelButtonPressed;
- (void)signUpButtonPressed;
- (void)signInButtonPressed;
- (void)showAuthScreen:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLoad;
- (id)initWithLawyer:(id)arg1 coder:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
