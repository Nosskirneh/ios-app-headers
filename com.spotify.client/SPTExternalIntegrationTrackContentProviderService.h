//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationContentProvider-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationTrackContentFactory;
@protocol SPTEntityService, SPTExternalIntegrationContentService, SPTSessionService;

@interface SPTExternalIntegrationTrackContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTSessionService> _sessionService;
    id <SPTEntityService> _entityService;
    SPTExternalIntegrationTrackContentFactory *_contentFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTExternalIntegrationTrackContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
- (void).cxx_destruct;
- (id)createPlaceholderContentItemForURI:(id)arg1;
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

