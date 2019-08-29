//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GNSAudioEncoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class GNSADSRParams, NSString;

@interface GNSDTMFEncoding : NSObject <GNSAudioEncoding, NSCopying>
{
    _Bool _includesParitySymbol;
    int _tokenLengthBytes;
    float _coderSampleRate;
    int _basebandDecimationFactor;
    int _numberOfCRCCheckBytes;
    int _frequenciesPerSymbol;
    double _windowDuration;
    GNSADSRParams *_adsrParams;
}

+ (id)encodingWithTokenLength:(unsigned long long)arg1;
@property(retain, nonatomic) GNSADSRParams *adsrParams; // @synthesize adsrParams=_adsrParams;
@property(nonatomic) int frequenciesPerSymbol; // @synthesize frequenciesPerSymbol=_frequenciesPerSymbol;
@property(nonatomic) double windowDuration; // @synthesize windowDuration=_windowDuration;
@property(nonatomic) int numberOfCRCCheckBytes; // @synthesize numberOfCRCCheckBytes=_numberOfCRCCheckBytes;
@property(nonatomic) int basebandDecimationFactor; // @synthesize basebandDecimationFactor=_basebandDecimationFactor;
@property(nonatomic) float coderSampleRate; // @synthesize coderSampleRate=_coderSampleRate;
@property(nonatomic) _Bool includesParitySymbol; // @synthesize includesParitySymbol=_includesParitySymbol;
@property(nonatomic) int tokenLengthBytes; // @synthesize tokenLengthBytes=_tokenLengthBytes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTokenLength:(unsigned long long)arg1;
- (struct DtmfEncoderParams *)dtmfEncoderParams;
- (_Bool)encodeData:(vector_5b3bfa18)arg1 asToken:(vector_f9ed6fc8 *)arg2;
- (struct DtmfDecoder *)decoderWithMaxTokenGuesses:(int)arg1 decodingBufferSize:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

