//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VXBassCurlDataSourceProtocol;

@interface VXBassCurlDataSource : NSObject
{
    struct _opaque_pthread_mutex_t _the_mutex;
    unsigned long long _maxBufferLength;
    _Bool _seekable;
    _Bool _headerStarted;
    _Bool _isDownloadPaused;
    _Bool _isDownloading;
    _Bool _needsResume;
    _Bool _isBufferingData;
    _Bool _shouldCancel;
    _Bool _isEndless;
    unsigned long long _responseStatus;
    void *_dataBuffer;
    unsigned long long _dataBufferLength;
    unsigned long long _dataBufferReadOffset;
    unsigned long long _dataBufferWriteOffset;
    unsigned long long _dataBufferStartPosition;
    long long _metadataIntervalBytes;
    long long _metadataOffsetBytes;
    NSMutableDictionary *_header;
    NSString *_streamTitle;
    unsigned long long _downloadSpeed;
    double _lastPauseTime;
    void *_curl;
    unsigned long long _totalFileLength;
    unsigned long long _bufferLengthForEndlessMode;
    struct _opaque_pthread_mutex_t *_mutex;
    id <VXBassCurlDataSourceProtocol> _delegate;
    CDUnknownBlockType _curlGetterBlock;
    SEL _curlGetterAction;
    NSObject<OS_dispatch_queue> *_curlDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_pauseDelaySemaphore;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *pauseDelaySemaphore; // @synthesize pauseDelaySemaphore=_pauseDelaySemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *curlDispatchQueue; // @synthesize curlDispatchQueue=_curlDispatchQueue;
@property(nonatomic) SEL curlGetterAction; // @synthesize curlGetterAction=_curlGetterAction;
@property(copy, nonatomic) CDUnknownBlockType curlGetterBlock; // @synthesize curlGetterBlock=_curlGetterBlock;
@property(nonatomic) __weak id <VXBassCurlDataSourceProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _opaque_pthread_mutex_t *mutex; // @synthesize mutex=_mutex;
@property(nonatomic) _Bool isEndless; // @synthesize isEndless=_isEndless;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property _Bool isBufferingData; // @synthesize isBufferingData=_isBufferingData;
@property(nonatomic) unsigned long long bufferLengthForEndlessMode; // @synthesize bufferLengthForEndlessMode=_bufferLengthForEndlessMode;
@property(nonatomic) unsigned long long totalFileLength; // @synthesize totalFileLength=_totalFileLength;
@property(nonatomic) void *curl; // @synthesize curl=_curl;
@property(nonatomic) double lastPauseTime; // @synthesize lastPauseTime=_lastPauseTime;
@property(nonatomic) unsigned long long downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) NSString *streamTitle; // @synthesize streamTitle=_streamTitle;
@property(retain, nonatomic) NSMutableDictionary *header; // @synthesize header=_header;
@property(nonatomic) long long metadataOffsetBytes; // @synthesize metadataOffsetBytes=_metadataOffsetBytes;
@property(nonatomic) long long metadataIntervalBytes; // @synthesize metadataIntervalBytes=_metadataIntervalBytes;
@property(nonatomic) unsigned long long dataBufferStartPosition; // @synthesize dataBufferStartPosition=_dataBufferStartPosition;
@property unsigned long long dataBufferWriteOffset; // @synthesize dataBufferWriteOffset=_dataBufferWriteOffset;
@property(nonatomic) unsigned long long dataBufferReadOffset; // @synthesize dataBufferReadOffset=_dataBufferReadOffset;
@property(nonatomic) unsigned long long dataBufferLength; // @synthesize dataBufferLength=_dataBufferLength;
@property(nonatomic) void *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) _Bool needsResume; // @synthesize needsResume=_needsResume;
@property _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) _Bool isDownloadPaused; // @synthesize isDownloadPaused=_isDownloadPaused;
@property(nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
@property(nonatomic) _Bool headerStarted; // @synthesize headerStarted=_headerStarted;
@property(nonatomic) _Bool seekable; // @synthesize seekable=_seekable;
- (void).cxx_destruct;
- (unsigned long long)writeData:(void *)arg1 ofLength:(unsigned long long)arg2;
- (_Bool)parseHeaderString:(id)arg1;
- (void)headerDataRecieved:(void *)arg1 ofSize:(unsigned long long)arg2;
- (void)headerFailed;
- (void)headerFinished;
@property(readonly, nonatomic) unsigned long long dataRemainingToRead;
@property(readonly, nonatomic) unsigned long long dataAvailableForRead;
- (unsigned long long)bufferLengthForContentSize:(unsigned long long)arg1;
- (_Bool)discardBufferTailLength:(unsigned long long)arg1;
- (_Bool)discardBufferTailLength1:(unsigned long long)arg1;
- (_Bool)resizeBufferTo:(unsigned long long)arg1;
- (void)compactBufferLocked;
- (void)onMemoryWarning;
- (void)cleanupCurl;
- (void)startWithPath1:(id)arg1 offset:(unsigned long long)arg2 queue:(id)arg3;
- (void)updateNeedsResumeState;
- (void)startWithPath:(id)arg1 offset:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)resumeCurrentConection;
- (int)perform:(void *)arg1;
- (void)dealloc;
- (void)setLength:(unsigned long long)arg1 startPos:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

