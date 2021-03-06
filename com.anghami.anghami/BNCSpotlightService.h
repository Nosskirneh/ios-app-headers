//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserActivityDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BNCSpotlightService : NSObject <NSUserActivityDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)removeAllBranchSearchableItemsWithCallback:(CDUnknownBlockType)arg1;
- (void)removeSearchableItemsWithIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeSearchableItemsWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userActivityWillSave:(id)arg1;
- (void)indexUsingSearchableItem:(id)arg1 thumbnailData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)indexUsingNSUserActivity:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue;
- (void)indexPrivatelyWithBranchUniversalObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)attributeSetWithUniversalObject:(id)arg1 thumbnail:(id)arg2 url:(id)arg3;
- (void)indexContentWithBranchUniversalObject:(id)arg1 linkProperty:(id)arg2 thumbnailUrl:(id)arg3 thumbnailData:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)indexWithBranchUniversalObject:(id)arg1 linkProperties:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

