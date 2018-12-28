//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMTabbedViewController.h"

#import "GPMInfoCardDelegate-Protocol.h"

@class GPMInfoCard, UIButton, UIView;

@interface GPMHomeViewController : GPMTabbedViewController <GPMInfoCardDelegate>
{
    UIView *_infoBannerContainerView;
    UIButton *_infoBannerShadeButton;
    GPMInfoCard *_infoBannerCard;
}

- (void).cxx_destruct;
- (_Bool)shouldRefocusA11yOnReloadOfCollectionVC:(id)arg1;
- (void)infoCard:(id)arg1 clickedButtonWithViewModel:(id)arg2;
- (void)didClickButtonInInfoCard:(id)arg1 withButtonIndex:(unsigned long long)arg2 withActionItemType:(long long)arg3;
- (id)infoBannerContainerView;
- (void)logBottomSheetMessageClickWithLoggingInfo:(id)arg1 isDismissal:(_Bool)arg2;
- (void)logBottomSheetMessageImpressionWithLoggingInfo:(id)arg1;
- (long long)playLogSection;
- (void)trackBottomSheetMessageDismissal:(id)arg1 withDismissalToken:(id)arg2;
- (void)dismissInfoCard;
- (void)tapOutsideDisallowed;
- (void)didDismissInfoCardByTappingOutside;
- (void)setShadeButtonTargetWithAllowTapOutside:(_Bool)arg1;
- (void)displayInfoBannerWithLocalInfoCard:(id)arg1;
- (void)displayInfoBannerWithBottomSheetMessage:(id)arg1;
- (void)displayInfoBanner:(id)arg1 allowTapOutside:(_Bool)arg2;
- (void)hideInfoBanner;
- (_Bool)canDisplayInfoBanner;
- (void)fetchAndDisplayInfoMessageForSlot:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

