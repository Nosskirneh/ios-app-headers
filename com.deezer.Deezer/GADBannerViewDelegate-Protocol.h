//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADBannerView, GADRequestError;

@protocol GADBannerViewDelegate <NSObject>

@optional
- (void)adViewWillLeaveApplication:(GADBannerView *)arg1;
- (void)adViewDidDismissScreen:(GADBannerView *)arg1;
- (void)adViewWillDismissScreen:(GADBannerView *)arg1;
- (void)adViewWillPresentScreen:(GADBannerView *)arg1;
- (void)adView:(GADBannerView *)arg1 didFailToReceiveAdWithError:(GADRequestError *)arg2;
- (void)adViewDidReceiveAd:(GADBannerView *)arg1;
@end
