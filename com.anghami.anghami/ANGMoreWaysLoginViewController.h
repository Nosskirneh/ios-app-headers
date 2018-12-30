//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGLoginGeneralViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class ANGLoginSocialNetworkButton, ANGLoginTextField, ANGUnderlinedButton, NSString, UIView;

@interface ANGMoreWaysLoginViewController : ANGLoginGeneralViewController <UITextFieldDelegate>
{
    UIView *_containerView;
    ANGLoginTextField *_emailTextField;
    ANGUnderlinedButton *_skipButton;
    ANGLoginSocialNetworkButton *_twitterButton;
    ANGLoginSocialNetworkButton *_googleButton;
}

@property(nonatomic) __weak ANGLoginSocialNetworkButton *googleButton; // @synthesize googleButton=_googleButton;
@property(nonatomic) __weak ANGLoginSocialNetworkButton *twitterButton; // @synthesize twitterButton=_twitterButton;
@property(nonatomic) __weak ANGUnderlinedButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak ANGLoginTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)authManagerFailedNotif;
- (void)skipClicked;
- (void)skipButtonClicked:(id)arg1;
- (void)initSkipButton;
- (void)googleButtonClicked:(id)arg1;
- (void)twitterButtonClicked:(id)arg1;
- (void)initSocialNetworksButtons;
- (void)continueClicked:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setupSignals;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

