//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol GIPAudioPlayerDelegate;

@interface GIPAudioPlayer : NSObject
{
    struct OpaqueAudioQueue *_audioQueue;
    struct AudioQueueBuffer **_audioQueueBuffers;
    int _state;
    unsigned int _bufferByteSize;
    NSURL *_audioFileURL;
    unsigned int _bufferCount;
    double _secondsPerBuffer;
    _Bool _tinyBuffers;
    CDUnknownBlockType _completion;
    unsigned int _numPacketsToRead;
    struct OpaqueAudioFileID *_audioFile;
    NSString *_fileName;
    NSString *_soundId;
    long long _currentPacketNumber;
    id <GIPAudioPlayerDelegate> _delegate;
    unsigned long long _finishedTime;
    struct AudioStreamBasicDescription _audioFormat;
}

+ (void)printAudioFileInfo:(struct OpaqueAudioFileID *)arg1;
+ (void)printTimeStamp:(struct AudioTimeStamp *)arg1;
+ (void)printAudioFormat:(struct AudioStreamBasicDescription *)arg1;
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) unsigned long long finishedTime; // @synthesize finishedTime=_finishedTime;
@property(nonatomic) __weak id <GIPAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int numPacketsToRead; // @synthesize numPacketsToRead=_numPacketsToRead;
@property(readonly, nonatomic) long long currentPacketNumber; // @synthesize currentPacketNumber=_currentPacketNumber;
@property(copy, nonatomic) NSString *soundId; // @synthesize soundId=_soundId;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) struct OpaqueAudioFileID *audioFile; // @synthesize audioFile=_audioFile;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldContinueRunning;
@property(readonly, nonatomic) _Bool isRunning;
- (void)incrementCurrentPacketNumberBy:(unsigned int)arg1;
- (void)calculateSizesFor:(double)arg1;
- (void)playbackDidComplete;
- (_Bool)pause;
- (_Bool)stop;
- (_Bool)play;
- (void)playAsynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)primeAudioQueue;
- (_Bool)copyAudioFileProperties;
- (void)setupAudioQueueBuffers;
- (_Bool)setupPlaybackAudioQueueObject;
- (_Bool)openPlaybackFile:(id)arg1 fileType:(unsigned int)arg2;
- (_Bool)prepareToPlay;
- (void)releaseAudioQueue;
- (void)releaseAudioFile;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 tinyBuffers:(_Bool)arg2;
- (id)initWithFileName:(id)arg1;

@end
