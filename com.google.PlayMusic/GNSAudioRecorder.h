//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSession, GNSBroadcasterDetectionSession;
@protocol GNSAudioEncoding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GNSAudioRecorder : NSObject
{
    int _sampleCount;
    NSObject<OS_dispatch_queue> *_decoderQueue;
    CDUnknownBlockType _tokensHandler;
    CDUnknownBlockType _listenerStoppedHandler;
    CDUnknownBlockType _errorHandler;
    AVCaptureSession *_captureSession;
    id <GNSAudioEncoding> _encoding;
    GNSBroadcasterDetectionSession *_broadcasterDetectionSession;
    struct OpaqueAudioQueue *_audioQueue;
    struct AudioModemDecoder *_decoder;
}

@property(nonatomic) struct AudioModemDecoder *decoder; // @synthesize decoder=_decoder;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) GNSBroadcasterDetectionSession *broadcasterDetectionSession; // @synthesize broadcasterDetectionSession=_broadcasterDetectionSession;
@property(retain, nonatomic) id <GNSAudioEncoding> encoding; // @synthesize encoding=_encoding;
@property(nonatomic) int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType listenerStoppedHandler; // @synthesize listenerStoppedHandler=_listenerStoppedHandler;
@property(copy, nonatomic) CDUnknownBlockType tokensHandler; // @synthesize tokensHandler=_tokensHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // @synthesize decoderQueue=_decoderQueue;
- (void).cxx_destruct;
- (void)destroyDecoder;
- (void)decode:(struct AudioQueueBuffer *)arg1;
- (void)enqueueBuffer:(struct AudioQueueBuffer *)arg1 queue:(struct OpaqueAudioQueue *)arg2;
- (void)createAudioQueue:(id)arg1;
- (double)hardwareSampleRate;
- (void)audioListeningStopped;
- (void)stopListening;
- (void)listenForBroadcasterWithTimeout:(double)arg1 onBroadcasterFound:(CDUnknownBlockType)arg2 onBroadcasterNotFound:(CDUnknownBlockType)arg3;
- (void)listenForTokensWithEncoding:(id)arg1 tokensReceivedHandler:(CDUnknownBlockType)arg2 listenerStoppedHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

