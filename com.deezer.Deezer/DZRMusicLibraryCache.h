//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCache.h"

@interface DZRMusicLibraryCache : DZRCache
{
}

+ (id)defaultCache;
- (_Bool)hasSmartCachedPlayable:(id)arg1;
- (id)allSmartCachedPlayables;
- (void)checkSufficientFreeSpaceToStoreContentWithExpectedSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)policyHasEvictedPlayableItem:(id)arg1 itemId:(id)arg2 fromCollectionWithId:(id)arg3;
- (id)complementaryCache;
- (id)storageDomain;
- (Class)policyClass;

@end

