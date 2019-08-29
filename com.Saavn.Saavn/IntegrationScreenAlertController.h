//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnAlertController.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AVPlayer, AVPlayerLayer, NSString, UIActivityIndicatorView, UIButton, UIImageView;

@interface IntegrationScreenAlertController : SaavnAlertController <TTTAttributedLabelDelegate>
{
    UIImageView *phone;
    AVPlayer *videoPlayer;
    AVPlayerLayer *videoPlayerLayer;
    _Bool darkMode;
    _Bool autoZLAlogin;
    UIActivityIndicatorView *spinner;
    UIButton *ctaButton;
    _Bool isLoginPerforming;
    int _integrationAlertType;
}

@property(nonatomic) int integrationAlertType; // @synthesize integrationAlertType=_integrationAlertType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addSpinnerToView:(id)arg1 placeOnRight:(_Bool)arg2 color:(id)arg3;
- (void)removeSpinner;
- (void)handleCTAClick;
- (void)performAutoZLALogin;
- (void)showLoginScreen;
- (void)dismissLoginView;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)getAlertDetails;
- (void)playerStart;
- (void)playerReachedEnd:(id)arg1;
- (void)initProWelcome;
- (void)initIntegrationAlertModal;
- (void)iPadRefreshLayout;
- (void)orientationChange;
- (void)viewDidLoad;
- (id)fillColor;
- (id)descriptionColor;
- (id)tintColor;
- (id)titleColor;
- (id)backgroundColor;
- (void)updateNavBarAppearance;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithIntegrationAlertType:(int)arg1 isDarkMode:(_Bool)arg2 performAutoLogin:(_Bool)arg3;
- (id)init;
- (id)initWithIntegrationAlertType:(int)arg1 isDarkMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

