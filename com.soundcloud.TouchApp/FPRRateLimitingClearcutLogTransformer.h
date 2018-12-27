//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLogTransformer-Protocol.h"

@class NSDate, NSString;
@protocol FPRDate;

@interface FPRRateLimitingClearcutLogTransformer : NSObject <CCTClearcutLogTransformer>
{
    id <FPRDate> _date;
    double _overrideRate;
    double _overrideNetworkRate;
    NSDate *_lastEventTime;
    NSDate *_lastNetworkEventTime;
    long long _burstSize;
    long long _networkEventburstSize;
    long long _allowedEventsCount;
    long long _allowedNetworkEventsCount;
}

@property(nonatomic) long long allowedNetworkEventsCount; // @synthesize allowedNetworkEventsCount=_allowedNetworkEventsCount;
@property(nonatomic) long long allowedEventsCount; // @synthesize allowedEventsCount=_allowedEventsCount;
@property(nonatomic) long long networkEventburstSize; // @synthesize networkEventburstSize=_networkEventburstSize;
@property(nonatomic) long long burstSize; // @synthesize burstSize=_burstSize;
@property(retain, nonatomic) NSDate *lastNetworkEventTime; // @synthesize lastNetworkEventTime=_lastNetworkEventTime;
@property(retain, nonatomic) NSDate *lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(nonatomic) double overrideNetworkRate; // @synthesize overrideNetworkRate=_overrideNetworkRate;
@property(nonatomic) double overrideRate; // @synthesize overrideRate=_overrideRate;
@property(retain, nonatomic) id <FPRDate> date; // @synthesize date=_date;
- (void).cxx_destruct;
- (_Bool)isNetworkEvent:(id)arg1;
- (double)resolvedNetworkRateForLogSource:(int)arg1;
- (double)resolvedRateForLogSource:(int)arg1;
- (long long)numberOfAllowedEvents:(long long)arg1 timeInterval:(double)arg2 burstSize:(long long)arg3 eventRate:(double)arg4;
- (id)transform:(id)arg1;
- (id)init;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

