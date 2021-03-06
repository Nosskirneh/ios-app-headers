//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLRemoteStream, MLVideo, NSString, UIApplication;
@protocol MLMediaDownloaderDelegate;

@protocol MLMediaDownloader <NSObject>
@property(readonly, nonatomic) _Bool restoringBackgroundTasks;
@property(readonly, nonatomic) double currentProgress;
@property(readonly, nonatomic) NSString *currentVideoID;
- (void)cancelDownloadWithVideoID:(NSString *)arg1;
- (void)cancelDownload;
- (void)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)downloadVideo:(MLVideo *)arg1 audioStream:(MLRemoteStream *)arg2 videoStream:(MLRemoteStream *)arg3 allowCellularAccess:(_Bool)arg4 delegate:(id <MLMediaDownloaderDelegate>)arg5;
- (void)startBackgroundTaskRestorationWithDelegate:(id <MLMediaDownloaderDelegate>)arg1;
@end

