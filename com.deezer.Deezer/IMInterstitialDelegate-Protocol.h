//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMInterstitial, IMRequestStatus, NSDictionary;

@protocol IMInterstitialDelegate <NSObject>

@optional
- (void)userWillLeaveApplicationFromInterstitial:(IMInterstitial *)arg1;
- (void)interstitial:(IMInterstitial *)arg1 rewardActionCompletedWithRewards:(NSDictionary *)arg2;
- (void)interstitial:(IMInterstitial *)arg1 didInteractWithParams:(NSDictionary *)arg2;
- (void)interstitialDidDismiss:(IMInterstitial *)arg1;
- (void)interstitialWillDismiss:(IMInterstitial *)arg1;
- (void)interstitial:(IMInterstitial *)arg1 didFailToPresentWithError:(IMRequestStatus *)arg2;
- (void)interstitialDidPresent:(IMInterstitial *)arg1;
- (void)interstitialWillPresent:(IMInterstitial *)arg1;
- (void)interstitial:(IMInterstitial *)arg1 didFailToLoadWithError:(IMRequestStatus *)arg2;
- (void)interstitialDidFinishLoading:(IMInterstitial *)arg1;
- (void)interstitialDidReceiveAd:(IMInterstitial *)arg1;
@end

