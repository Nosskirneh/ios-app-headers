//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyLibraryDB, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MyLibraryManager : NSObject
{
    MyLibraryDB *libraryDB;
    NSObject<OS_dispatch_queue> *libraryQueue;
    NSMutableDictionary *artistsToBeFetchedWithSongCount;
    NSMutableArray *artistsToBeAdded;
    NSMutableArray *albumIdsToBeAdded;
    NSMutableArray *albumsToBeAdded;
    _Bool autoDownloadEnabled;
    _Bool resetSyncData;
    int pendingItemsCount;
    _Bool isSyncing;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing;
- (void).cxx_destruct;
- (_Bool)checkIfEntityExists:(id)arg1;
- (void)getAsyncCountForEntity:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncUpdate:(id)arg1;
- (id)getForYouPlaylist;
- (id)fetchIndexforType:(int)arg1;
- (void)removePendingItemsCount;
- (void)addPendingArtistsAndAlbumsToLibrary:(_Bool)arg1;
- (void)followSuccess:(id)arg1 type:(id)arg2 typeIDs:(id)arg3;
- (void)followShow:(id)arg1;
- (void)removeOnlyAlbumFromUserLibrary:(id)arg1;
- (void)removeAlbumFromUserLibrary:(id)arg1;
- (void)addAlbumToUserLibrary:(id)arg1;
- (void)removeSongsFromUserLibrary:(id)arg1;
- (void)addSongsToUserLibrary:(id)arg1;
- (void)clearWholeMyLibrary;
- (long long)getCountforPlaylists;
- (long long)getCountforArtists;
- (long long)getCountforShows;
- (long long)getCountforAlbums;
- (long long)getCountforSongs;
- (id)getPlaylistsForSync;
- (id)getIdsforPlaylists;
- (id)getExplicitIdsforArtists;
- (id)getIdsforArtists;
- (id)getIdsforShows;
- (id)getExplicitIdsforAlbums;
- (id)getIdsforAlbums;
- (id)getIdsforSongs;
- (void)fetchandUpdatePlaylist:(id)arg1;
- (void)addSongsFromPlaylistToLibrary:(id)arg1;
- (void)updateSongToPlaylistInLibrary:(id)arg1;
- (void)removePlaylistFromLibrary:(id)arg1;
- (void)addPlaylistToLibrary:(id)arg1 withSongs:(id)arg2;
- (void)addPlaylistsToLibrary:(id)arg1;
- (id)getSinglePlaylist:(id)arg1;
- (id)getAllPlaylist;
- (void)removeShowFromLibrary:(id)arg1;
- (void)addShowsToLibrary:(id)arg1;
- (id)getShowCountGroupedByIndices;
- (id)getSingleShow:(id)arg1;
- (id)getAllShow;
- (id)getShowsFromIndex:(int)arg1;
- (id)getArtistCountGroupedByIndices;
- (id)getSongsForArtist:(id)arg1;
- (_Bool)checkIfAlbumExists:(id)arg1;
- (void)addAlbumOnly:(id)arg1;
- (void)removeOnlyAlbumFromLibrary:(id)arg1;
- (void)removeAlbumFromLibrary:(id)arg1;
- (void)addAlbumToLibrary:(id)arg1;
- (void)fetchandUpdateAlbum:(id)arg1;
- (id)getSingleAlbum:(id)arg1;
- (id)getAllAlbums;
- (id)getAlbumsFromIndex:(int)arg1;
- (id)checkArtistIds:(id)arg1 forSong:(id)arg2;
- (void)removeArtistsFromLibrary:(id)arg1 explicit:(_Bool)arg2;
- (void)addArtistsToLibrary:(id)arg1 explicit:(_Bool)arg2;
- (id)getAlbumCountGroupedByIndices;
- (id)getSingleArtist:(id)arg1;
- (id)getAllArtists;
- (id)getArtistsFromIndex:(int)arg1;
- (id)getSongsFromIndex:(int)arg1;
- (id)getSongCountGroupedByIndices;
- (id)getUnAvailableSongFromLibrary:(id)arg1;
- (void)fetchandUpdateSongs:(id)arg1;
- (id)getSongsOfAlbum:(id)arg1;
- (id)getFilteredItemsWithSearchString:(id)arg1 type:(int)arg2;
- (void)deleteAlbumsIfNecessary:(id)arg1;
- (void)getAndRemoveSongsFromLibrary:(id)arg1 explicitAction:(_Bool)arg2;
- (void)removeSongsFromLibrary:(id)arg1 explicitAction:(_Bool)arg2;
- (void)addSongsToLibrary:(id)arg1 explicitAction:(_Bool)arg2;
- (id)getSongsFromIds:(id)arg1;
- (void)getAllSongIdsAsync:(CDUnknownBlockType)arg1;
- (id)getAllSongIds;
- (id)getNextSongs:(id)arg1 tillLetter:(id)arg2;
- (id)getNextSongs:(id)arg1;
- (unsigned long long)getSongsCountForAlbum:(id)arg1;
- (id)getSingleSong:(id)arg1;
- (id)getAllSongs;
- (int)getSongCount;
- (void)cacheSongsOfMyLibrary:(id)arg1;
- (void)setAutoDownloadStatus:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)getAutoDownloadStatus;
- (id)init;

@end

