//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABKNetworkFlushInterval : NSObject
{
    double _currentFlushInterval;
    double _baseFlushInterval;
}

+ (long long)exponentialBackoffWithMaxValue:(long long)arg1 previousValue:(long long)arg2 initialValue:(long long)arg3;
@property double baseFlushInterval; // @synthesize baseFlushInterval=_baseFlushInterval;
@property double currentFlushInterval; // @synthesize currentFlushInterval=_currentFlushInterval;
- (void)backOffTimeIntervalWithMaxTimeInterval:(double)arg1;
- (_Bool)resetCurrentTimeInterval;
- (double)timeInterval;
- (id)initWithBaseTimeInterval:(double)arg1;

@end

