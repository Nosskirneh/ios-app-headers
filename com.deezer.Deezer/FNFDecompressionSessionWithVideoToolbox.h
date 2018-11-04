//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFDecompressionSession-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FNFDecompressionSessionDelegate, OS_dispatch_queue;

@interface FNFDecompressionSessionWithVideoToolbox : NSObject <FNFDecompressionSession>
{
    struct OpaqueVTDecompressionSession *_decompressionSession;
    NSObject<OS_dispatch_queue> *_decompressionSessionQueue;
    struct CGSize _inputSize;
    _Bool _firstFrameEnqueued;
    _Bool _closeDecompressionImmediately;
    NSMutableDictionary *_destinationPixelBufferAttributes;
    id <FNFDecompressionSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <FNFDecompressionSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)inputSize;
- (unsigned char)canAcceptFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2;
- (void)closeSession;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 closeDecompressionImmediately:(_Bool)arg3 videoSize:(struct CGSize)arg4 async:(_Bool)arg5 timerManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

