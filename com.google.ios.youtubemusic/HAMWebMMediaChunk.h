//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaChunk.h"

@class HAMDataBufferAccumulator, HAMFormatDescription;

@interface HAMWebMMediaChunk : HAMMediaChunk
{
    HAMDataBufferAccumulator *_dataAccumulator;
    CDStruct_a483eef9 _initializationData;
    HAMFormatDescription *_formatDescription;
    struct HAMWebMDataBufferReader _reader;
    struct HAMWebMMediaChunkFrameCallback _callback;
    struct WebmParser _parser;
    struct vector<KeyFrameIndex, std::__1::allocator<KeyFrameIndex>> _keyFrames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)WebMUnitsFromCMTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)CMTimeFromWebMUnits:(unsigned long long)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (long long)readNextWithOptions:(CDStruct_c3a2472b)arg1 sampleBuffer:(id *)arg2 error:(id *)arg3;
- (id)formatDescription;
- (void)setFormatDescription:(id)arg1;
- (long long)sizeBytes;
- (id)initWithFormat:(id)arg1 rangedURL:(id)arg2 segmentNumber:(long long)arg3 timeRange:(CDStruct_e83c9415)arg4;
- (void)loadDidCompleteWithError:(id)arg1;

@end

