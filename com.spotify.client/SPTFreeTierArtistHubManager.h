//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, HUBComponentRegistry, SPTFreeTierArtistBarButtonFactory, SPTFreeTierArtistCommandHandlerFactory, SPTFreeTierArtistContentOperationFactory, SPTNetworkConnectivityController;
@protocol GLUETheme, SPTBarButtonItemManager, SPTHubsRendererFactory, SPTHugsFactory, SPTPermissionsOnDemandState, SPTShelves, SPTVisualRefreshIntegrationService;

@interface SPTFreeTierArtistHubManager : NSObject
{
    HUBComponentRegistry *_componentRegistry;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierArtistContentOperationFactory *_contentOperationFactory;
    SPTFreeTierArtistCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierArtistBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    id <SPTPermissionsOnDemandState> _onDemandState;
    HUBComponentDefaults *_componentDefaults;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTShelves> _shelves;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <SPTPermissionsOnDemandState> onDemandState; // @synthesize onDemandState=_onDemandState;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierArtistBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierArtistCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierArtistContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)createViewModelLoaderForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createReleasesViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createArtistViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4 commandHandlerFactory:(id)arg5 barButtonFactory:(id)arg6 glueTheme:(id)arg7 artistHubComponentsFactory:(id)arg8 onDemandState:(id)arg9 barButtonItemManager:(id)arg10 shelves:(id)arg11 visualRefreshIntegrationService:(id)arg12 networkConnectivityController:(id)arg13;

@end

