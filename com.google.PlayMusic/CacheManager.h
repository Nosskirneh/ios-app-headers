//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CachePolicyManager, NSURL;

@interface CacheManager : NSObject
{
    CachePolicyManager *_policyManager;
    NSURL *_cacheDirectoryURL;
}

+ (_Bool)createCacheSubdirectoryAtURL:(id)arg1;
+ (id)createRootDirectoryIfNotExists;
+ (id)createCacheDirectoryWithCacheName:(id)arg1;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
- (void).cxx_destruct;
- (void)setMinFreeSpaceFraction:(double)arg1 owner:(long long)arg2;
- (void)setMinFreeSpaceSize:(unsigned long long)arg1 owner:(long long)arg2;
- (void)setMaxAllowedFraction:(double)arg1 owner:(long long)arg2;
- (void)setMaxAllowedSize:(unsigned long long)arg1 owner:(long long)arg2;
- (unsigned long long)spaceToFreeForNewFileOfSize:(unsigned long long)arg1 owner:(long long)arg2;
- (void)clearCacheForOwner:(long long)arg1;
- (void)clearCache;
- (void)clearOrphanedCacheEntries;
- (id)evictionCandidatesForSize:(unsigned long long)arg1 owner:(long long)arg2;
- (_Bool)shouldEvictWhenCacheFullForOwner:(long long)arg1;
- (_Bool)deleteEntryForCachedID:(id)arg1;
- (_Bool)commitCacheEntry:(id)arg1;
- (id)tempCacheEntryForCacheID:(id)arg1 size:(unsigned long long)arg2 owner:(long long)arg3;
- (unsigned long long)totalSizeOfCacheForOwner:(long long)arg1;
- (_Bool)hasEntryForCachedID:(id)arg1;
- (id)pathForCacheID:(id)arg1;
- (id)initWithCacheName:(id)arg1;
- (id)init;

@end

