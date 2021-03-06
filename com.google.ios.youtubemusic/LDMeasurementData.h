//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LDTimeBuckets, NSArray;

@interface LDMeasurementData : NSObject
{
    LDTimeBuckets *_timeOnScreen;
    double _maximumViewabilityPercentage;
    double _minimumViewabilityPercentage;
    LDTimeBuckets *_screenShareBuckets;
}

@property(nonatomic) double minimumViewabilityPercentage; // @synthesize minimumViewabilityPercentage=_minimumViewabilityPercentage;
@property(nonatomic) double maximumViewabilityPercentage; // @synthesize maximumViewabilityPercentage=_maximumViewabilityPercentage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *screenShareBuckets;
@property(readonly, nonatomic) NSArray *consecutiveTimeOnScreen;
@property(readonly, nonatomic) NSArray *maxConsecutiveTimeOnScreen;
@property(readonly, nonatomic) NSArray *timeOnScreen;
- (_Bool)viewed;
- (void)update:(int)arg1 coverage:(double)arg2 pauseMonitoring:(_Bool)arg3 screenShare:(double)arg4;
- (id)init;

@end

