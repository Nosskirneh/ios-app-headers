//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface SPTStartupDurationTracker : NSObject
{
    NSNumber *_durationTrackingEnabled;
    NSMutableDictionary *_durations;
    NSMutableDictionary *_inFlightDurations;
}

@property(readonly, nonatomic) NSMutableDictionary *inFlightDurations; // @synthesize inFlightDurations=_inFlightDurations;
@property(readonly, nonatomic) NSMutableDictionary *durations; // @synthesize durations=_durations;
- (void).cxx_destruct;
- (id)longestDurationsForType:(id)arg1 maxDurations:(long long)arg2;
- (id)durationsForType:(id)arg1;
- (void)addDuration:(double)arg1 type:(id)arg2 key:(id)arg3;
- (void)endDurationOfType:(id)arg1 key:(id)arg2;
- (void)startDurationOfType:(id)arg1 key:(id)arg2;
- (void)reset;
@property(readonly, nonatomic, getter=isDurationTrackingEnabled) _Bool durationTrackingEnabled;
- (id)init;

@end

