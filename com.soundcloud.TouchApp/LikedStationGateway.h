//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LikeGateway-Protocol.h"

@class LikedStationsSyncFactory, SyncCenter;

@interface LikedStationGateway : NSObject <LikeGateway>
{
    LikedStationsSyncFactory *_syncFactory;
    SyncCenter *_syncCenter;
}

@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(readonly, nonatomic) LikedStationsSyncFactory *syncFactory; // @synthesize syncFactory=_syncFactory;
- (void).cxx_destruct;
- (void)batchUpdateLikesWithUrns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSyncFactory:(id)arg1 syncCenter:(id)arg2;
- (id)init;

@end

