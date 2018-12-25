//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseComponent.h"

#import "HAMAudioDecoderDelegate-Protocol.h"
#import "HAMAudioPCMBufferSource-Protocol.h"
#import "HAMSampleBufferSourceDelegate-Protocol.h"

@class GIMMe, HAMFormatDescription, HAMSampleBuffer, NSString;
@protocol HAMAudioDecoder, HAMAudioDecoderFactory, HAMAudioPCMBufferSourceDelegate, HAMMediaSourceDelegate, HAMSampleBufferSource;

@interface HAMAudioDecoderPCMBufferSource : HAMBaseComponent <HAMAudioDecoderDelegate, HAMSampleBufferSourceDelegate, HAMAudioPCMBufferSource>
{
    id <HAMSampleBufferSource> _upstream;
    id <HAMAudioDecoderFactory> _decoderFactory;
    id <HAMAudioDecoder> _decoder;
    HAMFormatDescription *_formatDescription;
    int _buffersDeliveredSinceLastRead;
    CDStruct_1b6d18a9 _seekTime;
    CDStruct_e83c9415 _seekableTimeRange;
    HAMSampleBuffer *_sampleBufferForDecodeRetry;
    _Bool _prepared;
    id <HAMAudioPCMBufferSourceDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) __weak id <HAMMediaSourceDelegate> delegate;
- (void).cxx_destruct;
- (_Bool)setupDecoderAndReturnError:(id *)arg1;
- (long long)readNextSampleBuffer:(id *)arg1 error:(id *)arg2;
- (void)sampleBufferSourceFormatDescriptionWillChange:(id)arg1;
- (void)mediaSourceDidFailWithError:(id)arg1;
- (void)mediaSourceSeekableTimeRangeDidChange:(CDStruct_e83c9415)arg1;
- (void)mediaSourceSetCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)audioDecoder:(id)arg1 didFailWithError:(id)arg2;
- (void)audioDecoder:(id)arg1 didDecodePCMBuffer:(id)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)suspend;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (void)doneWithBuffer:(id)arg1;
- (long long)readPCMBuffersWithTargetCount:(int)arg1 error:(id *)arg2;
- (void)setRate:(float)arg1;
- (id)initWithContext:(id)arg1 sampleBufferSource:(id)arg2 decoderFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
