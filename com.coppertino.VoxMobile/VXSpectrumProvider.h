//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VXSpectrumProvider : NSObject
{
    float _maxHeight;
    float *_fft_values;
    float *_averaged_values;
    int _fft_values_count;
    int _sampleRate;
    float _octave_multiplier;
    _Bool _isLog;
    float *_multiplyers;
    float _startNode;
    float _endNode;
    CDUnknownBlockType _updateBlock;
    unsigned int _bassFlag;
    _Bool _isRunning;
    unsigned int _bassChannel;
    float *_spectra;
    long long _spectraSize;
}

@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) long long spectraSize; // @synthesize spectraSize=_spectraSize;
@property(nonatomic) unsigned int bassChannel; // @synthesize bassChannel=_bassChannel;
- (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) float *spectra; // @synthesize spectra=_spectra;
- (unsigned int)fftFlagForSize:(unsigned int)arg1;
- (void)zeroOutAll:(_Bool)arg1;
- (float)sampleRate;
- (void)dealloc;
- (id)initWithSpectraSize:(long long)arg1 bassHandle:(unsigned int)arg2;

@end

