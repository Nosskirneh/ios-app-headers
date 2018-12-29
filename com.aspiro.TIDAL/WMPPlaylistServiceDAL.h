//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPPlaylistServiceProvider;

@interface WMPPlaylistServiceDAL : NSObject
{
    WMPPlaylistServiceProvider *_dataProvider;
}

+ (id)deleteMediaItemAtIndex:(long long)arg1 inPlaylist:(id)arg2 inContext:(id)arg3;
+ (void)addMediaItemUuids:(id)arg1 toPlaylistUuid:(id)arg2 atIndex:(id)arg3 inContext:(id)arg4;
@property(retain) WMPPlaylistServiceProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)cleanupOfflinedTracksWithUuid:(id)arg1 inContext:(id)arg2;
- (void)removeFavoritePlaylistWithUuid:(id)arg1 inContext:(id)arg2;
- (void)removeCategoryPlaylistForCategoryIdentifier:(id)arg1 andPlaylistUuid:(id)arg2 inContext:(id)arg3;
- (void)handleFailedPlaylistMoveErrorCode:(long long)arg1;
- (id)playlistForUuid:(id)arg1 inContext:(id)arg2;
- (void)editPlaylist:(id)arg1 withTitle:(id)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deletePlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlaylistFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPlaylistToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPlaylistWithUuid:(id)arg1 toPlaylistWithUuid:(id)arg2 atIndex:(id)arg3 isPlaylistNew:(_Bool)arg4;
- (void)addPlaylistItemIds:(id)arg1 atIndex:(id)arg2 inPlaylistUuid:(id)arg3 isPlaylistNew:(_Bool)arg4;
- (void)addNewPlaylistWithTitle:(id)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteItemsAtIndexes:(id)arg1 inPlaylistUuid:(id)arg2;
- (void)replaceItemAtIndex:(id)arg1 inPlaylistUuid:(id)arg2 withItemWithUuid:(id)arg3;
- (void)moveItemsAtIndexes:(id)arg1 toIndex:(id)arg2 inPlaylistUuid:(id)arg3;
- (void)fetchItemsByUuid:(id)arg1 sortAndRangeParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistsCreatedByArtistWithId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUserPlaylists:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFavoritePlaylistsByUserId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistsByCategoryIdentifier:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)fetchPlaylistByUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPlaylistByUuid:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end

