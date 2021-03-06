//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPOTMoatAdEvent : NSObject
{
    float _adVolume;
    unsigned long long _eventType;
    double _adPlayhead;
    double _timeStamp;
}

+ (id)adEventStrings;
@property(readonly) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property float adVolume; // @synthesize adVolume=_adVolume;
@property double adPlayhead; // @synthesize adPlayhead=_adPlayhead;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;
- (id)asDict;
- (id)eventAsString;
- (id)initWithType:(unsigned long long)arg1 withPlayheadMillis:(double)arg2 withVolume:(float)arg3;
- (id)initWithType:(unsigned long long)arg1 withPlayheadMillis:(double)arg2;

@end

