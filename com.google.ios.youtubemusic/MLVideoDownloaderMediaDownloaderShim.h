//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLMediaDownloader-Protocol.h"
#import "MLVideoDownloadTaskDelegate-Protocol.h"
#import "MLVideoDownloaderDelegate-Protocol.h"

@class GIMMe, MLVideoDownloadTask, MLVideoDownloader, NSString;
@protocol MLMediaDownloaderDelegate;

@interface MLVideoDownloaderMediaDownloaderShim : NSObject <MLVideoDownloaderDelegate, MLVideoDownloadTaskDelegate, MLMediaDownloader>
{
    MLVideoDownloadTask *_currentTask;
    id <MLMediaDownloaderDelegate> _currentDelegate;
    GIMMe *_gimme;
    MLVideoDownloader *_videoDownloader;
}

@property(retain, nonatomic) MLVideoDownloader *videoDownloader; // @synthesize videoDownloader=_videoDownloader;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)videoDownloadTask:(id)arg1 didFailWithError:(id)arg2;
- (void)videoDownloadTaskDidCancel:(id)arg1;
- (void)videoDownloadTaskDidSucceed:(id)arg1;
- (void)videoDownloadTaskDidProgress:(id)arg1;
- (void)videoDownloader:(id)arg1 didFinishBackgroundTaskRestorationWithTasks:(id)arg2;
- (void)cancelDownloadWithVideoID:(id)arg1;
- (void)cancelDownload;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)downloadVideo:(id)arg1 audioStream:(id)arg2 videoStream:(id)arg3 allowCellularAccess:(_Bool)arg4 delegate:(id)arg5;
- (void)startBackgroundTaskRestorationWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool restoringBackgroundTasks;
@property(readonly, nonatomic) NSString *currentVideoID;
@property(readonly, nonatomic) double currentProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
