//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "FNFAVAsset-Protocol.h"
#import "FNFAVPlayerItem-Protocol.h"
#import "FNFAssetForPlayer-Protocol.h"
#import "FNFAtomManagerDelegate-Protocol.h"
#import "FNFDataLoaderDelegate-Protocol.h"
#import "FNFInfoForLoopableAsset-Protocol.h"
#import "FNFTimeLoadedDelegate-Protocol.h"

@class AVAudioMix, FNFBufferSizeDecider, FNFStateCallDispatcher, NSArray, NSError, NSString;
@protocol FNFAssetEventListener, FNFAtomManager, FNFDataLoader;

@interface FNFMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFDataLoaderDelegate, FNFAtomManagerDelegate, FNFTimeLoadedDelegate>
{
    CDUnknownBlockType _assetLoadedHandler;
    id <FNFDataLoader> _dataLoader;
    id <FNFAtomManager> _atomManager;
    FNFBufferSizeDecider *_bufferSizeDecider;
    CDUnknownBlockType _playerCheckForStallCallback;
    _Bool _hasFailed;
    _Bool _isStalled;
    NSError *_error;
    NSError *_loadingError;
    _Bool _shouldShowBroadcasterInterruptedMessage;
    _Bool _assetLoaded;
    _Bool _waitingOnLoad;
    int _warningCount;
    FNFStateCallDispatcher *_dispatcher;
    int _pauseReason;
    unsigned long long _moovAtomSizeForReattempt;
    unsigned long long _moovAtomSizeForDataLoader;
    id <FNFAssetEventListener> _eventListener;
    NSString *_resourceHost;
}

@property(copy) NSString *resourceHost; // @synthesize resourceHost=_resourceHost;
- (void).cxx_destruct;
@property(readonly, nonatomic) int pauseReason;
- (_Bool)isDurationFinal;
- (_Bool)decompressedFramebuffer;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (unsigned long long)currentOffsetForTrack:(long long)arg1;
- (unsigned long long)timescale;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (id)dataBlockDistributorForTrack:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
- (id)audioChannelConfiguration;
- (id)projection;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (_Bool)isPlaybackBufferFull;
- (_Bool)isPlaybackLikelyToKeepUp;
- (void)addOutput:(id)arg1;
- (id)accessLog;
- (id)tracksWithMediaType:(id)arg1;
- (void)cancelLoading;
- (void)_seekDataLoaderToTime:(CDStruct_1b6d18a9)arg1 offset:(unsigned long long)arg2 shouldUpdateOffset:(_Bool)arg3 track:(long long)arg4;
- (void)_handleError:(id)arg1;
- (void)_handleWarning:(id)arg1;
- (void)_potentiallyStartRequestForTrack:(long long)arg1;
- (void)_potentiallyStartRequest;
- (_Bool)_fullyDownloaded;
- (_Bool)_fullyDownloaded:(long long)arg1;
- (void)_updateTimeLoaded;
- (id)resourceLoader;
- (void)didChangeValue;
- (void)willChangeValue;
- (void)loadingDidFailWithError:(id)arg1;
- (void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(_Bool)arg2;
- (void)reportWarning:(id)arg1;
- (void)resetDataForSeekBackForTrack:(long long)arg1;
- (void)resetDataForSeekBack;
- (void)parsingDidFailWithError:(id)arg1;
- (id)qualityLabel;
- (id)debugDetails;
- (void)playbackStarted;
- (void)playbackPauseRequested:(int)arg1;
- (CDStruct_1b6d18a9)timeAfterSeek;
@property(readonly, nonatomic) long long status;
- (CDStruct_1b6d18a9)currentTime;
- (void)addErrorToLog:(id)arg1 shouldStopPlayback:(_Bool)arg2;
- (id)asset;
- (_Bool)mpdContainsAttributeUsingASRCaptions;
- (id)mpdAccessibilityDescription;
- (id)audioRepresentationId;
- (id)representationId;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
- (_Bool)stallingForTrack:(long long)arg1;
- (_Bool)shouldRestartAfterStalling;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(CDUnknownBlockType)arg1 stallReason:(int)arg2;
- (void)advanceFrameForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (_Bool)containsTrack:(long long)arg1;
- (id)audioCodec;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)resetAssetToBeginningIfNeeded;
- (void)requestErrorNotificationIfNeeded;
- (void)requestTimeLoadedUpdate;
- (CDStruct_1b6d18a9)duration;
- (void)asyncLoadCurrentQualityWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)asyncLoadAvailableQualitiesWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 moovAtomSizeForReattempt:(unsigned long long)arg3 bitrate:(unsigned long long)arg4 fetchBufferSizeInSeconds:(double)arg5 unstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7 firstFetchSizeInSeconds:(double)arg8 fetchBufferMultiplier:(double)arg9 unstallBufferMultiplier:(double)arg10 enableMp4AssetSeekingFix:(_Bool)arg11 enableMp4AssetEditListSeekingFix:(_Bool)arg12 enableMp4AssetRotationSupport:(_Bool)arg13 dispatcher:(id)arg14;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 dispatcher:(id)arg4;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 moovAtomSizeForReattempt:(unsigned long long)arg3 bitrate:(unsigned long long)arg4 fetchBufferSizeInSeconds:(double)arg5 unstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7 firstFetchSizeInSeconds:(double)arg8 fetchBufferMultiplier:(double)arg9 unstallBufferMultiplier:(double)arg10 enableMp4AssetSeekingFix:(_Bool)arg11 enableMp4AssetEditListSeekingFix:(_Bool)arg12 enableMp4AssetRotationSupport:(_Bool)arg13;
- (id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 moovAtomSizeForReattempt:(unsigned long long)arg3 bitrate:(unsigned long long)arg4 fetchBufferSizeInSeconds:(double)arg5 unstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7 firstFetchSizeInSeconds:(double)arg8 fetchBufferMultiplier:(double)arg9 unstallBufferMultiplier:(double)arg10 enableMp4AssetSeekingFix:(_Bool)arg11 enableMp4AssetEditListSeekingFix:(_Bool)arg12 enableMp4AssetRotationSupport:(_Bool)arg13 eventListener:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

