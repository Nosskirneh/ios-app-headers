//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CachedSongDB : NSObject
{
    NSString *databasePath;
    struct sqlite3 *database;
    _Bool isDirty;
    NSMutableArray *songsInMemory;
}

+ (id)cachedSongDBSingleton;
- (void).cxx_destruct;
- (id)fetchCachedSongFromID:(id)arg1;
- (void)dealloc;
- (void)checkAndCreateDatabase;
- (id)getCacheDataForDisplay;
- (_Bool)isCacheDirty;
- (void)checkAndCreateCachedSongsTable;
- (void)updateCacheState:(id)arg1 cacheState:(int)arg2;
- (void)updateCachePathAndState:(id)arg1 cacheState:(int)arg2 path:(id)arg3;
- (void)updateImageLocalCache:(id)arg1 imgpath:(id)arg2;
- (id)getSingleSong:(id)arg1;
- (long long)countDownloadedSongs;
- (void)removeSong:(id)arg1;
- (id)getSongs:(_Bool)arg1;
- (id)getSongs:(_Bool)arg1 onlyCached:(_Bool)arg2;
- (id)getSongPidsForLibrary;
- (id)getCachedSongPids;
- (id)getsongPids;
- (void)getSongPidsAsync:(CDUnknownBlockType)arg1;
- (void)printTheDamnDB;
- (id)getPendingSongs;
- (int)getPendingSongsCount;
- (id)getUnCachedVersion:(id)arg1;
- (void)deletePendingSongs;
- (void)purgeDB;
- (_Bool)storeToDB:(id)arg1 localPath:(id)arg2;
- (_Bool)updateDB:(id)arg1;
- (id)init;

@end

