//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AELimiter : NSObject
{
    CDStruct_326dc85f _buffer;
    float _gain;
    int _state;
    int _framesSinceLastTrigger;
    int _framesToNextTrigger;
    float _triggerValue;
    struct AudioStreamBasicDescription _audioDescription;
    unsigned int _hold;
    unsigned int _attack;
    unsigned int _decay;
    float _level;
}

@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic) unsigned int decay; // @synthesize decay=_decay;
@property(nonatomic) unsigned int attack; // @synthesize attack=_attack;
@property(nonatomic) unsigned int hold; // @synthesize hold=_hold;
- (id)initWithNumberOfChannels:(int)arg1 sampleRate:(float)arg2;

@end

