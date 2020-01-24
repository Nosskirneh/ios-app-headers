//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GADInterstitialDelegate-Protocol.h"
#import "JMenuTableViewControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class GADInterstitial, NSBundle, NSLayoutConstraint, NSMutableDictionary, NSString, UIView, UIVisualEffectView;

@interface JViewController_Base : UIViewController <JMenuTableViewControllerDelegate, GADInterstitialDelegate, UIPopoverPresentationControllerDelegate>
{
    NSBundle *mSettingsBundle;
    NSMutableDictionary *mButtonImageNames;
    NSMutableDictionary *mButtonColors;
    _Bool mViewIsVisible;
    GADInterstitial *mInterstitial;
    UIView *mBottomPaddingView;
    NSLayoutConstraint *mBottomPaddingViewHeightConstraint;
    UIVisualEffectView *_backgroundBlurEffectView;
}

+ (id)getSettingsString:(id)arg1;
@property(retain, nonatomic) UIVisualEffectView *backgroundBlurEffectView; // @synthesize backgroundBlurEffectView=_backgroundBlurEffectView;
- (void).cxx_destruct;
- (id)handleQuickSettings_YesNo:(id)arg1 title:(id)arg2;
- (id)setTwoFingerPanGesture:(id)arg1;
- (id)setGestureWithDirection:(id)arg1 direction:(unsigned long long)arg2 action:(SEL)arg3;
- (void)showFileInfo:(id)arg1;
- (void)setBottomPaddingViewHeight:(int)arg1;
- (void)initBottomPaddingView;
- (id)getBottomPaddingView;
- (void)sfxProfileChanging_exit:(id)arg1;
- (void)sfxProfileChanging_enter:(id)arg1;
- (void)openIn:(id)arg1;
- (void)onMenuSelected:(unsigned long long)arg1 owner:(id)arg2;
- (void)showSfxMenu:(id)arg1 sourceView:(id)arg2 showCenter:(_Bool)arg3;
- (void)showSfxMenu;
- (void)showSfxMenu:(id)arg1 sourceView:(id)arg2;
- (id)getMenuMoreString:(id)arg1;
- (id)getGapMenuString;
- (id)getSettingsString:(id)arg1;
- (id)getSettingsBundle;
- (id)swipeButtonWithImage:(id)arg1;
- (id)getButtonColors;
- (id)getMenuIconNames;
- (struct CGRect)getMultiSelectMenuButtonRect;
- (struct CGRect)getMenuButtonRect;
- (id)getCustomNaviSubtitleView;
- (id)getCustomNaviTitleView;
- (id)getCustomNaviBarView;
- (struct CGRect)getCustomNaviBarFrame;
- (id)getIPhoneOrIPadImage:(id)arg1;
- (id)getIPhoneOrScaledIPadImage:(id)arg1 scale:(float)arg2;
- (id)getIPhoneOrScaledIPadImage:(id)arg1;
- (id)getExtraStoryboardName;
- (struct UIEdgeInsets)getNowPlayingCurPosEdgeInsets;
- (struct UIEdgeInsets)getBrowserCurPosEdgeInsets;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)onJInterstitialAd:(id)arg1;
- (void)interstitialWillLeaveApplication:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)initInterstitialAd;
- (void)applyBackgroundBlurWithStyle:(long long)arg1;
- (long long)getCurrentOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)viewIsVisible;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
