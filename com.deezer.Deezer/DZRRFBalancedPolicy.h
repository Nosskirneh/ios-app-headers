//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCachePolicy.h"

@class DZRCacheQueue;

@interface DZRRFBalancedPolicy : DZRCachePolicy
{
    unsigned long long _cacheSizeLimit;
    DZRCacheQueue *_recentlyUsedItems;
    DZRCacheQueue *_frequentlyUsedItems;
    unsigned long long _recentlyUsedItemsTargetSize;
    unsigned long long _oldestAccessTimeInSeconds;
    unsigned long long _numberOfHits;
    unsigned long long _numberOfMisses;
    DZRCacheQueue *_recentlyUsedGhosts;
    DZRCacheQueue *_frequentlyUsedGhosts;
}

@property(retain, nonatomic) DZRCacheQueue *frequentlyUsedGhosts; // @synthesize frequentlyUsedGhosts=_frequentlyUsedGhosts;
@property(retain, nonatomic) DZRCacheQueue *recentlyUsedGhosts; // @synthesize recentlyUsedGhosts=_recentlyUsedGhosts;
@property(nonatomic) unsigned long long numberOfMisses; // @synthesize numberOfMisses=_numberOfMisses;
@property(nonatomic) unsigned long long numberOfHits; // @synthesize numberOfHits=_numberOfHits;
@property(nonatomic) unsigned long long oldestAccessTimeInSeconds; // @synthesize oldestAccessTimeInSeconds=_oldestAccessTimeInSeconds;
@property(nonatomic) unsigned long long recentlyUsedItemsTargetSize; // @synthesize recentlyUsedItemsTargetSize=_recentlyUsedItemsTargetSize;
@property(retain, nonatomic) DZRCacheQueue *frequentlyUsedItems; // @synthesize frequentlyUsedItems=_frequentlyUsedItems;
@property(retain, nonatomic) DZRCacheQueue *recentlyUsedItems; // @synthesize recentlyUsedItems=_recentlyUsedItems;
@property(nonatomic) unsigned long long cacheSizeLimit; // @synthesize cacheSizeLimit=_cacheSizeLimit;
- (void).cxx_destruct;
- (id)evictedItemToRetainItem:(id)arg1 withTargetSize:(unsigned long long)arg2;
- (id)itemsToMoveToFitSizeLimit:(unsigned long long)arg1;
- (void)adaptToCacheSizeLimit:(unsigned long long)arg1;
- (void)resetHitRatio;
- (_Bool)forceEvictionOfAllItemsWithError:(id *)arg1;
- (void)forceEvictionOfItemWithId:(id)arg1 ofCollectionWithId:(id)arg2 evictionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)retainAccessToContentAtPath:(id)arg1 forItemWithId:(id)arg2 ofCollectionWithId:(id)arg3 contentSize:(unsigned long long)arg4 cachingBlock:(CDUnknownBlockType)arg5 evictionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (double)hitRatio;
- (_Bool)tryFreeSpaceToStoreContentWithExpectedSize:(unsigned long long)arg1;
- (unsigned long long)defaultCacheSize;
- (unsigned long long)freeSpaceThreshold;
- (unsigned long long)cacheSize;
- (void)didUnarchiveItem:(id)arg1;
- (void)didUnarchiveItems:(id)arg1 stateDictionary:(id)arg2;
- (id)willArchiveDictionary:(id)arg1;
- (id)init;

@end

