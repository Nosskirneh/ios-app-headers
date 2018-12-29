//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface WMPDownloadServiceDAL : NSObject
{
    NSNumber *_filesInQueue;
}

@property(retain, nonatomic) NSNumber *filesInQueue; // @synthesize filesInQueue=_filesInQueue;
- (void).cxx_destruct;
- (void)addDownloadRequestBlock:(CDUnknownBlockType)arg1 notify:(_Bool)arg2 notifyBadge:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cleanupOrphanPlaylistTracksInContext:(id)arg1;
- (void)notifyQueueCountChange;
- (void)notifyQueueChange;
- (void)removeOldTracksFromPlaylist:(id)arg1 tracks:(id)arg2;
- (void)migratePlaylist:(id)arg1;
- (void)updateDownloadQueueForObjectID:(id)arg1 encoding:(id)arg2 codec:(id)arg3 inProgress:(_Bool)arg4 isDownloaded:(_Bool)arg5 changeOrder:(_Bool)arg6 retryStatus:(long long)arg7 notify:(_Bool)arg8;
- (void)encryptMediaItem:(id)arg1;
- (id)getFirstTrackToDownloadInContext:(id)arg1;
- (void)setupQueue;
- (_Bool)gotOfflineAlbums;
- (_Bool)gotOfflinePlaylists;
- (_Bool)gotOfflineContent;
- (_Bool)mediaItemIsMarkedAsOffline:(id)arg1;
- (void)removeAlreadyDownloadedTracksFromQueue;
- (void)removeAllPlaylistsInContext:(id)arg1;
- (void)removeAllAlbumsInContext:(id)arg1;
- (void)removeAllContent;
- (void)cleanUpNotDownloadedItemsInContext:(id)arg1;
- (void)removePlaylist:(id)arg1 inContext:(id)arg2;
- (void)removePlaylist:(id)arg1;
- (void)removeAlbum:(id)arg1 inContext:(id)arg2;
- (void)removeAlbum:(id)arg1;
- (void)removeTrackSoftlyByObjectId:(id)arg1;
- (void)removeCut:(id)arg1 inContext:(id)arg2;
- (void)removeVideo:(id)arg1 inContext:(id)arg2;
- (void)removeTrack:(id)arg1 inContext:(id)arg2;
- (void)removeItemByObjectId:(id)arg1;
- (void)addItemToQueue:(id)arg1 withOrder:(long long)arg2 inContext:(id)arg3;
- (void)addPlaylistToQueue:(id)arg1 notify:(_Bool)arg2 notifyBadge:(_Bool)arg3 withDispatchGroup:(id)arg4;
- (void)handleNonStreamReadyAlbum:(id)arg1;
- (void)addAlbumToQueue:(id)arg1 notify:(_Bool)arg2 notifyBadge:(_Bool)arg3 withDispatchGroup:(id)arg4;
- (void)addMediaItemToQueueByObjectID:(id)arg1 notify:(_Bool)arg2;

@end

