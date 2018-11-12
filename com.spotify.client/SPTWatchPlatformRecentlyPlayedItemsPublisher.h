//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTWatchPlatformPublisher-Protocol.h"

@class NSString;
@protocol SPTRecentlyPlayedEntityList, SPTWatchConnectivityPubSubMessageQueue;

@interface SPTWatchPlatformRecentlyPlayedItemsPublisher : NSObject <SPTCollectionEntityListObserver, SPTWatchPlatformPublisher>
{
    id <SPTWatchConnectivityPubSubMessageQueue> _pubSubMessageQueue;
    id <SPTRecentlyPlayedEntityList> _recentlyPlayedEntityList;
}

@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedEntityList> recentlyPlayedEntityList; // @synthesize recentlyPlayedEntityList=_recentlyPlayedEntityList;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSubMessageQueue> pubSubMessageQueue; // @synthesize pubSubMessageQueue=_pubSubMessageQueue;
- (void).cxx_destruct;
- (void)entityListDidReload:(id)arg1;
- (void)startPublishing;
- (void)handlePublisherEvent:(long long)arg1;
- (void)publishRecentlyPlayedItems;
- (id)initWithPubSubMessageQueue:(id)arg1 recentlyPlayedEntityList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

