//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationApi-Protocol.h"

@class MobilePostsCallFactory, NSString, SoundCloudApiDispatcher;

@interface UserRepostsPlaylistApi : NSObject <PaginationApi>
{
    MobilePostsCallFactory *_callFactory;
    SoundCloudApiDispatcher *_apiDispatcher;
}

@property(readonly, nonatomic) SoundCloudApiDispatcher *apiDispatcher; // @synthesize apiDispatcher=_apiDispatcher;
@property(readonly, nonatomic) MobilePostsCallFactory *callFactory; // @synthesize callFactory=_callFactory;
- (void).cxx_destruct;
- (id)paginatableItemsForUrl:(id)arg1;
- (id)initWithUserPostsCallFactory:(id)arg1 apiDispatcher:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
