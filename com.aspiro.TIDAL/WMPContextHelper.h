//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WMPContextHelper : NSObject
{
}

+ (id)artistAlbumFilterNames;
+ (void)deleteEntity:(id)arg1 inContext:(id)arg2;
+ (_Bool)offlinePlaylistWithUuid:(id)arg1 doesExistInContext:(id)arg2;
+ (_Bool)offlineAlbumWithId:(id)arg1 doesExistInContext:(id)arg2;
+ (_Bool)offlineTrackWithId:(id)arg1 doesExistInContext:(id)arg2;
+ (id)favoritePlaylistUuidsForUserId:(id)arg1 inContext:(id)arg2;
+ (_Bool)isFavoritePlaylistWithUuid:(id)arg1 inContext:(id)arg2;
+ (_Bool)isFavoriteVideoWithId:(id)arg1 inContext:(id)arg2;
+ (_Bool)isFavoriteTrackWithId:(id)arg1 inContext:(id)arg2;
+ (_Bool)isFavoriteAlbumWithId:(id)arg1 inContext:(id)arg2;
+ (_Bool)isFavoriteArtistWithId:(id)arg1 inContext:(id)arg2;
+ (id)artistWithId:(id)arg1 storedInContext:(id)arg2;
+ (id)albumWithId:(id)arg1 storedInContext:(id)arg2;
+ (id)trackWithId:(id)arg1 storedInContext:(id)arg2;
+ (id)fetchNotDownloadedTracksSortedInContext:(id)arg1;
+ (id)fetchDownloadedTracksSortedInContext:(id)arg1;
+ (id)fetchOfflinePlaylistsSortedInContext:(id)arg1;
+ (id)fetchOfflineAlbumsSortedInContext:(id)arg1;
+ (id)fetchOrphanPlaylistTracksInContext:(id)arg1;
+ (id)fetchCachedCutsInContext:(id)arg1;
+ (id)fetchCachedTracksInContext:(id)arg1;
+ (id)fetchOfflineMediaItemsInContext:(id)arg1;
+ (unsigned long long)countOfflineAlbumsInContext:(id)arg1;
+ (unsigned long long)countOfflinePlaylistsInContext:(id)arg1;
+ (unsigned long long)countOfflineTracksInContext:(id)arg1;
+ (id)fetchRequestForVideosFromArtistWithId:(id)arg1 inContext:(id)arg2;
+ (id)fetchVideosForArtistWithId:(id)arg1 inContext:(id)arg2;
+ (id)fetchProgressWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)fetchProgressWithIdentifiers:(id)arg1 inContext:(id)arg2;
+ (id)fetchAllProgressInPlaylistUuid:(id)arg1 inContext:(id)arg2;
+ (id)fetchTracksByPlaylistUuid:(id)arg1 sortAndRangeParameters:(id)arg2 inContext:(id)arg3;
+ (id)fetchRequestForItemsByPlaylistUuid:(id)arg1 inContext:(id)arg2;
+ (id)fetchCategoryTracks:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestForCategoryTrack:(id)arg1 inContext:(id)arg2;
+ (id)fetchArtistTracks:(id)arg1 inContext:(id)arg2;
+ (id)fetchTopArtistTracks:(id)arg1 sortAndRangeParameters:(id)arg2 inContext:(id)arg3;
+ (id)fetchFavoriteTracksForUserId:(id)arg1 inContext:(id)arg2;
+ (id)fetchTopArtistTracks:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestForTopArtistTracks:(id)arg1 sortAndRangeParameters:(id)arg2 inContext:(id)arg3;
+ (id)fetchRequestForTopArtistTracks:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestForMyPlaylistsInContext:(id)arg1;
+ (id)fetchRequestForPlayQueueInContext:(id)arg1;
+ (id)fetchRequestForTracksByAlbumId:(id)arg1 inContext:(id)arg2;
+ (id)mediatemsFromFetchedObjects:(id)arg1 forTracklistType:(long long)arg2;
+ (unsigned long long)countCategoriesWithType:(long long)arg1 inContext:(id)arg2;
+ (id)categoriesForCategoryType:(long long)arg1 inContext:(id)arg2;
+ (id)categoryForId:(id)arg1 inContext:(id)arg2;
+ (id)videoForUuid:(id)arg1 inContext:(id)arg2;
+ (id)videoForId:(id)arg1 inContext:(id)arg2;
+ (id)cutForUuid:(id)arg1 inContext:(id)arg2;
+ (id)mediaItemForUuid:(id)arg1 inContext:(id)arg2;
+ (id)mediaItemForUuid:(id)arg1 andType:(long long)arg2 inContext:(id)arg3;
+ (id)mediaItemForId:(id)arg1 andType:(long long)arg2 inContext:(id)arg3;
+ (id)categoryPlaylistObjectForCategoryIdentifier:(id)arg1 andPlaylistUuid:(id)arg2 inContext:(id)arg3;
+ (id)artistVideoForArtistId:(id)arg1 andVideoId:(id)arg2 inContext:(id)arg3;
+ (id)artistTrackForArtistId:(id)arg1 andTrackId:(id)arg2 inContext:(id)arg3;
+ (id)artistAlbumForArtistId:(id)arg1 andAlbumId:(id)arg2 inContext:(id)arg3;
+ (id)playlistForUuid:(id)arg1 inContext:(id)arg2;
+ (id)artistForId:(id)arg1 incontext:(id)arg2;
+ (id)albumForId:(id)arg1 inContext:(id)arg2;
+ (id)trackForId:(id)arg1 inContext:(id)arg2;
+ (id)trackForUuid:(id)arg1 inContext:(id)arg2;
+ (id)userObjectForUserIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)newOrExistingEntityWithEntityName:(id)arg1 usingPredicate:(id)arg2 inContext:(id)arg3;
+ (id)fetchEntityArray:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 inContext:(id)arg4 returnSingleResult:(_Bool)arg5 sortAndRangingParameters:(id)arg6;
+ (id)fetchEntityArray:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 inContext:(id)arg4 sortAndRangingParameters:(id)arg5;
+ (id)fetchEntityArray:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 inContext:(id)arg4;
+ (unsigned long long)countEntitiesOfName:(id)arg1 predicate:(id)arg2 inContext:(id)arg3;
+ (id)objectsByObjectIds:(id)arg1 inContext:(id)arg2;
+ (id)objectByObjectId:(id)arg1 inContext:(id)arg2;
+ (id)fetchEntityWithEntityName:(id)arg1 usingPredicate:(id)arg2 inContext:(id)arg3;
+ (id)fetchObjectWithEntityName:(id)arg1 usingPredicate:(id)arg2 inContext:(id)arg3;
+ (id)userVideoForUserIdentifier:(id)arg1 andVideoIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingUserVideoWithUserIdentifier:(id)arg1 andVideoIdentifier:(id)arg2 inContext:(id)arg3;
+ (void)createFavoriteVideoForUser:(id)arg1 withVideo:(id)arg2 createdDate:(id)arg3 inContext:(id)arg4;
+ (id)categoryVideoObjectForCategoryIdentifier:(id)arg1 andVideoIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)userTrackForUserIdentifier:(id)arg1 andTrackIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)categoryTrackObjectForCategoryIdentifier:(id)arg1 andTrackIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingUserTrackWithUserIdentifier:(id)arg1 andTrackIdentifier:(id)arg2 inContext:(id)arg3;
+ (void)createFavoriteTrackForUser:(id)arg1 withTrack:(id)arg2 createdDate:(id)arg3 inContext:(id)arg4;
+ (id)userArtistForUserIdentifier:(id)arg1 andArtistIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingUserArtistWithUserIdentifier:(id)arg1 andArtistIdentifier:(id)arg2 inContext:(id)arg3;
+ (void)createFavoriteArtistForUser:(id)arg1 withArtist:(id)arg2 createdDate:(id)arg3 inContext:(id)arg4;
+ (id)userPlaylistObjectForUserIdentifier:(id)arg1 andPlaylistIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingUserPlaylistWithUserIdentifier:(id)arg1 andPlaylistIdentifier:(id)arg2 inContext:(id)arg3;
+ (void)createFavoritePlaylistForUser:(id)arg1 withPlaylist:(id)arg2 createdDate:(id)arg3 inContext:(id)arg4;
+ (id)categoryAlbumObjectForCategoryIdentifier:(id)arg1 andAlbumIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)purchasedAlbumForUserIdentifier:(id)arg1 andAlbumIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)userAlbumForUserIdentifier:(id)arg1 andAlbumIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingPurchasedAlbumWithUserIdentifier:(id)arg1 andAlbumIdentifier:(id)arg2 inContext:(id)arg3;
+ (id)newOrExistingUserAlbumWithUserIdentifier:(id)arg1 andAlbumIdentifier:(id)arg2 inContext:(id)arg3;
+ (void)createUserAlbumForUser:(id)arg1 withAlbum:(id)arg2 createdDate:(id)arg3 inContext:(id)arg4;

@end

