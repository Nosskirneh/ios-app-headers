//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GNSAudioEncoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface GNSDSSSEncoding : NSObject <GNSAudioEncoding, NSCopying>
{
    _Bool _includesParitySymbol;
    _Bool _usesSingleSideband;
    int _tokenLengthBytes;
    float _coderSampleRate;
    int _basebandDecimationFactor;
    int _numberOfCRCCheckBytes;
    int _numberOfTapsLSFR;
    int _codeNumber;
    int _upsamplingFactor;
    int _desiredCarrierFrequency;
    int _bitsPerSymbol;
    int _minCyclesPerFrame;
}

+ (id)encodingWithTokenLength:(unsigned long long)arg1;
@property(nonatomic) int minCyclesPerFrame; // @synthesize minCyclesPerFrame=_minCyclesPerFrame;
@property(nonatomic) int bitsPerSymbol; // @synthesize bitsPerSymbol=_bitsPerSymbol;
@property(nonatomic) int desiredCarrierFrequency; // @synthesize desiredCarrierFrequency=_desiredCarrierFrequency;
@property(nonatomic) int upsamplingFactor; // @synthesize upsamplingFactor=_upsamplingFactor;
@property(nonatomic) int codeNumber; // @synthesize codeNumber=_codeNumber;
@property(nonatomic) int numberOfTapsLSFR; // @synthesize numberOfTapsLSFR=_numberOfTapsLSFR;
@property(nonatomic) _Bool usesSingleSideband; // @synthesize usesSingleSideband=_usesSingleSideband;
@property(nonatomic) int numberOfCRCCheckBytes; // @synthesize numberOfCRCCheckBytes=_numberOfCRCCheckBytes;
@property(nonatomic) int basebandDecimationFactor; // @synthesize basebandDecimationFactor=_basebandDecimationFactor;
@property(nonatomic) float coderSampleRate; // @synthesize coderSampleRate=_coderSampleRate;
@property(nonatomic) _Bool includesParitySymbol; // @synthesize includesParitySymbol=_includesParitySymbol;
@property(nonatomic) int tokenLengthBytes; // @synthesize tokenLengthBytes=_tokenLengthBytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTokenLength:(unsigned long long)arg1;
- (struct SymbolWaveCoder *)symbolWaveCoder;
- (void)encodeData:(vector_5b3bfa18)arg1 asToken:(vector_f9ed6fc8 *)arg2 withStartTransition:(vector_f9ed6fc8 *)arg3 startTransitionDuration:(double)arg4;
- (struct WhispernetDecoder *)decoderWithTokenLength:(int)arg1 broadcasterStoppedThreshold:(double)arg2 maxTokenGuesses:(int)arg3 decodingBufferSize:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

