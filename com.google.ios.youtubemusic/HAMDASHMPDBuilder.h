//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBuildableObjectBuilder.h"

@class NSDate, NSMutableArray, NSURL;

@interface HAMDASHMPDBuilder : HAMBuildableObjectBuilder
{
    NSMutableArray *_periods;
    long long _type;
    NSDate *_availabilityStartTime;
    double _minBufferTime;
    double _minUpdatePeriod;
    double _timeShiftBufferDepth;
    NSURL *_location;
    double _absoluteTimeOfFetch;
    CDStruct_1b6d18a9 _duration;
}

@property(nonatomic) double absoluteTimeOfFetch; // @synthesize absoluteTimeOfFetch=_absoluteTimeOfFetch;
@property(retain, nonatomic) NSURL *location; // @synthesize location=_location;
@property(nonatomic) double timeShiftBufferDepth; // @synthesize timeShiftBufferDepth=_timeShiftBufferDepth;
@property(nonatomic) double minUpdatePeriod; // @synthesize minUpdatePeriod=_minUpdatePeriod;
@property(nonatomic) double minBufferTime; // @synthesize minBufferTime=_minBufferTime;
@property(retain, nonatomic) NSDate *availabilityStartTime; // @synthesize availabilityStartTime=_availabilityStartTime;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *periods; // @synthesize periods=_periods;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)addPeriods:(id)arg1;
- (void)addPeriod:(id)arg1;
- (id)build;
- (id)init;

@end

