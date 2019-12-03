//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VXBassSource.h"

@class NSFileHandle, VXBassHistogramBuilder, VXMatrix, VXReplayGainData;

@interface VXBassSourceFile : VXBassSource
{
    unsigned int _outputMixerStream;
    _Bool _recalculateBitrate;
    void *loadInMemoryData;
    unsigned int _gaplessGetNextSync;
    unsigned int _endFileSyncMixtime;
    unsigned int _endFileSync;
    unsigned int _startFileSync;
    _Bool _tryGapless;
    _Bool _loadInMemory;
    VXMatrix *_mixerMatrix;
    long long _type;
    VXReplayGainData *_replayGainData;
    NSFileHandle *_fileHandle;
    VXBassHistogramBuilder *_histogramBuilder;
}

+ (long long)typeOfFileWithExtension:(id)arg1;
@property(retain, nonatomic) VXBassHistogramBuilder *histogramBuilder; // @synthesize histogramBuilder=_histogramBuilder;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) _Bool loadInMemory; // @synthesize loadInMemory=_loadInMemory;
@property(retain, nonatomic) VXReplayGainData *replayGainData; // @synthesize replayGainData=_replayGainData;
@property(nonatomic) _Bool tryGapless; // @synthesize tryGapless=_tryGapless;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)mixerMatrix;
- (void)setOutputMixerStream:(unsigned int)arg1;
@property(nonatomic) unsigned int endFileSync; // @synthesize endFileSync=_endFileSync;
@property(nonatomic) unsigned int gaplessGetNextSync; // @synthesize gaplessGetNextSync=_gaplessGetNextSync;
- (void).cxx_destruct;
- (void)finalizeMixerTransfer;
- (void)setMixerMatrix:(id)arg1;
- (void)setUpMatrix;
- (_Bool)isVBR;
- (void)startHistogram;
- (id)trackCodec;
- (id)description;
- (id)advancedDescription;
- (void)setCurrentPosition:(double)arg1;
- (unsigned int)outputMixerStream;
- (double)downloadProgress;
- (double)downloadStart;
- (unsigned int)mainHandler;
- (void)deallocateSourceHandler;
- (void)removeEndSyncs;
- (void)generateEndSync;
- (id)getReplayGainDataFromTags;
- (void)applyReplayGainData:(id)arg1;
- (void)generateSourceHandler;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 loadInMemory:(_Bool)arg4;
- (id)normalized:(id)arg1;
- (void)generateSourceHandlerForTags;
- (id)initForTagsWithURL:(id)arg1;

@end
