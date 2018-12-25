//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTUserSpecificDataStore.h"

#import "YTHotConfigObserver-Protocol.h"

@class GIMMe, NSString;

@interface YTOfflinePlaylistStore : YTUserSpecificDataStore <YTHotConfigObserver>
{
    _Bool _enableAscendingOrderForDownload;
    GIMMe *_gimme;
}

+ (id)sortDescriptorForDateAdded;
+ (id)predicateForUserID:(id)arg1;
+ (id)fetchRequestForUserID:(id)arg1 context:(id)arg2;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (int)defaultOfflineVideoQuality;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 forCurrentUser:(_Bool)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 forCurrentUser:(_Bool)arg3 idPrefix:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (id)predicateForPlaylistID:(id)arg1;
- (id)fetchRequestForID:(id)arg1 inContext:(id)arg2;
- (id)offlinePlaylistEntityWithID:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (void)getMusicChannelThumbnailForPlaylistData:(id)arg1 entity:(id)arg2 error:(id *)arg3 context:(id)arg4;
- (void)fetchPlaylistsForCurrentUserResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)hotConfigDidChange:(id)arg1;
- (void)getAllUserIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)searchPlaylistsWithString:(id)arg1 searchTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)migrateOfflinePlaylistDataForPlaylistId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchOfflinePlaylistNeedingInnerTubeMigrationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchHasOfflinePlaylistsOnDeviceWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoIDsNeedingSyncApprovalWithPlaylistID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistCountWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchPlaylistWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 idPrefix:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchPlaylistStatusWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deleteVideo:(id)arg1 fromPlaylist:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)deleteAllWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)deletePlaylistsForUserID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deletePlaylistWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)updateDateLastSync:(id)arg1 playlistID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)videoEntitiesSetFromVideos:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 videoIDsToAllowDownload:(id)arg4 context:(id)arg5 error:(id *)arg6;
- (void)saveVideoListWithOfflinePlaylistData:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 videoIDsToAllowDownload:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

