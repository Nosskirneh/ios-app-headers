//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ImageDownloadQueueing-Protocol.h"

@class AlignedImageResponseSerializer, NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue, _TtP2UI12ImageCaching_, _TtP8Features14ImageResolving_;

@interface ImageDownloadQueue : NSObject <ImageDownloadQueueing>
{
    NSURLSession *_session;
    NSString *_userAgent;
    id <_TtP8Features14ImageResolving_> _imageResolver;
    NSMutableArray *_activeDataTasks;
    NSMutableDictionary *_requestSubscribers;
    AlignedImageResponseSerializer *_responseSerializer;
    id <_TtP2UI12ImageCaching_> _imageCache;
    NSObject<OS_dispatch_queue> *_activeDataTasksQueue;
    NSObject<OS_dispatch_queue> *_requestSubscribersQueue;
}

+ (id)sessionWithConcurrency:(unsigned long long)arg1;
+ (id)sharedQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestSubscribersQueue; // @synthesize requestSubscribersQueue=_requestSubscribersQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *activeDataTasksQueue; // @synthesize activeDataTasksQueue=_activeDataTasksQueue;
@property(readonly) id <_TtP2UI12ImageCaching_> imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) AlignedImageResponseSerializer *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain) NSMutableDictionary *requestSubscribers; // @synthesize requestSubscribers=_requestSubscribers;
@property(retain) NSMutableArray *activeDataTasks; // @synthesize activeDataTasks=_activeDataTasks;
@property(readonly, nonatomic) id <_TtP8Features14ImageResolving_> imageResolver; // @synthesize imageResolver=_imageResolver;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)fallbackImageForUrn:(id)arg1 url:(id)arg2;
- (id)urlForTask:(id)arg1;
- (id)cacheKeyFromURL:(id)arg1;
- (id)imageAndCacheStatusTuple:(id)arg1 isCached:(_Bool)arg2;
- (void)removeSubscribersForURL:(id)arg1;
- (id)subscribersForUrl:(id)arg1;
- (void)removeSubscriber:(id)arg1 forURL:(id)arg2;
- (void)addSubscriber:(id)arg1 forUrl:(id)arg2;
- (void)removeActiveDataTask:(id)arg1;
- (void)addActiveDataTask:(id)arg1;
- (id)dataTaskWithURL:(id)arg1;
- (void)handleFailedRequestWithURL:(id)arg1 withError:(id)arg2;
- (void)handleSuccessfulRequestForURL:(id)arg1 withResponseImage:(id)arg2 responseData:(id)arg3;
- (id)downloadImageForURL:(id)arg1;
- (id)downloadSignalForURL:(id)arg1;
- (id)downloadImageWithUrn:(id)arg1 size:(struct CGSize)arg2;
- (id)downloadImageWithURL:(id)arg1;
- (id)downloadImageWithResolvableEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithSession:(id)arg1 imageCache:(id)arg2 imageResolver:(id)arg3 environment:(id)arg4 responseSerializer:(id)arg5 activeDataTasksQueue:(id)arg6 requestSubscribersQueue:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

