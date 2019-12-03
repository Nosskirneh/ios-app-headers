//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, RHAccountController, RHAppDelegateRouter, RHNavigationService, ZDSDeferred;

@interface RHUpsellController : NSObject
{
    RHNavigationService *_navigationService;
    RHAppDelegateRouter *_appDelegate;
    FBKVOController *_keyValueObserver;
    ZDSDeferred *_showUpsellDeferred;
}

@property(retain, nonatomic) ZDSDeferred *showUpsellDeferred; // @synthesize showUpsellDeferred=_showUpsellDeferred;
@property(retain, nonatomic) FBKVOController *keyValueObserver; // @synthesize keyValueObserver=_keyValueObserver;
@property(readonly, nonatomic) RHAppDelegateRouter *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) RHNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)showTuneAdvertisment:(long long)arg1;
- (void)showNoCCFullScreenUpsellWithContext:(long long)arg1 upsellCompletionCallback:(CDUnknownBlockType)arg2;
- (id)dateSinceLastLaunchUpsell;
- (long long)trackRadioStartedCounter;
- (id)userModel;
- (id)baseViewController;
- (_Bool)isRadioTier;
- (id)dataController;
- (id)permissionsController;
- (id)daysLeftMessage;
@property(readonly, nonatomic) _Bool isNoCCTrial;
- (id)radioUpsellBannerMessageLabelTextForContext:(int)arg1;
- (id)upsellPlayerOverlaySubTitleLabelText;
- (id)upsellPlayerOverlayHeadlineLabelText;
- (id)upsellBannerButtonTitleStringForContext:(int)arg1;
- (id)upsellBannerMessageLabelTextForContext:(int)arg1;
- (id)upsellBannerHeaderLabelTextForContext:(int)arg1;
- (void)showFullScreenLaunchUpsell:(CDUnknownBlockType)arg1;
- (void)showFullScreenUpsellWithDownloadContext:(CDUnknownBlockType)arg1;
- (void)showFullScreenUpsellWithPlayLimitContext:(CDUnknownBlockType)arg1;
- (void)showFullScreenUpsellWithDefaultContext:(CDUnknownBlockType)arg1;
- (void)showFullScreenUpsellWithContext:(long long)arg1 upsellCompletionCallback:(CDUnknownBlockType)arg2;
- (long long)settingsUpsell;
- (_Bool)shouldShowFullScreenLaunchUpsell;
- (_Bool)shouldShowUpsellButtonInContext:(int)arg1;
- (_Bool)shouldShowFullPlayerUpsell;
- (_Bool)shouldShowPlayerUpsell;
- (_Bool)shouldShowUpsellBannerIn:(int)arg1;
- (_Bool)shouldShowBecauseOfNoCCTrial;
- (void)dealloc;
- (void)setUnresolvedDeferred:(id)arg1;
- (id)purchaseController;
@property(readonly, nonatomic) RHAccountController *accountController;
- (id)initWithAppDelegate:(id)arg1;

@end
