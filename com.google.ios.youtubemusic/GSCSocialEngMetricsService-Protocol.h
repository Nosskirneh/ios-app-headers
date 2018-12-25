//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBInt32Array, NSArray, NSURL, SCLRequestMetrics, SocialEngData, SocialExtension;

@protocol GSCSocialEngMetricsService <NSObject>
- (void)updateSocialExtensionWithNetworkType:(SocialExtension *)arg1;
- (void)logMemoryWarningWithTimestamp:(long long)arg1 usedMemory:(unsigned int)arg2 freeMemory:(unsigned int)arg3;
- (void)logCrashesWithIDs:(NSArray *)arg1;
- (void)logReferrer:(NSURL *)arg1 source:(int)arg2 handledByApp:(_Bool)arg3;
- (void)logAppLaunchTime:(double)arg1;
- (void)logEngData:(SocialEngData *)arg1 withEventCode:(int)arg2 timestamp:(long long)arg3;
- (void)logEngData:(SocialEngData *)arg1 withTestCodes:(GPBInt32Array *)arg2;
- (void)logEngData:(SocialEngData *)arg1;
- (void)logDurationEvent:(int)arg1 withTime:(double)arg2;
- (void)logHTTPRequestMetricsBatch:(NSArray *)arg1;
- (void)logHTTPRequestMetrics:(SCLRequestMetrics *)arg1;
- (void)logEventWithCode:(int)arg1;
- (void)detectAndLogEngStatsWithTrigger:(long long)arg1;
@end

