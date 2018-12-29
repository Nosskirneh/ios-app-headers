//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBaseServiceProvider.h"

@interface WMPPlaylistServiceProvider : WMPBaseServiceProvider
{
}

- (id)urlStringFromIndexArray:(id)arg1;
- (void)addPlaylistToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editPlaylist:(id)arg1 withTitle:(id)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deletePlaylistEtag:(id)arg1;
- (void)deletePlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlaylistFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemsAtindexes:(id)arg1 inPlaylistUuid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPlaylistWithUuid:(id)arg1 toPlaylistWithUuid:(id)arg2 atIndex:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addPlaylistItemIds:(id)arg1 atIndex:(id)arg2 inPlaylistUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewPlaylistWithTitle:(id)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceItemAtIndex:(id)arg1 inPlaylistUuid:(id)arg2 withItemWithUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)moveItemsAtIndexes:(id)arg1 toIndex:(id)arg2 inPlaylistUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadItemsByUuid:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadUserPlaylists:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadPlaylistsCreatedByArtistWithId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadPlaylistsByCategoryIdentifier:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadFavoritePlaylistsByUserId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadPlaylistByUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

