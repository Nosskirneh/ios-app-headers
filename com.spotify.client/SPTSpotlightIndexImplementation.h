//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpotlightIndex-Protocol.h"
#import "SPTSpotlightItemsProviderDelegate-Protocol.h"

@class CSSearchableIndex, NSArray, NSString, SPTSpotlightTestManager;
@protocol SPTReachabilityMonitor, SPTSpotlightIndexGatekeeper;

@interface SPTSpotlightIndexImplementation : NSObject <SPTSpotlightItemsProviderDelegate, SPTSpotlightIndex>
{
    NSArray *_itemsProviders;
    CSSearchableIndex *_index;
    SPTSpotlightTestManager *_testManager;
    id <SPTReachabilityMonitor> _reachability;
    id <SPTSpotlightIndexGatekeeper> _gatekeeper;
}

@property(readonly, nonatomic) id <SPTSpotlightIndexGatekeeper> gatekeeper; // @synthesize gatekeeper=_gatekeeper;
@property(readonly, nonatomic) id <SPTReachabilityMonitor> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) SPTSpotlightTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSArray *itemsProviders; // @synthesize itemsProviders=_itemsProviders;
- (void).cxx_destruct;
- (void)decorateUserActivity:(id)arg1 withThumbnailImage:(id)arg2;
- (void)decorateUserActivity:(id)arg1 asPublic:(_Bool)arg2 title:(id)arg3 description:(id)arg4 thumbnail:(id)arg5 keywords:(id)arg6 webpageURL:(id)arg7;
- (void)createContentAttributeSetForUserActivity:(id)arg1;
- (void)itemsProviderDidFailLoadingItems:(id)arg1 error:(id)arg2;
- (void)itemsProvider:(id)arg1 didLoadItems:(id)arg2 lastWindow:(_Bool)arg3;
- (void)indexSpotlightItemNamed:(id)arg1 description:(id)arg2 image:(id)arg3 url:(id)arg4 keywords:(id)arg5;
- (void)indexLibrary;
- (void)indexIfNeeded;
- (void)dealloc;
- (void)dropIndex;
- (void)updateIndex;
- (id)initWithItemsProviders:(id)arg1 searchableIndex:(id)arg2 testManager:(id)arg3 reachabilityMonitor:(id)arg4 gatekeeper:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

