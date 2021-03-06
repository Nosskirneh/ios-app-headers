//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSManagedObjectContext, NSString, SCRequest, VOXStreamModelsStorage, VOXStreamSoundCloudModelsSynchronizer;
@protocol OS_dispatch_queue;

@interface VOXStreamSoundCloudSource : NSObject <UIAlertViewDelegate>
{
    _Bool _requestFailAlertIsVisible;
    NSString *_futureStreamPageURL;
    NSString *_nextStreamPageURL;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    VOXStreamModelsStorage *_streamStorage;
    NSManagedObjectContext *_context;
    SCRequest *_topMostRequest;
    SCRequest *_updatesRequest;
    SCRequest *_nextPageRequest;
    VOXStreamSoundCloudModelsSynchronizer *_topMostModelsSynchronizer;
    VOXStreamSoundCloudModelsSynchronizer *_updatesModelsSynchronizer;
    VOXStreamSoundCloudModelsSynchronizer *_nextPageModelsSynchronizer;
}

@property(retain, nonatomic) VOXStreamSoundCloudModelsSynchronizer *nextPageModelsSynchronizer; // @synthesize nextPageModelsSynchronizer=_nextPageModelsSynchronizer;
@property(retain, nonatomic) VOXStreamSoundCloudModelsSynchronizer *updatesModelsSynchronizer; // @synthesize updatesModelsSynchronizer=_updatesModelsSynchronizer;
@property(retain, nonatomic) VOXStreamSoundCloudModelsSynchronizer *topMostModelsSynchronizer; // @synthesize topMostModelsSynchronizer=_topMostModelsSynchronizer;
@property(retain, nonatomic) SCRequest *nextPageRequest; // @synthesize nextPageRequest=_nextPageRequest;
@property(retain, nonatomic) SCRequest *updatesRequest; // @synthesize updatesRequest=_updatesRequest;
@property(retain, nonatomic) SCRequest *topMostRequest; // @synthesize topMostRequest=_topMostRequest;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) VOXStreamModelsStorage *streamStorage; // @synthesize streamStorage=_streamStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSString *nextStreamPageURL; // @synthesize nextStreamPageURL=_nextStreamPageURL;
@property(retain, nonatomic) NSString *futureStreamPageURL; // @synthesize futureStreamPageURL=_futureStreamPageURL;
@property(nonatomic) _Bool requestFailAlertIsVisible; // @synthesize requestFailAlertIsVisible=_requestFailAlertIsVisible;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processLikeFailedError;
- (void)storeNextPageURL:(id)arg1;
- (void)storeFuturePageURL:(id)arg1;
- (void)cancelRequestsActivity;
- (void)cleanUp:(CDUnknownBlockType)arg1;
- (void)markPlayableItem:(id)arg1 asLiked:(_Bool)arg2;
- (void)markTrackAsLiked:(_Bool)arg1 trackId:(id)arg2;
- (void)requestMoreTracksWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestUpdatesWithUpdateUUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestTopMostStreamTracksWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

