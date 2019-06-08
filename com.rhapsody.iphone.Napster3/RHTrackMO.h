//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHTrackMO.h"

#import "RHEditorialContent-Protocol.h"
#import "RHOfflinePlayableEntity-Protocol.h"
#import "RHPlayableEntity-Protocol.h"

@class NSString, NSURL, RHAlbumMO;

@interface RHTrackMO : _RHTrackMO <RHEditorialContent, RHPlayableEntity, RHOfflinePlayableEntity>
{
}

+ (_Bool)isTrackGuid:(id)arg1;
+ (_Bool)isTrackPlayableOnDemand:(id)arg1 whilePlaybackServerReachable:(_Bool)arg2;
+ (float)metadataDaysValidBeforeChecking;
+ (void)cleanupRemovedRightsForTracks:(id)arg1 context:(id)arg2;
+ (void)updateLibraryTrackingForTracks:(id)arg1 context:(id)arg2;
+ (void)updateDownloadTrackingForTracks:(id)arg1 context:(id)arg2;
+ (id)processMemberPayload:(id)arg1 forProfileTrack:(id)arg2 context:(id)arg3;
+ (id)addProfile:(id)arg1 toTracks:(id)arg2 tracksPayload:(id)arg3 type:(unsigned long long)arg4 context:(id)arg5;
+ (id)processChartsPayload:(id)arg1 profile:(id)arg2 type:(unsigned long long)arg3 range:(unsigned long long)arg4 context:(id)arg5;
+ (id)processTracksInPlaybackCache:(id)arg1 context:(id)arg2;
+ (id)processTracksRemovedFromPlaybackCache:(id)arg1 context:(id)arg2;
+ (id)processTracksSearchPayload:(id)arg1 context:(id)arg2;
+ (id)processTracksInLibraryPayload:(id)arg1 forAlbum:(id)arg2 context:(id)arg3;
+ (id)processLibraryRemovalPayload:(id)arg1 forTrack:(id)arg2 context:(id)arg3;
+ (id)processLibraryRemovalPayload:(id)arg1 forTracks:(id)arg2 context:(id)arg3;
+ (id)processLibraryAdditionPayload:(id)arg1 forTracks:(id)arg2 context:(id)arg3;
+ (id)processLibraryAdditionPayload:(id)arg1 forTrack:(id)arg2 context:(id)arg3;
+ (id)processRemoveTracksFromDownloads:(id)arg1 context:(id)arg2;
+ (id)processAddTracksToDownloads:(id)arg1 context:(id)arg2;
+ (void)processPlaybackMediasPayload:(id)arg1 forTrack:(id)arg2 referencing:(id)arg3 context:(id)arg4;
+ (id)processTrackRightsPayload:(id)arg1 context:(id)arg2;
+ (id)processTracksNapiPayload:(id)arg1 context:(id)arg2;
+ (id)extractAlbumFromPayload:(id)arg1;
+ (id)extractArtistFromPayload:(id)arg1;
+ (id)processSearchTracksNapiPayload:(id)arg1 context:(id)arg2;
+ (id)processLiteTracksPayload:(id)arg1 context:(id)arg2;
+ (id)processLiteTrackPayload:(id)arg1 context:(id)arg2;
+ (id)processLiteTracksPayload:(id)arg1 forAllTracksInAlbum:(id)arg2 context:(id)arg3;
+ (id)existingObjectOrStubForEditorialWithContentID:(id)arg1 context:(id)arg2;
- (_Bool)isAvailableInBitrate:(long long)arg1;
- (_Bool)isTrackValidAt:(id)arg1;
@property(readonly, nonatomic) _Bool isEntityPlayableOffline;
- (id)imageGuid;
@property(readonly, nonatomic) _Bool isPlayableOnDemand;
@property(readonly, nonatomic) _Bool isPlayableOffline;
@property(readonly, nonatomic) _Bool isDownloaded;
- (void)setDownloaded:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOnDemandRightsWithNumber:(id)arg1;
@property(readonly, nonatomic) RHTrackMO *playableTrack;
- (id)trackStationId;
@property(readonly, nonatomic) RHAlbumMO *albumRegardlessOfRights;
@property(readonly, nonatomic) NSURL *uri;
- (id)asDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

