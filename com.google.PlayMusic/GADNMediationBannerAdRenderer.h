//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNMediatedAdRenderer.h"

@class GADNBannerAd, GADNCroppingAdView, GADNMediatedIntermission;

@interface GADNMediationBannerAdRenderer : GADNMediatedAdRenderer
{
    GADNBannerAd *_bannerAd;
    _Bool _clickEventReceived;
    CDUnknownBlockType _renderCompletionHandler;
    GADNCroppingAdView *_croppingView;
    GADNMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (id)viewControllerForPresentingModalView;
- (void)reportClick;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)adapterCompletedLoadWithAdView:(id)arg1 error:(id)arg2;

@end
