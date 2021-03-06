//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString;

@interface DZROfflineSearchIndex : NSObject
{
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_internalIndex;
    NSMutableSet *_catalog;
    NSSet *_spotlightCatalog;
    NSString *_baseCachePath;
    NSMutableDictionary *_backgroundTasksRegistery;
}

@property(retain, nonatomic) NSMutableDictionary *backgroundTasksRegistery; // @synthesize backgroundTasksRegistery=_backgroundTasksRegistery;
@property(retain, nonatomic) NSString *baseCachePath; // @synthesize baseCachePath=_baseCachePath;
@property(retain, nonatomic) NSSet *spotlightCatalog; // @synthesize spotlightCatalog=_spotlightCatalog;
@property(retain, nonatomic) NSMutableSet *catalog; // @synthesize catalog=_catalog;
@property(retain, nonatomic) NSMutableDictionary *internalIndex; // @synthesize internalIndex=_internalIndex;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)removeFromSpotlight:(id)arg1;
- (void)indexToSpotlight:(id)arg1;
- (id)objectForUniqueIdentifier:(id)arg1;
- (id)itemsMatchingStrings:(id)arg1;
- (void)insertItem:(id)arg1 forKey:(id)arg2;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (id)cachePath;
- (void)saveCacheData;
- (void)loadCachedData;
- (void)hydrate;
- (void)dealloc;
- (id)initWithCachePath:(id)arg1;

@end

