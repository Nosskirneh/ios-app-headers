//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTExternalIntegrationContentProvider-Protocol.h"
#import "SPTService-Protocol.h"

@class NSMutableArray, NSString, SPTAllocationContext, SPTExternalIntegrationRecentlyPlayedContentFactory;
@protocol SPTExternalIntegrationContentService, SPTExternalIntegrationTestManagerService, SPTRecentlyPlayedService;

@interface SPTExternalIntegrationRecentlyPlayedContentProviderService : NSObject <SPTCollectionEntityListObserver, SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    SPTExternalIntegrationRecentlyPlayedContentFactory *_contentFactory;
    NSMutableArray *_completionHandlers;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) SPTExternalIntegrationRecentlyPlayedContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
- (void).cxx_destruct;
- (void)entityList:(id)arg1 didFailWithError:(id)arg2;
- (void)entityListDidReload:(id)arg1;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

