//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchConnectivityRequestHandler.h"

@class NSString, SPTWatchConnectivityDataLoader, SPTWatchConnectivitySession;

@interface SPTWatchPlatformCollectionRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <GLUEImageLoader> _glueImageLoader;
    SPTWatchConnectivitySession *_watchConnectivitySession;
}

@property(readonly, nonatomic) __weak SPTWatchConnectivitySession *watchConnectivitySession; // @synthesize watchConnectivitySession=_watchConnectivitySession;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (struct CGSize)pointSizeFromPixelSize:(struct CGSize)arg1;
- (id)stringFromCollectionPlatformState:(unsigned long long)arg1;
- (void)handleCollectionTransterItemImageRequest:(id)arg1;
- (void)handleCollectionRemoveRequest:(id)arg1;
- (void)handleCollectionAddRequest:(id)arg1;
- (void)handleCollectionItemStateRequest:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)sendCompletionResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithDataLoader:(id)arg1 collectionPlatform:(id)arg2 glueImageLoader:(id)arg3 watchConnectivitySession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
