//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "FileDownloaderProtocol-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TrackFileDownloaderURLProtocolDelegate-Protocol.h"

@class DZRDownloadableObject, DZRFileDownloadersScheduler, NSDate, NSError, NSHTTPURLResponse, NSString, TrackFileDownloaderURLProtocol;
@protocol FileDownloaderDelegate;

@interface FileDownloader : NSOperation <TrackFileDownloaderURLProtocolDelegate, NSCopying, FileDownloaderProtocol>
{
    _Bool _cancelled;
    _Bool _shouldStoreForPermanentAccess;
    unsigned int _minimumAmountOfBytesDownloadedPerSecondsToStreamContent;
    float _progressCallbackPeriodicity;
    id <FileDownloaderDelegate> _downloadDelegate;
    TrackFileDownloaderURLProtocol *_connection;
    NSHTTPURLResponse *_response;
    unsigned long long _expectedSize;
    unsigned long long _storedSize;
    NSDate *_startingDate;
    double _duration;
    double _lastTimeOfDataReception;
    double _downloadSpeed;
    DZRDownloadableObject *_preferredDownloadableObject;
    DZRDownloadableObject *_downloadableObject;
    NSString *_collectionID;
    NSString *_downloadIdentifier;
    NSError *_error;
    DZRFileDownloadersScheduler *_scheduler;
    double _previousFailDate;
    long long _state;
    unsigned long long _previouslyNotifiedFileSize;
}

+ (id)downloaderQueue;
@property(nonatomic) unsigned long long previouslyNotifiedFileSize; // @synthesize previouslyNotifiedFileSize=_previouslyNotifiedFileSize;
@property(nonatomic) float progressCallbackPeriodicity; // @synthesize progressCallbackPeriodicity=_progressCallbackPeriodicity;
@property long long state; // @synthesize state=_state;
@property(nonatomic) double previousFailDate; // @synthesize previousFailDate=_previousFailDate;
@property(nonatomic) __weak DZRFileDownloadersScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(nonatomic) _Bool shouldStoreForPermanentAccess; // @synthesize shouldStoreForPermanentAccess=_shouldStoreForPermanentAccess;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) DZRDownloadableObject *downloadableObject; // @synthesize downloadableObject=_downloadableObject;
@property(retain, nonatomic) DZRDownloadableObject *preferredDownloadableObject; // @synthesize preferredDownloadableObject=_preferredDownloadableObject;
@property(nonatomic) double downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) double lastTimeOfDataReception; // @synthesize lastTimeOfDataReception=_lastTimeOfDataReception;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startingDate; // @synthesize startingDate=_startingDate;
@property(nonatomic) unsigned long long storedSize; // @synthesize storedSize=_storedSize;
@property(nonatomic) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) TrackFileDownloaderURLProtocol *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned int minimumAmountOfBytesDownloadedPerSecondsToStreamContent; // @synthesize minimumAmountOfBytesDownloadedPerSecondsToStreamContent=_minimumAmountOfBytesDownloadedPerSecondsToStreamContent;
@property __weak id <FileDownloaderDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)setSuspended:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)cancel;
- (_Bool)isPaused;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)finishOperation;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveDataWithLength:(unsigned long long)arg2;
- (_Bool)canNotifyProgress;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (unsigned long long)monitorDownloadingSpeedAfterReceivingBytes:(unsigned long long)arg1;
- (void)start;
- (void)startConnection;
- (void)startSafely;
- (_Bool)shouldThrottleProgressCallbacks;
- (_Bool)didDownloadPreviouslyFail;
- (unsigned int)speedInBytesPerSeconds;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isConcurrent;
- (double)downloadDuration;
- (unsigned long long)downloadedContentSize;
- (unsigned long long)expectedContentSize;
- (id)filePath;
- (id)downloadError;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDownloadableObject:(id)arg1 ofCollectionWithIdentifier:(id)arg2 scheduler:(id)arg3 downloadIdenfitier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
