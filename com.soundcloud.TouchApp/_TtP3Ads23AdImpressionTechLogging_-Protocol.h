//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol _TtP3Ads15PlayQueueAdItem_, _TtP8Features18PlayQueueItemTrack_;

@protocol _TtP3Ads23AdImpressionTechLogging_ <NSObject>
- (void)logNoAdShownEventFor:(id <_TtP8Features18PlayQueueItemTrack_>)arg1 with:(id <_TtP3Ads15PlayQueueAdItem_>)arg2 adNotShownReason:(long long)arg3;
- (void)logImpressionEventFor:(id <_TtP3Ads15PlayQueueAdItem_>)arg1;
@end
