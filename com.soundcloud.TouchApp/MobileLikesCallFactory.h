//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory;

@interface MobileLikesCallFactory : NSObject
{
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
- (void).cxx_destruct;
- (id)requestObjectForUrl:(id)arg1;
- (id)apiCallForUrl:(id)arg1 likeCollectionClass:(Class)arg2;
- (id)apiCallForPlaylistLikesUrl:(id)arg1;
- (id)apiCallForTrackLikesUrl:(id)arg1;
- (id)init;

@end
