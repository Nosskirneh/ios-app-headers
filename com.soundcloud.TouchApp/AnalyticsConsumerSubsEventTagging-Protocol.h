//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TaggingContext;

@protocol AnalyticsConsumerSubsEventTagging <NSObject>
- (void)tagConsumerSubscriptionImpressionType:(unsigned long long)arg1 object:(NSString *)arg2 screen:(long long)arg3 context:(TaggingContext *)arg4;
- (void)tagOfflineSyncImpressionEvent:(unsigned long long)arg1 impressionType:(unsigned long long)arg2 object:(NSString *)arg3 screen:(long long)arg4 context:(TaggingContext *)arg5;
- (void)tagOfflineSyncClickEvent:(unsigned long long)arg1 actionType:(unsigned long long)arg2 object:(NSString *)arg3 screen:(long long)arg4 context:(TaggingContext *)arg5;
@end

