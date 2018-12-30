//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGTouchViewController.h"

#import "MBProgressHUDDelegate-Protocol.h"

@class AnghamiHUD, GADBannerView, NSString, UIView;

@interface AnghamiViewController : ANGTouchViewController <MBProgressHUDDelegate>
{
    _Bool _isDisabledInOfflineMode;
    _Bool _isLogAnalyticsEvent;
    _Bool _isHideAds;
    _Bool _isShowMenuButton;
    _Bool _isUseFooterAd;
    _Bool _isHidePartnerLogo;
    _Bool _hasViewWillAppearRan;
    _Bool _lastIsOffline;
    UIView *_alphaView;
    AnghamiHUD *_localHUD;
    GADBannerView *_bannerView;
}

@property(nonatomic) _Bool lastIsOffline; // @synthesize lastIsOffline=_lastIsOffline;
@property(nonatomic) _Bool hasViewWillAppearRan; // @synthesize hasViewWillAppearRan=_hasViewWillAppearRan;
@property(retain, nonatomic) GADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) AnghamiHUD *localHUD; // @synthesize localHUD=_localHUD;
@property(nonatomic) _Bool isHidePartnerLogo; // @synthesize isHidePartnerLogo=_isHidePartnerLogo;
@property(nonatomic) _Bool isUseFooterAd; // @synthesize isUseFooterAd=_isUseFooterAd;
@property(nonatomic) _Bool isShowMenuButton; // @synthesize isShowMenuButton=_isShowMenuButton;
@property(readonly) _Bool isHideAds; // @synthesize isHideAds=_isHideAds;
@property(nonatomic) _Bool isLogAnalyticsEvent; // @synthesize isLogAnalyticsEvent=_isLogAnalyticsEvent;
@property(nonatomic) _Bool isDisabledInOfflineMode; // @synthesize isDisabledInOfflineMode=_isDisabledInOfflineMode;
@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
- (void).cxx_destruct;
- (void)addRoundCornersAndShadowToView:(id)arg1;
- (void)hudWasHidden:(id)arg1;
- (void)hideLocalHUD;
- (void)showLocalHUD;
- (void)removeAd;
- (_Bool)addAd;
- (void)willEnterOfflineMode;
- (void)willEnterOnlineMode;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)logAnalyticsEvent;
- (void)centerPanelChanged;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppearOnce:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)backgroundColor;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

