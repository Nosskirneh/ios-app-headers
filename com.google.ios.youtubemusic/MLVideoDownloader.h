//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class GIMMe, MLVideoDownloadTaskCollection, MLVideoDownloaderSessionDelegate, NSMutableArray, NSString, NSURLSession;
@protocol MLVideoDownloadTaskDelegate, MLVideoDownloaderDelegate, OS_dispatch_group;

@interface MLVideoDownloader : NSObject <NSURLSessionDownloadDelegate>
{
    id <MLVideoDownloaderDelegate> _delegate;
    id <MLVideoDownloadTaskDelegate> _taskDelegate;
    NSURLSession *_cellularSession;
    NSURLSession *_wifiSession;
    MLVideoDownloaderSessionDelegate *_sessionDelegate;
    MLVideoDownloadTaskCollection *_tasks;
    int _restoringSessionCount;
    NSMutableArray *_backgroundEventHandlingCompletionHandlers;
    NSObject<OS_dispatch_group> *_terminationGroup;
    _Bool _restoringBackgroundTasks;
    GIMMe *_gimme;
}

@property(readonly, nonatomic) _Bool restoringBackgroundTasks; // @synthesize restoringBackgroundTasks=_restoringBackgroundTasks;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)restoreSession:(id)arg1 streamTask:(id)arg2;
- (void)restoreSession:(id)arg1 streamTasks:(id)arg2;
- (id)downloadTaskForStreamSessionTask:(id)arg1;
- (_Bool)startTask:(id)arg1 audioStream:(id)arg2 videoStream:(id)arg3 expirationDate:(id)arg4 allowCellularAccess:(_Bool)arg5 error:(id *)arg6;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)terminate;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadVideo:(id)arg1 toRepo:(id)arg2 targetAudioQuality:(int)arg3 targetVideoResolution:(int)arg4 allowCellularAccess:(_Bool)arg5;
- (long long)estimatedTotalBytesForVideo:(id)arg1 targetAudioQuality:(int)arg2 targetVideoResolution:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

