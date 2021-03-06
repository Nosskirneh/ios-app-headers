//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, SASNativeAd;

@protocol SASNativeRequestManagerDelegate <NSObject>
- (void)requestManagerDidFailDownloadingAdWithError:(NSError *)arg1 insertionID:(NSString *)arg2;
- (void)requestManagerDidFinishDownloadingMediationAds:(NSArray *)arg1 withPremiumAd:(SASNativeAd *)arg2;
- (void)requestManagerDidFinishDownloadingAd:(SASNativeAd *)arg1;
@end

