//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMVideoDecoderDelegate-Protocol.h"
#import "HAMVideoDecoderFactory-Protocol.h"

@class HAMFormatDescription, NSArray, NSDictionary, NSString, YTIHamplayerHotConfig;
@protocol HAMVideoDecoder, OS_dispatch_queue;

@interface MLVideoDecoderFactory : NSObject <HAMVideoDecoderDelegate, HAMVideoDecoderFactory>
{
    YTIHamplayerHotConfig *_hotConfig;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HAMVideoDecoder> _preparedDecoder;
    NSDictionary *_preparedPixelBufferAttributes;
    NSArray *_preparedSupportedPixelFormats;
    HAMFormatDescription *_preparedFormatDescription;
}

- (void).cxx_destruct;
- (id)preparedDecoder;
- (void)clearPreparedDecoder;
- (id)videoDecoderWithDelegate:(id)arg1 delegateQueue:(id)arg2 formatDescription:(id)arg3 pixelBufferAttributes:(id)arg4 supportedPixelFormats:(id)arg5 error:(id *)arg6;
- (void)videoDecoderDidTerminate:(id)arg1;
- (void)videoDecoderDidPrepare:(id)arg1;
- (void)videoDecoder:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareDecoderForFormatDescription:(id)arg1 delegateQueue:(id)arg2;
- (void)terminate;
- (id)initWithHotConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

