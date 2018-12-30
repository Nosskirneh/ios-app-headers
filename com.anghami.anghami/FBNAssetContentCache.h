//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface FBNAssetContentCache : NSObject <NSURLSessionDownloadDelegate>
{
    NSURLSession *_session;
    NSMutableDictionary *_cacheOperations;
    NSMutableSet *_cachedKeys;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    unsigned long long _currentBackgroundTask;
}

@property(nonatomic) unsigned long long currentBackgroundTask; // @synthesize currentBackgroundTask=_currentBackgroundTask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(copy, nonatomic) NSMutableSet *cachedKeys; // @synthesize cachedKeys=_cachedKeys;
@property(readonly, copy, nonatomic) NSMutableDictionary *cacheOperations; // @synthesize cacheOperations=_cacheOperations;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)_didFinishDownloadTaskWithCacheKey:(id)arg1 fromURL:(id)arg2;
- (void)_didDownloadContentWithCacheKey:(id)arg1 toURL:(id)arg2;
- (void)_startDownloadTasksForCacheOperation:(id)arg1;
- (id)_cacheKeyForContentURL:(id)arg1;
- (id)_cacheFilePathForContentWithCacheKey:(id)arg1;
- (id)_cacheFilesFolderPath;
- (_Bool)_hasCachedDataForContentWithCacheKey:(id)arg1;
- (_Bool)hasCachedContentForURLs:(id)arg1;
- (id)cachedDataForContentURL:(id)arg1;
- (void)clearContentForURLs:(id)arg1;
- (void)cacheContentForURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

