//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTCollectionPlatformDataLoader;

@interface SPTFollowDataProvider : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    NSString *_currentUserName;
}

@property(copy, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)socialgraphGetRequestBaseURI:(id)arg1 targetURI:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)makeFollowCountsRequestForFollowData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeIsFollowingRequestForFollowData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followDataForTargetURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataLoader:(id)arg1 collectionPlatformDataLoader:(id)arg2 currentUserName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

