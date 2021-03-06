//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSDate, NSError, NSManagedObjectID, NSNumber, NSPort, NSString, NSURLSession, NSURLSessionDownloadTask;
@protocol OS_dispatch_queue, WMPDownloadTaskDelegate;

@interface WMPDownloadTask : NSObject <NSStreamDelegate, NSURLSessionDownloadDelegate>
{
    _Bool _isCancelled;
    _Bool _shouldKeepRunning;
    NSNumber *_encoding;
    NSNumber *_codec;
    NSManagedObjectID *_objectID;
    id <WMPDownloadTaskDelegate> _delegate;
    NSPort *_port;
    NSNumber *_albumId;
    NSNumber *_artistId;
    NSString *_imageResourceId;
    long long _downloadQuality;
    long long _videoDownloadQuality;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_downloadQueue;
    unsigned long long _expectedContentLength;
    unsigned long long _receivedContentLength;
    NSError *_error;
    long long _statusCode;
    long long _type;
    NSNumber *_itemId;
    NSString *_uuid;
    NSDate *_startDate;
    NSString *_sessionId;
    NSURLSessionDownloadTask *_downloadTask;
}

+ (id)machineName;
+ (id)userAgent;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool shouldKeepRunning; // @synthesize shouldKeepRunning=_shouldKeepRunning;
@property(nonatomic) unsigned long long receivedContentLength; // @synthesize receivedContentLength=_receivedContentLength;
@property(nonatomic) unsigned long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long videoDownloadQuality; // @synthesize videoDownloadQuality=_videoDownloadQuality;
@property(nonatomic) long long downloadQuality; // @synthesize downloadQuality=_downloadQuality;
@property(retain, nonatomic) NSString *imageResourceId; // @synthesize imageResourceId=_imageResourceId;
@property(retain, nonatomic) NSNumber *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) NSNumber *albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) NSPort *port; // @synthesize port=_port;
@property(nonatomic) __weak id <WMPDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSNumber *codec; // @synthesize codec=_codec;
@property(readonly, nonatomic) NSNumber *encoding; // @synthesize encoding=_encoding;
- (void).cxx_destruct;
- (id)getTempPathCommon;
- (id)getTempPath;
- (void)updateProgress:(unsigned long long)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)resumeDownloadFromErrorOrFinish:(id)arg1;
- (void)finish;
- (void)generateAndReportStatistic;
- (_Bool)isAlreadyDownloaded;
- (void)downloadFrom:(id)arg1;
- (void)cancel;
- (void)handleGetUrlError:(id)arg1;
- (void)handleGetUrlSuccessWithUrl:(id)arg1 encoding:(id)arg2 codec:(id)arg3;
- (void)start;
- (id)initWithVideoUuid:(id)arg1 artistId:(id)arg2 withImageResourceId:(id)arg3 withQuality:(long long)arg4 objectID:(id)arg5;
- (id)initWithCutUuid:(id)arg1 albumId:(id)arg2 withImageResourceId:(id)arg3 withQuality:(long long)arg4 objectID:(id)arg5;
- (id)initWithTrackUuid:(id)arg1 albumId:(id)arg2 withImageResourceId:(id)arg3 withQuality:(long long)arg4 objectID:(id)arg5;
- (id)init;
- (void)reportDownloadStatisticsWithPlaybackSessionId:(id)arg1 requests:(id)arg2;
- (void)reportStartStreamingDownloadWithPlaybackSessionId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

