//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MyLibraryDB : NSObject
{
    NSString *databasePath;
    struct sqlite3 *database;
    _Bool fetchedAllLibrarySongs;
    NSMutableArray *songsInMemory;
    CDUnknownBlockType songTitleComparator;
}

+ (id)getContentsForPlaylist:(id)arg1;
+ (id)sharedDB;
- (void).cxx_destruct;
- (void)initComparator;
- (id)fetchLibrarySongFromID:(id)arg1 updateCache:(_Bool)arg2;
- (void)notifyUIAboutEntry:(int)arg1 userInfo:(id)arg2;
- (_Bool)purgeMyLibraryDB;
- (_Bool)isEntityAvailable:(id)arg1;
- (long long)getEntityCount:(int)arg1;
- (id)getAllPlaylistForSync;
- (id)getIdsforEntryType:(int)arg1;
- (_Bool)removeShowFromDB:(id)arg1;
- (id)getSingleShow:(id)arg1;
- (_Bool)addShowToMyLibrary:(id)arg1;
- (void)addShowsToMyLibrary:(id)arg1;
- (id)getShowFromDB;
- (id)getShowCountGroupedByIndices;
- (id)getShowsFromIndex:(int)arg1;
- (_Bool)removePlaylistFromDB:(id)arg1;
- (_Bool)insertOrUpdatePlaylistToDB:(id)arg1;
- (void)addPlaylistsToDB:(id)arg1;
- (id)getSinglePlaylist:(id)arg1;
- (id)getPlaylistFromDB;
- (_Bool)checkIfAlbumExistsInDB:(id)arg1;
- (id)deleteAlbumsIfNecessary:(id)arg1;
- (_Bool)removeAlbumFromDB:(id)arg1;
- (void)addAlbumsToDB:(id)arg1 explicitAction:(_Bool)arg2;
- (_Bool)addAlbumToDB:(id)arg1;
- (id)getSingleAlbum:(id)arg1;
- (id)getAlbumsFromDB;
- (id)getAlbumCountGroupedByIndices;
- (id)getAlbumsFromIndex:(int)arg1;
- (id)getExplicitIdsforAlbums;
- (id)getExplicitIdsforArtist;
- (void)removeArtistsFromDB:(id)arg1 explicitAction:(_Bool)arg2;
- (id)getArtistFromDB:(id)arg1;
- (void)addArtistsToDB:(id)arg1 explicitAction:(_Bool)arg2 songCountDict:(id)arg3;
- (id)checkExistingArtistsInDB:(id)arg1 forSong:(id)arg2;
- (id)getSongsForArtistInDB:(id)arg1;
- (id)getArtistsFromDB;
- (id)getArtistCountGroupedByIndices;
- (id)getArtistsFromIndex:(int)arg1;
- (id)checkExistingSongsInDB:(id)arg1;
- (unsigned long long)getSongsCountForAlbumFromDB:(id)arg1;
- (id)getSongsFromAlbum:(id)arg1;
- (id)getAlphaIndex:(int)arg1;
- (id)getSingleSong:(id)arg1;
- (long long)getSongsCount;
- (_Bool)removeSongsFromDB:(id)arg1 explicitAction:(_Bool)arg2;
- (void)removeSongFromDB:(id)arg1;
- (_Bool)updateSongToDB:(id)arg1;
- (_Bool)addSongsToDB:(id)arg1 explicitAction:(_Bool)arg2;
- (_Bool)addSongToDB:(id)arg1;
- (id)getNextSongsFromDB:(id)arg1;
- (id)getSongCountGroupedByIndices;
- (id)getSongsFromIndex:(int)arg1;
- (id)getNextSongsFromDB:(id)arg1 tillLetter:(id)arg2;
- (id)getSongsFromIdsInDB:(id)arg1;
- (id)getSongsFromDB;
- (id)getAllSongIdsFromDB;
- (id)searchItemFromDB:(id)arg1 entryType:(int)arg2;
- (void)checkAndCreateMyLibraryTable;
- (void)createMyLibraryDatabase;
- (id)init;

@end

