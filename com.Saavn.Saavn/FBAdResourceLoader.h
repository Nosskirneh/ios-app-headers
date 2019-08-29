//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFAssetResourceLoaderDelegate-Protocol.h"

@class NSMapTable, NSString;

@interface FBAdResourceLoader : NSObject <FNFAssetResourceLoaderDelegate>
{
    NSMapTable *_pendingVideoRequests;
}

+ (id)sharedResourceLoader;
@property(retain, nonatomic) NSMapTable *pendingVideoRequests; // @synthesize pendingVideoRequests=_pendingVideoRequests;
- (void).cxx_destruct;
- (int)activeRequestCountUsingResourceLoader:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 hasCachedDataForUrl:(id)arg2 offset:(long long)arg3 length:(int)arg4;
- (_Bool)resourceLoader:(id)arg1 hasPrefetchedDataForUrl:(id)arg2;
- (void)resourceLoader:(id)arg1 loadRequest:(id)arg2;
- (void)resourceLoader:(id)arg1 cancelLoadingRequest:(id)arg2;
- (void)removeVideoRequestForKey:(id)arg1;
- (id)videoRequestForKey:(id)arg1;
- (void)addVideoRequest:(id)arg1 forKey:(id)arg2;
- (void)fetchVideotAtURL:(id)arg1 withCacheFileURL:(id)arg2 withRetryBlock:(CDUnknownBlockType)arg3 withVideoBlock:(CDUnknownBlockType)arg4;
- (void)fetchDataAtURL:(id)arg1 withCacheFileURL:(id)arg2 withRetryBlock:(CDUnknownBlockType)arg3 withDataBlock:(CDUnknownBlockType)arg4;
- (void)fetchImageAtURL:(id)arg1 withCacheFileURL:(id)arg2 withRetryBlock:(CDUnknownBlockType)arg3 withImageBlock:(CDUnknownBlockType)arg4;
- (void)fetchCacheObjectAtURL:(id)arg1 withCacheFileURL:(id)arg2 withFetchType:(long long)arg3 withRetryBlock:(CDUnknownBlockType)arg4 withImageBlock:(CDUnknownBlockType)arg5 withDataBlock:(CDUnknownBlockType)arg6 withVideoBlock:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

