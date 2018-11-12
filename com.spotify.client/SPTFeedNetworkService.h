//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTDataLoader, SPTFeedHeartBeatRefreshStore;

@interface SPTFeedNetworkService : NSObject <SPTDataLoaderDelegate>
{
    SPTFeedHeartBeatRefreshStore *_heartBeatRefreshStore;
    SPTDataLoader *_dataLoader;
    NSURL *_feedNextPageURL;
}

@property(retain, nonatomic) NSURL *feedNextPageURL; // @synthesize feedNextPageURL=_feedNextPageURL;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTFeedHeartBeatRefreshStore *heartBeatRefreshStore; // @synthesize heartBeatRefreshStore=_heartBeatRefreshStore;
- (void).cxx_destruct;
- (id)constructURLWithLimit:(id)arg1 filter:(id)arg2;
- (id)entityForDictionary:(id)arg1;
- (id)parseResponseDictionary:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)executeRequestOnQueue:(id)arg1 forURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchMostRecentFeedItemOnQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchFeedNextPageOnQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchFeedDataOnQueue:(id)arg1 filter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDataLoader:(id)arg1 heartBeatRefreshStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

