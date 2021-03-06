//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMGaplessHeaderInfo.h"

@interface MP3XingHeaderInfo : GPMGaplessHeaderInfo
{
    _Bool _replayGainRadioDefined;
    _Bool _replayGainAudiophileDefined;
    unsigned int _resyncOffset;
    float _replayGainRadio;
    float _replayGainAudiophile;
}

@property(readonly, nonatomic) _Bool replayGainAudiophileDefined; // @synthesize replayGainAudiophileDefined=_replayGainAudiophileDefined;
@property(readonly, nonatomic) float replayGainAudiophile; // @synthesize replayGainAudiophile=_replayGainAudiophile;
@property(readonly, nonatomic) _Bool replayGainRadioDefined; // @synthesize replayGainRadioDefined=_replayGainRadioDefined;
@property(readonly, nonatomic) float replayGainRadio; // @synthesize replayGainRadio=_replayGainRadio;
@property(readonly, nonatomic) unsigned int resyncOffset; // @synthesize resyncOffset=_resyncOffset;
- (id)initWithEncoderDelay:(unsigned int)arg1 samplePadding:(unsigned int)arg2 sampleCount:(unsigned long long)arg3 resyncOffset:(unsigned int)arg4 replayGainRadio:(float)arg5 replayGainRadioDefined:(_Bool)arg6 replayGainAudiophile:(float)arg7 replayGainAudiophileDefined:(_Bool)arg8;
- (id)initWithEncoderDelay:(unsigned int)arg1 samplePadding:(unsigned int)arg2 sampleCount:(unsigned long long)arg3;
- (id)init;

@end

