//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DataCounters : NSObject
{
    double last_event_post_time;
}

+ (double)getAverageBitRate;
+ (void)internetChanged:(long long)arg1;
+ (void)reset;
+ (void)addSampling;
+ (void)addMeasurement:(double)arg1;
+ (void)calcCutOver;
+ (id)getDataCounters;
+ (id)sharedManager;
@property(nonatomic) double last_event_post_time; // @synthesize last_event_post_time;
- (double)getStreamingData;
- (double)getApiDataReceived;
- (double)getApiDataSent;
- (void)setStreamingData:(double)arg1;
- (void)setApiDataReceived:(double)arg1;
- (void)setApiDataSent:(double)arg1;
- (void)getStoredData;
- (void)resetData;
- (id)init;

@end
