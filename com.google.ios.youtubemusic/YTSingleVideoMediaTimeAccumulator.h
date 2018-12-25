//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTSingleVideoMediaTimeAccumulator : NSObject
{
    double _lastSeenMediaTime;
    long long _lastSeenMediaState;
    double _accumulatedMediaTime;
}

@property(readonly, nonatomic) double accumulatedMediaTime; // @synthesize accumulatedMediaTime=_accumulatedMediaTime;
- (_Bool)accumulateMediaTimeWithPreviousMediaState:(long long)arg1 previousMediaTime:(double)arg2 newMediaTime:(double)arg3;
- (_Bool)setCurrentMediaTime:(CDStruct_d60ef703)arg1 currentMediaState:(long long)arg2;
- (id)init;

@end
