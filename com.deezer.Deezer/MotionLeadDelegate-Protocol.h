//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol MotionLeadDelegate <NSObject>

@optional
- (void)motionLeadDidReceiveTap;
- (void)motionLeadWillLeaveApplication;
- (void)motionLeadDidDisappear;
- (void)motionLeadWillDisappear;
- (void)motionLeadDidAppear;
- (void)motionLeadWillAppear;
- (void)motionLeadDidFailToDisplayAdWithError:(NSError *)arg1;
- (void)motionLeadDidFailToLoadAdWithError:(NSError *)arg1;
- (void)motionLeadDidLoadAd;
@end

