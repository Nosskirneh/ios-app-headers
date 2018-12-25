//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSDate, NSString;

@interface ULRPersistentCache : NSObject
{
    NSString *_cacheIdentifier;
    NSString *_cacheFileName;
    NSConditionLock *_outstandingIOLock;
    NSDate *_lastCacheFileReadDate;
    id _lastPersistedCacheContent;
}

+ (id)testCacheFileNamePrefix;
+ (void)setTestCacheFileNamePrefix:(id)arg1;
+ (id)cacheIdentifierFromCacheFileName:(id)arg1;
+ (id)cacheFileNameWithCacheIdentifier:(id)arg1;
+ (id)cacheFileNamePrefix;
+ (_Bool)scrubCachesMissingFromCacheIdentifiers:(id)arg1 error:(id *)arg2;
+ (_Bool)clearAllCachesWithError:(id *)arg1;
- (void).cxx_destruct;
- (_Bool)shouldReloadCacheContentsFromDisk;
- (long long)outstandingIOCount;
- (void)clearCacheContent;
- (void)failedToWriteCacheContent:(id)arg1 error:(id)arg2;
- (void)priorCacheContent:(id)arg1 error:(id)arg2;
- (_Bool)isOurCacheFileReadStale:(id)arg1;
- (void)receivedDeleteCacheFileNotification:(id)arg1;
- (void)receivedClearAllCachesNotification:(id)arg1;
- (id)deleteCacheFile;
- (void)writeCacheFileContent:(id)arg1;
- (void)saveCacheContent:(id)arg1;
- (void)loadPriorCacheNow;
- (void)loadPriorCacheInBackground;
- (id)cacheFileURLWithError:(id *)arg1;
- (_Bool)waitForIOFinishedBeforeDate:(id)arg1;
- (void)waitForIOFinished;
- (_Bool)clearCacheWithError:(id *)arg1;
- (void)initialCacheRead;
- (id)initWithCacheIdentifier:(id)arg1;

@end
