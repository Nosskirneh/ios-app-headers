//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZREqualizerImplementation-Protocol.h"

@class AVAudioEngine, AVAudioMixerNode, AVAudioUnitEQ;

@interface DZREqualizerAVAudioEngine : NSObject <DZREqualizerImplementation>
{
    AVAudioEngine *_engine;
    AVAudioUnitEQ *_equalizerNode;
    AVAudioMixerNode *_mixerNode;
}

@property(retain, nonatomic) AVAudioMixerNode *mixerNode; // @synthesize mixerNode=_mixerNode;
@property(retain, nonatomic) AVAudioUnitEQ *equalizerNode; // @synthesize equalizerNode=_equalizerNode;
@property(nonatomic) __weak AVAudioEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)setGain:(float)arg1 forBandAtIndex:(unsigned long long)arg2;
- (void)setup;
@property(nonatomic, getter=isActive) _Bool active;
- (id)initWithEngine:(id)arg1;

@end

