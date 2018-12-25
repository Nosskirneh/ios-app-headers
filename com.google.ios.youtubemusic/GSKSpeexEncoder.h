//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSKDataPacketizer;

@interface GSKSpeexEncoder : NSObject
{
    long long _sampleRate;
    GSKDataPacketizer *_encodePacketizer;
    GSKDataPacketizer *_preprocessPacketizer;
    void *_encoderState;
    struct SpeexBits _speexBits;
    struct SpeexPreprocessState_ *_preprocessState;
    _Bool _isWideband;
    _Bool _automaticPreprocessing;
    long long _inputFrameSize;
}

@property(nonatomic) _Bool automaticPreprocessing; // @synthesize automaticPreprocessing=_automaticPreprocessing;
@property(readonly, nonatomic) long long inputFrameSize; // @synthesize inputFrameSize=_inputFrameSize;
- (void).cxx_destruct;
- (void)reset;
- (id)encodeAudio:(void *)arg1 length:(long long)arg2;
- (id)preprocessAudio:(void *)arg1 length:(long long)arg2;
- (void)encodePCM16Frame:(short *)arg1 intoData:(id)arg2;
- (void)updatePreprocessor:(const short *)arg1;
- (_Bool)isWideband;
- (void)dealloc;
- (id)initWithSampleRate:(long long)arg1;

@end
