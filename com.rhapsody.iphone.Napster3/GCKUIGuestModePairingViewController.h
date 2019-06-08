//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKDigitTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GCKGuestModePairingUI, NSArray, NSString, NSUserDefaults, UIActivityIndicatorView, UIButton, UILabel, UITapGestureRecognizer, UIView;

@interface GCKUIGuestModePairingViewController : UIViewController <GCKDigitTextFieldDelegate, UITextFieldDelegate>
{
    UITapGestureRecognizer *_tapRecognizer;
    NSUserDefaults *_userDefaults;
    UIView *_currentView;
    double _keyboardHeight;
    _Bool _welcomeViewSettingsButton;
    _Bool _shown;
    UIViewController *_presentationVC;
    GCKGuestModePairingUI *_pairingUI;
    long long _options;
    UIView *_welcomeView;
    UIButton *_welcomeViewOkButton;
    UIButton *_welcomViewSkipButton;
    UILabel *_welcomeViewDescription;
    UIView *_connectingView;
    UIButton *_connectingViewSkipButton;
    UIActivityIndicatorView *_connectingViewActivityIndicator;
    UIView *_enterPINView;
    UIButton *_enterPINViewListenButton;
    UIButton *_enterPINViewConnectButton;
    NSArray *_digits;
}

+ (void)resetSettings;
@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) UIButton *enterPINViewConnectButton; // @synthesize enterPINViewConnectButton=_enterPINViewConnectButton;
@property(retain, nonatomic) UIButton *enterPINViewListenButton; // @synthesize enterPINViewListenButton=_enterPINViewListenButton;
@property(retain, nonatomic) UIView *enterPINView; // @synthesize enterPINView=_enterPINView;
@property(retain, nonatomic) UIActivityIndicatorView *connectingViewActivityIndicator; // @synthesize connectingViewActivityIndicator=_connectingViewActivityIndicator;
@property(retain, nonatomic) UIButton *connectingViewSkipButton; // @synthesize connectingViewSkipButton=_connectingViewSkipButton;
@property(retain, nonatomic) UIView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) UILabel *welcomeViewDescription; // @synthesize welcomeViewDescription=_welcomeViewDescription;
@property(retain, nonatomic) UIButton *welcomViewSkipButton; // @synthesize welcomViewSkipButton=_welcomViewSkipButton;
@property(retain, nonatomic) UIButton *welcomeViewOkButton; // @synthesize welcomeViewOkButton=_welcomeViewOkButton;
@property(retain, nonatomic) UIView *welcomeView; // @synthesize welcomeView=_welcomeView;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) __weak GCKGuestModePairingUI *pairingUI; // @synthesize pairingUI=_pairingUI;
- (void).cxx_destruct;
- (void)onFailure;
- (void)onClose;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)updateConnectButtonState;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onDigitValueChanged:(id)arg1;
- (void)textFieldDidDelete:(id)arg1;
- (void)onEnterPinViewConnectClicked:(id)arg1;
- (void)onEnterPinViewListenClicked:(id)arg1;
- (void)showEnterPinView;
- (void)onConnectingViewSkipClicked:(id)arg1;
- (void)showConnectingView;
- (void)onWelcomeViewSkipClicked:(id)arg1;
- (void)onWelcomeViewConnectClicked:(id)arg1;
- (void)showWelcomeView;
- (void)updateWelcomeView;
- (void)animateToScreenPosition;
- (void)setCurrentView:(id)arg1;
- (void)setOriginForView:(id)arg1;
- (void)updateSubViewsOrigin;
- (void)setRoundedCornersForView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)orientationChanged:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)appDidEnterBackground;
- (void)showPINEntry;
- (void)closeDialogWithAnimation:(_Bool)arg1;
- (void)requestOrStartListen;
- (void)showPairingDialog;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

