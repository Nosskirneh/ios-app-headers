//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSZCounterValue, GSZEventMetricValue;

@protocol GSZStreamzService <NSObject>
- (void)logWithEventMetricValue:(GSZEventMetricValue *)arg1;
- (void)logWithCounterValue:(GSZCounterValue *)arg1;
@end

