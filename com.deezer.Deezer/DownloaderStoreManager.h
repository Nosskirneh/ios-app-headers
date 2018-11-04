//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataStoreManagerImplementation.h"

@class NSArray, NSMutableDictionary;

@interface DownloaderStoreManager : DataStoreManagerImplementation
{
    NSArray *_migrationDirectives;
    NSArray *_fullMigrationDirectives;
    NSMutableDictionary *_cacheKeyMapping;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *cacheKeyMapping; // @synthesize cacheKeyMapping=_cacheKeyMapping;
@property(retain, nonatomic) NSArray *fullMigrationDirectives; // @synthesize fullMigrationDirectives=_fullMigrationDirectives;
@property(retain, nonatomic) NSArray *migrationDirectives; // @synthesize migrationDirectives=_migrationDirectives;
- (void).cxx_destruct;
- (void)migrateCacheEntriesWithCacheDirectives:(id)arg1 forUserID:(id)arg2;
- (void)markMigrationsDone;
- (_Bool)areMigrationsNeeded;
- (void)doMigrationsForUserID:(id)arg1;
- (id)dateOfLastAccessForFileAtPath:(id)arg1;
- (id)dateOfLastAccessForCachedDataForKey:(id)arg1 userID:(id)arg2;
- (id)cachedDataForKey:(id)arg1 userID:(id)arg2 modificationDate:(id *)arg3;
- (void)cacheData:(id)arg1 forKey:(id)arg2 userID:(id)arg3;
- (id)pathFollowingEventualSymlinkAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)isSymbolicLinkExistAtPath:(id)arg1;
- (id)relativePathForKey:(id)arg1 userID:(id)arg2;
- (id)fullPathForKey:(id)arg1 userID:(id)arg2;
- (void)invalidateCacheDataForKey:(id)arg1 userID:(id)arg2;
- (void)mapKey:(id)arg1 toRequestInfo:(id)arg2;
- (id)cacheMappingFilePath;
- (id)permanentCacheRelativeDirectory;
- (int)storeType;

@end

