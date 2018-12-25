//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTUserSpecificDataStore.h"

#import "YTHotConfigObserver-Protocol.h"
#import "YTRetryableStore-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTOfflineAdParser, YTReachabilityController;
@protocol YTRetryTaskConfig;

@interface YTOfflineVideoStore : YTUserSpecificDataStore <YTHotConfigObserver, YTUserChangedObserver, YTRetryableStore>
{
    YTOfflineAdParser *_offlineAdParser;
    id <YTRetryTaskConfig> _retryTaskConfig;
    YTReachabilityController *_reachabilityController;
    _Bool _enableAdBreakFix;
    _Bool _enableOfflineRefreshV2;
    _Bool _enableAscendingOrderForDownload;
    NSMutableDictionary *_videoToOfflineStateWithRefreshActions;
    _Bool _isObservingContextChanges;
    CDUnknownBlockType _offlineVideoEntityDidInsertBlock;
    GIMMe *_gimme;
    unsigned long long _pendingDownloadCount;
}

+ (id)predicateForDeletableVideosWithUserID:(id)arg1;
+ (id)predicateForUserID:(id)arg1;
+ (id)fetchRequestForUserID:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestForVideoStatus:(int)arg1 currentUserID:(id)arg2 inContext:(id)arg3;
+ (id)fetchRequestForID:(id)arg1 currentUserID:(id)arg2 inContext:(id)arg3;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2;
+ (_Bool)videoEligibleForRefresh:(id)arg1;
+ (id)currentDate;
+ (unsigned long long)offlineVideoCountWithStatus:(int)arg1 currentUserID:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)offlineVideoEntityWithID:(id)arg1 currentUserID:(id)arg2 context:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) unsigned long long pendingDownloadCount; // @synthesize pendingDownloadCount=_pendingDownloadCount;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateTransferDataForEntity:(id)arg1 withVideoStatus:(int)arg2;
- (void)handleOfflineVideoStoreChange:(id)arg1;
- (_Bool)populateTracklistCaptionsForEntity:(id)arg1 videoID:(id)arg2 playerResponse:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)resetRetryableVideosWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideosWithVideoListIDs:(id)arg1 offset:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 statuses:(id)arg4 pinTypes:(int)arg5 forCurrentUser:(_Bool)arg6 onlyRetryable:(_Bool)arg7 responseBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;
- (id)offlinedVideoAdBreaksFromVideoEntity:(id)arg1 error:(id *)arg2;
- (id)sortDescriptorForDateAdded;
- (void)userDidChange;
- (void)hotConfigDidChange:(id)arg1;
- (void)stopObservingOfflineVideoAdd;
- (void)startObservingOfflineVideoAddWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)fetchVideosForCurrentUserCoreDataBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)expireAllVideos;
- (void)resetRetryStateForTaskWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)retryTaskWithID:(id)arg1 maxRetryDate:(id)arg2 retryConfig:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)resetHamplayerDownloads:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)updateSuspendedStateForVideoID:(id)arg1 startingNewState:(_Bool)arg2 totalDownloadedBytes:(long long)arg3 totalSegmentCount:(long long)arg4 totalDownloadedSizePercent:(int)arg5 backgroundTransitionCount:(long long)arg6 totalDuration:(long long)arg7 downloadErrorCount:(int)arg8 responseBlock:(CDUnknownBlockType)arg9 errorBlock:(CDUnknownBlockType)arg10;
- (void)removeOfflineRefreshActionsForVideoID:(id)arg1 offlineStateAction:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getOfflineStateWithRefreshActionForVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)setPlayerResponseForVideoID:(id)arg1 playerResponse:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getAllUserIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)searchVideosWithString:(id)arg1 searchTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getLatestOfflineActivityDateWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)resetOfflineRefreshAttemptedWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)setRefreshAttemptedDate:(id)arg1 forVideoIDs:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)setOfflineState:(id)arg1 offlineStateDate:(id)arg2 forVideoIDs:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)setCompletionInfoForID:(id)arg1 completionNetworkType:(int)arg2 completionDate:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)setLastPlaybackDateForID:(id)arg1 playbackDate:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)setMaximumDownloadQuality:(int)arg1 forVideoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)addPinTypes:(int)arg1 forVideoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)setStatusForID:(id)arg1 status:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchCurrentUserHasOfflineVideoWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchHasOfflineVideoOnDeviceWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchOfflineVideoNeedingInnerTubeMigrationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)refreshRequestFromVideoEntities:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (void)fetchOfflineRefreshRequestWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchOfflineRefreshRequestBatchedVideoCount:(unsigned long long)arg1 requestDate:(id)arg2 offlineRefreshInterval:(double)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)migrateOfflineVideoEntityForVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchVideoIDNeedingAdPlaylistSwapWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoNeedingAdPlaylistWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchDeletableVideoIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoListIDsWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistIDsWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchGELOfflineVideoCacheEntryWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchOfflineVideoCountWithStatus:(int)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchVideoWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchVideoNeedingOfflineRefreshWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoWithOfflineStateActions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchVideosWithVideoListIDs:(id)arg1 offset:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 statuses:(id)arg4 pinTypes:(int)arg5 onlyRetryable:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (void)fetchVideosWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 statuses:(id)arg3 pinTypes:(int)arg4 onlyRetryable:(_Bool)arg5 responseBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)deleteAllWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)deleteVideosForUserID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deleteExplicitPinnedVideosWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)deleteVideoWithID:(id)arg1 pinTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)swapAdPlaylistWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)saveOfflineVideoData:(id)arg1 playerResponse:(id)arg2 pinTypes:(int)arg3 maximumDownloadQuality:(int)arg4 clickTrackingParams:(id)arg5 triggeredByRefresh:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (void)refreshMetadataForOfflineVideoData:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)insertOfflineVideoEntityWithID:(id)arg1 currentUserID:(id)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
