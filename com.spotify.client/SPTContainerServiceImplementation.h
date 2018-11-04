//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContainerService.h"

@class MetaViewController, NSString, SPTAllocationContext, SPTNavigationManager, SPTPageRegistryImplementation, SpotifyAppDelegate;

@interface SPTContainerServiceImplementation : NSObject <SPTContainerService>
{
    SpotifyAppDelegate *_appDelegate;
    id <SPTContainerUIService> _containerUIService;
    id <SPTCoreService> _coreService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTPageRegistryImplementation *_pageRegistry;
    id <SPTStateController> _stateController;
    MetaViewController *_metaViewController;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    SPTNavigationManager *_navigationManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(retain, nonatomic) MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTStateController> stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) SPTPageRegistryImplementation *pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak SpotifyAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void).cxx_destruct;
- (id)provideKeychainManager;
- (CDUnknownBlockType)provideContainerLogoutHandler;
- (id)providePageRegistry;
- (id)provideStartupTracer;
- (id)provideStateController;
- (id)provideAppLogModel;
- (id)provideDebugLogService;
- (id)provideLogCenter;
- (id)provideUICompletionNotifier;
- (id)provideNavigationRouter;
- (id)provideNavigationManager;
- (id)provideMetaViewController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
