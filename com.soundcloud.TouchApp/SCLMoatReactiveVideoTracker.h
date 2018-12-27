//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLMoatBaseVideoTracker.h"

@interface SCLMoatReactiveVideoTracker : SCLMoatBaseVideoTracker
{
    _Bool _muted;
    _Bool _startedPlaying;
    float _volume;
    float _aggregateVolume;
    unsigned long long _state;
    double _duration;
}

+ (id)classTag;
@property(nonatomic) _Bool startedPlaying; // @synthesize startedPlaying=_startedPlaying;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float aggregateVolume; // @synthesize aggregateVolume=_aggregateVolume;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)changeTargetLayer:(id)arg1 withContainingView:(id)arg2;
- (_Bool)trackVideoAd:(id)arg1 withLayer:(id)arg2 withContainingView:(id)arg3 withDurationMillis:(double)arg4;
- (void)updateAggregateVolume;
- (void)changeTargetLayer:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (_Bool)trackVideoAd:(id)arg1 withLayer:(id)arg2 withDurationMillis:(double)arg3;
- (void)destroy;
- (id)initWithPartnerCode:(id)arg1;
- (_Bool)timerRequired;
- (_Bool)isMuted;
- (float)playerVolume;
- (_Bool)isPlaying;
- (double)trackedPlayheadMS;
- (double)adDurationMS;

@end

