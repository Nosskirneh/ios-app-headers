//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZREqualizerImplementation-Protocol.h"

@class AEAudioController, DZRAnalogFilter, DZRAnalogFilterBuffer;
@protocol DZREqualizerTAAEDelegate;

@interface DZREqualizerTAAE : NSObject <DZREqualizerImplementation>
{
    _Bool active;
    id <DZREqualizerTAAEDelegate> _delegate;
    AEAudioController *_mixer;
    DZRAnalogFilterBuffer *_filterBuffer;
    DZRAnalogFilter *_lowShelfFilter;
    DZRAnalogFilter *_lowPeakFilter;
    DZRAnalogFilter *_midPeakFilter;
    DZRAnalogFilter *_highPeakFilter;
    DZRAnalogFilter *_highShelfFilter;
}

@property(retain, nonatomic) DZRAnalogFilter *highShelfFilter; // @synthesize highShelfFilter=_highShelfFilter;
@property(retain, nonatomic) DZRAnalogFilter *highPeakFilter; // @synthesize highPeakFilter=_highPeakFilter;
@property(retain, nonatomic) DZRAnalogFilter *midPeakFilter; // @synthesize midPeakFilter=_midPeakFilter;
@property(retain, nonatomic) DZRAnalogFilter *lowPeakFilter; // @synthesize lowPeakFilter=_lowPeakFilter;
@property(retain, nonatomic) DZRAnalogFilter *lowShelfFilter; // @synthesize lowShelfFilter=_lowShelfFilter;
@property(retain, nonatomic) DZRAnalogFilterBuffer *filterBuffer; // @synthesize filterBuffer=_filterBuffer;
@property(nonatomic) __weak AEAudioController *mixer; // @synthesize mixer=_mixer;
@property(nonatomic) __weak id <DZREqualizerTAAEDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
- (void).cxx_destruct;
- (void)applyFilterToBufferList:(struct AudioBufferList *)arg1 numberOfFrames:(unsigned int)arg2;
- (void)setGain:(float)arg1 forBandAtIndex:(unsigned long long)arg2;
- (float)gainOfBandAtIndex:(unsigned long long)arg1;
- (float)frequencyOfBandAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfBands;
- (void)setupFilter;
- (id)initWithMixer:(id)arg1;

@end

