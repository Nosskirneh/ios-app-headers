//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHUpgradeViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, RHSocialController, RHStackView, UIButton, UILabel, UITextView, UIView;
@protocol RHAccountUpdateService, RHAlertPresenter;

@interface RHUpdateAccountViewController : RHUpgradeViewController <UITextFieldDelegate, UITextViewDelegate>
{
    NSLayoutConstraint *_scrollViewBottom;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_inputContainerView;
    UIButton *_createAccountButton;
    UIButton *_facebookSignIn;
    UITextView *_termsAndPrivacyTextView;
    RHStackView *_socialView;
    RHStackView *_contentView;
    id <RHAccountUpdateService> _accountUpdateService;
    RHSocialController *_socialController;
    long long _upsellContext;
    id <RHAlertPresenter> _alertPresenter;
}

@property(retain, nonatomic) id <RHAlertPresenter> alertPresenter; // @synthesize alertPresenter=_alertPresenter;
@property(nonatomic) long long upsellContext; // @synthesize upsellContext=_upsellContext;
@property(retain, nonatomic) RHSocialController *socialController; // @synthesize socialController=_socialController;
@property(retain, nonatomic) id <RHAccountUpdateService> accountUpdateService; // @synthesize accountUpdateService=_accountUpdateService;
@property(nonatomic) __weak RHStackView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak RHStackView *socialView; // @synthesize socialView=_socialView;
@property(nonatomic) __weak UITextView *termsAndPrivacyTextView; // @synthesize termsAndPrivacyTextView=_termsAndPrivacyTextView;
@property(nonatomic) __weak UIButton *facebookSignIn; // @synthesize facebookSignIn=_facebookSignIn;
@property(nonatomic) __weak UIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(nonatomic) __weak UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewBottom; // @synthesize scrollViewBottom=_scrollViewBottom;
- (void).cxx_destruct;
- (id)metricsScreenName;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setLeftNavigationButton:(long long)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)iapWorkflow:(id)arg1 completedLogInWithSuccess:(_Bool)arg2;
- (void)dismissViewIfNeeded;
- (void)finalizePurchaseSequence;
- (void)resignKeyboard;
- (void)showAccountUpdated;
- (void)showSigninFailedAlert;
- (id)signInWithEmail:(id)arg1 password:(id)arg2 loginMethod:(long long)arg3;
- (void)notifyUpgradeAccountFailed:(id)arg1;
- (void)updateAccount:(id)arg1;
- (void)showAlertForFailedFacebookLogin;
- (void)fetchFacebookEmailAndUpdate:(id)arg1;
- (void)cancelAccountUpdate:(id)arg1;
- (void)updateCreateAccountButton;
- (void)dealloc;
- (_Bool)showNavigationBar;
- (void)setupSubviews;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1 upsellContext:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
