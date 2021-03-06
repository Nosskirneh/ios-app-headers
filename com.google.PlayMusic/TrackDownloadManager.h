//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TrackFetcherDelegate-Protocol.h"

@class DownloadRequest, GPMBackgroundTask, NSHashTable, NSMutableArray;

@interface TrackDownloadManager : NSObject <TrackFetcherDelegate>
{
    NSHashTable *_delegates;
    NSMutableArray *_downloadQueue;
    DownloadRequest *_currentRequest;
    _Bool _handleQueueModifiedRequested;
    GPMBackgroundTask *_backgroundTask;
}

- (void).cxx_destruct;
- (void)fetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)fetcherDidComplete:(id)arg1;
- (void)fetcher:(id)arg1 didProgress:(double)arg2;
- (long long)indexOfLastStreamingRequest;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)handleDownloadQueueModified;
- (void)cancelDownloadRequestQuietly:(id)arg1;
- (void)cancelDownloadRequest:(id)arg1;
- (void)cancelDownloadRequests:(id)arg1;
- (id)downloadTrack:(id)arg1 forStreaming:(_Bool)arg2 isCacheable:(_Bool)arg3 explicitPlay:(_Bool)arg4 startingOffset:(unsigned long long)arg5 startTime:(double)arg6 targetKBPS:(unsigned long long)arg7 streamingQuality:(long long)arg8 adaptiveStreamingEnabled:(_Bool)arg9 networkType:(long long)arg10 retryEnabled:(_Bool)arg11;
- (void)dealloc;
- (id)init;

@end

