//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCache.h"

@protocol DZRSmartCachedPlayablesRepository;

@interface DZRStreamingCache : DZRCache
{
    id <DZRSmartCachedPlayablesRepository> _smartCachedPlayablesRepository;
}

+ (id)defaultCache;
@property(retain, nonatomic) id <DZRSmartCachedPlayablesRepository> smartCachedPlayablesRepository; // @synthesize smartCachedPlayablesRepository=_smartCachedPlayablesRepository;
- (void).cxx_destruct;
- (void)releaseAccessToContentOfItemWithId:(id)arg1 ofCollectionWithId:(id)arg2 evictionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)forceEvictionOfItemWithId:(id)arg1 ofCollectionWithId:(id)arg2 evictionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (_Bool)removeContentOfItemWithId:(id)arg1 error:(id *)arg2;
- (_Bool)removeContentOfAllItemsWithError:(id *)arg1;
- (id)bestQualityDownloadableForPlayable:(id)arg1;
- (_Bool)hasSmartCachedPlayable:(id)arg1;
- (id)allSmartCachedPlayables;
- (void)retainAccessToPlayable:(id)arg1 path:(id)arg2 itemWithId:(id)arg3 collectionWithId:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)complementaryCache;
- (id)storageDomain;
- (Class)policyClass;

@end

