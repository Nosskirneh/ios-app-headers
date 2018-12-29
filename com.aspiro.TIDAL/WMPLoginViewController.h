//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "_TtP4WiMP28DialogWithTextFieldsDelegate_-Protocol.h"

@class NSString, UIActivityIndicatorView, UIBarButtonItem, UIButton, UILabel, UIScrollView, UITextField, _TtC4WiMP19RoundedCornerButton;
@protocol WMPLoginViewControllerDelegate;

@interface WMPLoginViewController : UIViewController <UITextFieldDelegate, _TtP4WiMP28DialogWithTextFieldsDelegate_>
{
    id <WMPLoginViewControllerDelegate> _delegate;
    UIBarButtonItem *_cancelButton;
    _TtC4WiMP19RoundedCornerButton *_loginUsingThirdPartyServiceButton;
    _TtC4WiMP19RoundedCornerButton *_loginUsingTwitterButton;
    _TtC4WiMP19RoundedCornerButton *_loginUsingUsernameButton;
    UIButton *_forgottenPasswordButton;
    UILabel *_orLabel;
    UIScrollView *_scrollView;
    UITextField *_usernameField;
    UITextField *_passwordField;
    unsigned long long _selectedThirdPartyLoginService;
    UIActivityIndicatorView *_loginActivityIndicatorView;
}

+ (id)getInstance;
@property(retain, nonatomic) UIActivityIndicatorView *loginActivityIndicatorView; // @synthesize loginActivityIndicatorView=_loginActivityIndicatorView;
@property(nonatomic) unsigned long long selectedThirdPartyLoginService; // @synthesize selectedThirdPartyLoginService=_selectedThirdPartyLoginService;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) UITextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *orLabel; // @synthesize orLabel=_orLabel;
@property(retain, nonatomic) UIButton *forgottenPasswordButton; // @synthesize forgottenPasswordButton=_forgottenPasswordButton;
@property(retain, nonatomic) _TtC4WiMP19RoundedCornerButton *loginUsingUsernameButton; // @synthesize loginUsingUsernameButton=_loginUsingUsernameButton;
@property(retain, nonatomic) _TtC4WiMP19RoundedCornerButton *loginUsingTwitterButton; // @synthesize loginUsingTwitterButton=_loginUsingTwitterButton;
@property(retain, nonatomic) _TtC4WiMP19RoundedCornerButton *loginUsingThirdPartyServiceButton; // @synthesize loginUsingThirdPartyServiceButton=_loginUsingThirdPartyServiceButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <WMPLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupLocalizableStrings;
- (void)setupViews;
- (void)addActivityViewToButton:(id)arg1;
- (void)enableControls:(_Bool)arg1;
- (unsigned long long)loginServiceForLanguage:(id)arg1 andLocale:(id)arg2;
- (unsigned long long)loginServiceForCountryCode:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)didPressResetPasswordButton:(id)arg1;
- (void)didPressLoginUsingUsernameButton:(id)arg1;
- (void)userDidLoggedIn;
- (void)didPressLoginUsingTwitterButton:(id)arg1;
- (void)didPressLoginUsingThirdPartyServiceButton:(id)arg1;
- (void)didPressCancelButton:(id)arg1;
- (void)didPressSwitchLoginMethodButton:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)addTextFieldEventObservers;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)resetLoginView;
- (void)loginDidFailWithSubstatusErrorCode:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
