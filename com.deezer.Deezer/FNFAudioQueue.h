//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFCoreAudioDelegate-Protocol.h"
#import "FNFPlayerAudioEngine-Protocol.h"

@class FNFCoreAudioWrapper, NSString;
@protocol OS_dispatch_queue;

@interface FNFAudioQueue : NSObject <FNFPlayerAudioEngine, FNFCoreAudioDelegate>
{
    FNFCoreAudioWrapper *_coreAudioWrapper;
    CDUnknownBlockType _putDataCallback;
    CDUnknownBlockType _errorCallback;
    struct AudioStreamBasicDescription _asbd;
    unsigned int _sampleFrameSize;
    struct AQBufferParameters _bufferParams;
    unsigned long long _state;
    _Bool _hasNoMoreFramesToEnqueue;
    struct AQBufferState _audioQueueBuffer[3];
    int _activeBufferIndex;
    unsigned long long _framesEnqueued;
    unsigned long long _buffersReturned;
    unsigned long long _enqueueDataCalls;
    NSObject<OS_dispatch_queue> *_internalQueue;
    float _pendingVolume;
    float _pendingVolumeRampTime;
    float _pendingPlayRate;
    _Bool _deferAudioLevelSetup;
    CDUnknownBlockType _audioLevelCallback;
    _Bool _isVariableRatePlaybackEnabled;
}

+ (struct AQBufferParameters)_calculateBufferSizeAndPacketCountWithAsbd:(struct AudioStreamBasicDescription)arg1 frameSize:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)audioQueueDidOutputForBuffer:(struct AudioQueueBuffer *)arg1;
- (void)audioQueueDidError:(id)arg1 withStatus:(int)arg2;
- (void)audioQueueDidChangeRunning:(_Bool)arg1;
- (_Bool)_isAudioErrorFatal:(long long)arg1;
- (void)_readDataIntoBuffer;
- (_Bool)_startQueue;
- (void)_removeAudioQueue;
- (void)_stopAudio;
- (_Bool)_createAudioQueue;
- (void)_setQueueState:(unsigned long long)arg1;
- (unsigned long long)_queueState;
- (CDStruct_1b6d18a9)getCurrentTime;
- (void)sendCurrentAudioLevelToCallback;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)resumeEnqueuingData;
- (void)removeLevelMetering;
- (void)enableLevelMeteringWithCallback:(CDUnknownBlockType)arg1;
- (void)stopLoadingData;
- (void)invalidate;
- (void)flush;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)playWithStartTime:(CDStruct_1b6d18a9)arg1;
- (void)prepareToPlay;
- (_Bool)isReadyToPlayWithStartTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(CDUnknownBlockType)arg3 bufferUnderrunCallback:(CDUnknownBlockType)arg4 errorCallback:(CDUnknownBlockType)arg5 sampleFrameSize:(unsigned int)arg6;
- (id)initWithVariableRateEnabled:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

