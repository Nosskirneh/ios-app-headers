//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoader.h"
#import "SPTImageLoaderRemoteCallback.h"

@class NSHashTable, NSString, SPTImageLoaderEntityImageTracker, SPTImageLoaderRemoteImplementation, SPTPersistentCache;

@interface SPTImageLoaderImplementation : NSObject <SPTImageLoaderRemoteCallback, SPTImageLoader>
{
    id <SPTImageLoaderDelegate> _delegate;
    SPTPersistentCache *_persistentCache;
    SPTImageLoaderEntityImageTracker *_offlineEntityTracker;
    CDUnknownBlockType _persistentKeyBlock;
    NSHashTable *_observers;
    SPTImageLoaderRemoteImplementation *_basicLoader;
    struct CGSize _maximumImageSize;
}

@property(retain, nonatomic) SPTImageLoaderRemoteImplementation *basicLoader; // @synthesize basicLoader=_basicLoader;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) struct CGSize maximumImageSize; // @synthesize maximumImageSize=_maximumImageSize;
@property(readonly, copy, nonatomic) CDUnknownBlockType persistentKeyBlock; // @synthesize persistentKeyBlock=_persistentKeyBlock;
@property(readonly, nonatomic) SPTImageLoaderEntityImageTracker *offlineEntityTracker; // @synthesize offlineEntityTracker=_offlineEntityTracker;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(nonatomic) __weak id <SPTImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoaded:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (void)imageLoadError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)imageLoaded:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (void)removeInstrumentationObserver:(id)arg1;
- (void)addInstrumentationObserver:(id)arg1;
- (id)persistentKeyForURL:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelAllLoads;
- (_Bool)isURL:(id)arg1 persistedForKey:(id)arg2;
- (_Bool)removePersistentURLsNotInArray:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)removePersistentURL:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)persistImage:(id)arg1 forURL:(id)arg2 withKey:(id)arg3 sourceIdentifier:(id)arg4;
- (id)loadImageWithUpscalingForURL:(id)arg1 sourceIdentifier:(id)arg2 size:(struct CGSize)arg3 context:(id)arg4;
- (id)loadImageForURL:(id)arg1 sourceIdentifier:(id)arg2 size:(struct CGSize)arg3 context:(id)arg4;
- (void)dispatchErrorCallback:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)dispatchSuccessCallbackWithImage:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (void)dispatchStartedCallbackForURL:(id)arg1;
- (id)nsErrorWithCode:(long long)arg1;
- (void)persistImage:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (id)persistentKeyPrefixForURL:(id)arg1;
@property(getter=isOffline) _Bool offline;
- (id)initWithDataLoader:(id)arg1 offlineEntityTracker:(id)arg2 persistentCache:(id)arg3 memoryCache:(id)arg4 imageLoaderRegistry:(id)arg5 persistentKeyBlock:(CDUnknownBlockType)arg6 maximumImageSize:(struct CGSize)arg7;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

