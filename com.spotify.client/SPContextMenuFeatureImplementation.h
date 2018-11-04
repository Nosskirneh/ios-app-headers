//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPContextMenuFeature.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPContextMenuFeatureImplementation : NSObject <SPTService, SPContextMenuFeature>
{
    id <SPTNetworkService> _networkFeature;
    id <SPTContainerService> _containerService;
    id <SPTScannablesService> _scannablesService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTContributingArtistsService> _contributingArtistService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPContextMenuActionsFactory> _actionsFactory;
    id <SPTContextMenuActionsProvider> _actionsProvider;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPTContextMenuActionsProvider> actionsProvider; // @synthesize actionsProvider=_actionsProvider;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> actionsFactory; // @synthesize actionsFactory=_actionsFactory;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTContributingArtistsService> contributingArtistService; // @synthesize contributingArtistService=_contributingArtistService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
- (void).cxx_destruct;
- (id)provideContextMenuOptionsFactory;
- (id)providePresenterFactory;
- (id)provideViewControllerFactory;
- (id)actions;
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

