//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCache.h>

@class FBAdTimer, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface FBAdCache : NSCache
{
    NSMapTable *_objectsToBeExpired;
    NSObject<OS_dispatch_queue> *_expirationQueue;
    FBAdTimer *_removalTimer;
    NSMapTable *_pendingVideoRequests;
}

+ (id)sharedCache;
+ (void)initialize;
@property(retain, nonatomic) NSMapTable *pendingVideoRequests; // @synthesize pendingVideoRequests=_pendingVideoRequests;
@property(retain, nonatomic) FBAdTimer *removalTimer; // @synthesize removalTimer=_removalTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *expirationQueue; // @synthesize expirationQueue=_expirationQueue;
@property(retain, nonatomic) NSMapTable *objectsToBeExpired; // @synthesize objectsToBeExpired=_objectsToBeExpired;
- (void).cxx_destruct;
- (void)dealloc;
- (void)wipeInMemoryCache;
- (void)wipeDiskCache;
- (void)wipeCache;
@property(readonly, nonatomic) _Bool wipeDiskCacheIfNeeded;
@property(readonly, nonatomic) unsigned long long diskCacheSize;
- (id)eaglContext;
- (id)eaglContextKey;
- (id)openGLImageContext;
- (id)openGLImageContextKey;
- (id)defaultImageContext;
- (id)defaultImageContextKey;
- (void)setNativeAds:(id)arg1 forScrollView:(id)arg2 forManager:(id)arg3;
- (id)nativeAdsForScrollView:(id)arg1 forManager:(id)arg2;
- (void)setBlurredImage:(id)arg1 forURL:(id)arg2;
- (id)blurredImageForURL:(id)arg1;
- (void)setVideoURLWrapper:(id)arg1 forURL:(id)arg2;
- (void)videoURLWrapperForURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setImage:(id)arg1 forURL:(id)arg2;
- (void)imageForURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)imageForURL:(id)arg1;
- (void)objectForKey:(id)arg1 withURL:(id)arg2 withFetchType:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)objectForKey:(id)arg1 withURL:(id)arg2 withFetchType:(long long)arg3 withBlock:(CDUnknownBlockType)arg4 withCallback:(_Bool)arg5;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 withExpiration:(id)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 withExpiration:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1 filterPlaceholder:(_Bool)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithExpirationInterval:(double)arg1;
- (id)init;

@end

