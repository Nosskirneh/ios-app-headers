//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMBanner, IMRequestStatus, NSDictionary;

@protocol IMBannerDelegate <NSObject>
- (void)banner:(IMBanner *)arg1 rewardActionCompletedWithRewards:(NSDictionary *)arg2;
- (void)bannerDidDismissScreen:(IMBanner *)arg1;
- (void)bannerWillDismissScreen:(IMBanner *)arg1;
- (void)bannerDidPresentScreen:(IMBanner *)arg1;
- (void)bannerWillPresentScreen:(IMBanner *)arg1;
- (void)userWillLeaveApplicationFromBanner:(IMBanner *)arg1;
- (void)banner:(IMBanner *)arg1 didInteractWithParams:(NSDictionary *)arg2;
- (void)banner:(IMBanner *)arg1 didFailToLoadWithError:(IMRequestStatus *)arg2;
- (void)bannerDidFinishLoading:(IMBanner *)arg1;
@end

