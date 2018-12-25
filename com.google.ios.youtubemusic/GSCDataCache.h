//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCDataCacheIndex, NSMutableDictionary, NSString, NSURL;

@interface GSCDataCache : NSObject
{
    unsigned long long _options;
    struct sqlite3 *_db;
    long long _dbPageSize;
    _Bool _dbExistedWhenOpened;
    NSURL *_cacheDirectoryURL;
    NSString *_dbName;
    long long _diskUsageLimit;
    long long _currentDiskUsage;
    NSMutableDictionary *_mapOfDataBeingWritten;
    _Bool _restoreInProgress;
    _Bool _reclaimDiskSpaceDefaultAmountAfterAsyncRestore;
    _Bool _reclaimDiskSpaceInProgress;
    _Bool _databaseIsCorrupted;
    GSCDataCacheIndex *_storageIndex;
    NSMutableDictionary *_cachedStatements;
    long long _reclaimDiskSpaceLimit;
    long long _reclaimDiskSpaceAmount;
    NSString *_fileExtension;
}

+ (_Bool)createCacheDirectory:(id)arg1 error:(id *)arg2;
+ (struct sqlite3 *)databaseWithURL:(id)arg1 dbFileExists:(_Bool *)arg2;
+ (void)deleteDatabaseWithURL:(id)arg1;
+ (id)directoryForDefaultCacheLocationWithName:(id)arg1;
+ (void)deleteCacheWithName:(id)arg1;
+ (id)dataCacheWithName:(id)arg1 options:(unsigned long long)arg2;
+ (void)setUseExclusiveLocking:(_Bool)arg1;
+ (_Bool)useExclusiveLocking;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) long long reclaimDiskSpaceAmount; // @synthesize reclaimDiskSpaceAmount=_reclaimDiskSpaceAmount;
@property(nonatomic) long long reclaimDiskSpaceLimit; // @synthesize reclaimDiskSpaceLimit=_reclaimDiskSpaceLimit;
- (void).cxx_destruct;
- (_Bool)executeSQL:(id)arg1;
- (void)cacheReusableStatementForSQL:(id)arg1 statement:(struct sqlite3_stmt *)arg2;
- (struct sqlite3_stmt *)reusableStatementForSQL:(id)arg1;
- (struct sqlite3_stmt *)prepareStatementForSQL:(id)arg1;
- (_Bool)restoreIndexAndStorage;
- (_Bool)createSqlDatabase;
- (void)restoreFromDisk;
- (_Bool)createDatabaseTable;
- (_Bool)updateDatabaseVersion;
- (_Bool)checkDatabaseVersion;
- (void)configureDatabase;
- (void)checkForUnrecoverableError:(int)arg1;
- (void)eraseBlobsWithStorageIDs:(id)arg1;
- (_Bool)saveToStorageID:(unsigned int)arg1 withData:(id)arg2;
- (id)dataWithStorageID:(unsigned int)arg1;
- (void)closeAndInvalidateDatabase;
- (long long)freePagesInDatabase;
- (void)readPageSize;
- (void)removeFromCurrentDiskUsage:(long long)arg1;
- (void)addToCurrentDiskUsage:(long long)arg1;
- (id)storageIDsToReclaimForSize:(long long)arg1;
- (void)reclaimDatabaseSpaceWithDefaultAmount:(_Bool)arg1;
- (id)fileUrlForStorageId:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isRestoreInProgress) _Bool restoreInProgress;
@property(readonly, nonatomic) long long currentDiskUsage;
@property(nonatomic) long long diskUsageLimit;
- (void)reclaimDiskSpaceWithDefaultAmount:(_Bool)arg1;
- (void)removeAll;
- (void)removeDataForKey:(id)arg1;
- (_Bool)storeData:(id)arg1 forKey:(id)arg2;
- (id)fileUrlForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (_Bool)replaceKey:(id)arg1 withKey:(id)arg2;
- (_Bool)containsDataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1 options:(unsigned long long)arg2;

@end

