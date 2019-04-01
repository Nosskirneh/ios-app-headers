//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VXEqualizerBase.h"

@interface VXGraphicEqualizer : VXEqualizerBase
{
    unsigned int fx_eq_preamp;
    unsigned int fx_equalizer;
    unsigned long long _filtersCount;
}

- (unsigned long long)filtersCount;
- (id)gains;
- (float)gainForBand:(unsigned long long)arg1;
- (void)setEQGain:(float)arg1 forBand:(unsigned long long)arg2;
- (float)preamp;
- (void)setEQPreamp:(float)arg1;
- (void)_disableEQ;
- (void)setPreamp:(float)arg1 gains:(id)arg2;
- (void)dealloc;
- (id)initWithChannel:(unsigned int)arg1 preamp:(float)arg2 gains:(id)arg3;

@end

