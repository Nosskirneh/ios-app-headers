//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class ANGRecommendedSongsList, NSDate, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface BackgroundDownloadManager : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    ANGRecommendedSongsList *_recommendedSongsList;
    NSObject<OS_dispatch_queue> *_songCachingQueue;
    _Bool _isDownloading;
    CDUnknownBlockType _backgroundTransferCompletionHandler;
    NSURLSession *_backgroundSession;
    NSDate *_lastPushDate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(copy, nonatomic) CDUnknownBlockType backgroundTransferCompletionHandler; // @synthesize backgroundTransferCompletionHandler=_backgroundTransferCompletionHandler;
- (void).cxx_destruct;
- (void)updateDownloadingSong:(id)arg1;
- (void)_showDownloadsDoneNotif;
- (void)showDownloadsDoneNotif;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)tempPathForEncryptedSong:(id)arg1;
- (id)tempPathForSong:(id)arg1;
- (void)cleanUp;
- (void)cacheSong:(id)arg1 fromTempPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)maybeShowDoneNotification;
- (void)setFileDone;
- (void)persistDownloadedSong:(id)arg1 downloadPath:(id)arg2 fileIdentifier:(id)arg3;
- (void)_cancelAllDownloads;
- (void)cancelAllDownloads;
- (void)recordDownloadForSong:(id)arg1 inRealm:(id)arg2;
- (void)startAllDownloads;
- (_Bool)isRecommended:(id)arg1;
- (void)_handleReceivedSongs:(id)arg1 requestedSongs:(id)arg2;
- (void)downloadFromCacheQueueAndIsRecommended:(_Bool)arg1;
@property(readonly, nonatomic) ANGRecommendedSongsList *recommendedSongsList;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
