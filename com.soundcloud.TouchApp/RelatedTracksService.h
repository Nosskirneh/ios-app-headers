//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PlayQueueFetcherFactory, PlayQueueRequestControllerFactory, RelatedTracksCallFactory, StorageRequestController, SyncCenter;

@interface RelatedTracksService : NSObject
{
    RelatedTracksCallFactory *_relatedTracksCallFactory;
    SyncCenter *_syncCenter;
    PlayQueueRequestControllerFactory *_controllerFactory;
    PlayQueueFetcherFactory *_fetcherFactory;
    StorageRequestController *_controller;
}

@property(retain, nonatomic) StorageRequestController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) PlayQueueFetcherFactory *fetcherFactory; // @synthesize fetcherFactory=_fetcherFactory;
@property(readonly, nonatomic) PlayQueueRequestControllerFactory *controllerFactory; // @synthesize controllerFactory=_controllerFactory;
@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(readonly, nonatomic) RelatedTracksCallFactory *relatedTracksCallFactory; // @synthesize relatedTracksCallFactory=_relatedTracksCallFactory;
- (void).cxx_destruct;
- (id)nextPageUrlForUrn:(id)arg1;
- (id)fetchInitialTrack;
- (id)fetchTracksWithSeed:(id)arg1;
- (id)createPlayQueue;
- (id)fetchRelatedTracksForSeed:(id)arg1;
- (id)initWithRelatedTracksCallFactory:(id)arg1 syncCenter:(id)arg2 controllerFactory:(id)arg3 fetcherFactory:(id)arg4;
- (id)init;

@end

