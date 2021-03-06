//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition, NSMutableArray, NSMutableSet, NSTimer;

@interface ANGImageDownloader : NSObject
{
    NSObject *_persistanceLock;
    NSMutableSet *_persistedOperations;
    NSMutableArray *_pendingOperations;
    NSArray *_downloadThreads;
    NSObject *_operationsLock;
    NSCondition *_condition;
    NSTimer *_lastUsedUpdateTimer;
    NSMutableArray *_lastUsedToUpdate;
    NSTimer *_persistedOperationsPurgeTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *persistedOperationsPurgeTimer; // @synthesize persistedOperationsPurgeTimer=_persistedOperationsPurgeTimer;
@property(retain, nonatomic) NSMutableArray *lastUsedToUpdate; // @synthesize lastUsedToUpdate=_lastUsedToUpdate;
@property(retain, nonatomic) NSTimer *lastUsedUpdateTimer; // @synthesize lastUsedUpdateTimer=_lastUsedUpdateTimer;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSObject *operationsLock; // @synthesize operationsLock=_operationsLock;
@property(retain, nonatomic) NSArray *downloadThreads; // @synthesize downloadThreads=_downloadThreads;
@property(retain, nonatomic) NSMutableArray *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain) NSMutableSet *persistedOperations; // @synthesize persistedOperations=_persistedOperations;
@property(retain) NSObject *persistanceLock; // @synthesize persistanceLock=_persistanceLock;
- (void).cxx_destruct;
- (void)clearDiskCache;
- (void)didFinishDownloadingImageWithSpec:(id)arg1 image:(id)arg2;
- (id)getNextQueueItemWithMinPriority:(long long)arg1 maxPriority:(long long)arg2;
- (void)storeImage:(id)arg1 forDownloadSpec:(id)arg2;
- (id)imageFromCacheForSpec:(id)arg1 thumbnail:(_Bool *)arg2 cachedImage:(id *)arg3;
- (id)cachedImageRefForSpec:(id)arg1 thumbnail:(_Bool *)arg2;
- (id)imageFromCacheForSpec:(id)arg1 thumbnail:(_Bool *)arg2;
- (void)cleanDiskCache;
- (void)_cleanDiskCache;
- (void)removeAllPermanentImages;
- (void)removePermanentImageSpec:(id)arg1;
- (void)addPermanentImageSpec:(id)arg1;
- (void)addPermanentImageSpecs:(id)arg1;
- (void)notifyThreads;
- (void)removeCachedImageForKey:(id)arg1;
- (void)requeueItemForRetry:(id)arg1;
- (id)getImage:(id)arg1 skipCacheCheck:(_Bool)arg2 notifyThreads:(_Bool)arg3 tracing:(_Bool)arg4 persistOperation:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (id)getRealm;
- (id)getImage:(id)arg1 tracing:(_Bool)arg2 persistOperation:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (id)getImage:(id)arg1 tracing:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getImage:(id)arg1 persistOperation:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_purgePersistedOperations;
- (void)purgePersistedOperations;
- (void)removePersistedOperation:(id)arg1;
- (void)persistOperation:(id)arg1;
- (void)updateLastUsed;
- (void)scheduleLastUsedUpdateTimer;
- (id)init;

@end

