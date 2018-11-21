//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, SPTArtistHubComponentModelURIResolver, SPTArtistLogger, SPTNavigationManager;
@protocol EXP_HUBComponentLayoutManager, EXP_HUBIconImageResolver, EXP_HUBImageLoaderFactory, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubContentOperationFactory, EXP_SPTHubsRendererFactory, FollowFeature, GLUETheme, SPContextMenuActionsFactory, SPTArtistHubComponentsFactory, SPTCollectionPlatformTestManager, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTExplicitContentHubCommandHandlerFactory, SPTExplicitContentHubContentOperationFactory, SPTFreeTierTestManager, SPTHubRemoteContentURLResolver, SPTHugsFactory, SPTImageLoaderFactory, SPTModalPresentationController, SPTOfflineModeState, SPTProductState, SPTShelves;

@interface SPTArtistHubManager : NSObject
{
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <FollowFeature> _followFeature;
    id <SPTHubRemoteContentURLResolver> _remoteContentURLResolver;
    id <GLUETheme> _GLUETheme;
    id <SPTShelves> _shelves;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    id <EXP_HUBImageLoaderFactory> _hubImageLoaderFactory;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    id <EXP_SPTHubContentOperationFactory> _contentOperationFactory;
    id <SPTArtistHubComponentsFactory> _artistHubComponentsFactory;
    id <SPTProductState> _productState;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTArtistLogger *_logger;
    SPTNavigationManager *_navigationManager;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTExplicitContentHubCommandHandlerFactory> _explicitContentHubCommandHandlerFactory;
    id <SPTExplicitContentHubContentOperationFactory> _explicitContentHubContentOperationFactory;
    SPTArtistHubComponentModelURIResolver *_componentModelURIResolver;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(readonly, nonatomic) __weak id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) SPTArtistHubComponentModelURIResolver *componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, nonatomic) id <SPTExplicitContentHubContentOperationFactory> explicitContentHubContentOperationFactory; // @synthesize explicitContentHubContentOperationFactory=_explicitContentHubContentOperationFactory;
@property(readonly, nonatomic) id <SPTExplicitContentHubCommandHandlerFactory> explicitContentHubCommandHandlerFactory; // @synthesize explicitContentHubCommandHandlerFactory=_explicitContentHubCommandHandlerFactory;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) SPTArtistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTArtistHubComponentsFactory> artistHubComponentsFactory; // @synthesize artistHubComponentsFactory=_artistHubComponentsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBImageLoaderFactory> hubImageLoaderFactory; // @synthesize hubImageLoaderFactory=_hubImageLoaderFactory;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) id <SPTHubRemoteContentURLResolver> remoteContentURLResolver; // @synthesize remoteContentURLResolver=_remoteContentURLResolver;
@property(readonly, nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
- (void).cxx_destruct;
- (void)addPlaybackRestrictionsToCommandHandler:(id)arg1 toDictionary:(id)arg2;
- (id)provideCommandDispatcherWithViewURI:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3 artistCommandRegistry:(id)arg4;
- (void)unregisterComponents;
- (void)registerComponents;
- (id)provideHubViewControllerForURL:(id)arg1 sourceIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 artistHubComponentsFactory:(id)arg3 followFeature:(id)arg4 remoteContentURLResolver:(id)arg5 GLUETheme:(id)arg6 shelves:(id)arg7 contextMenuPresenterFactory:(id)arg8 contextMenuActionsFactory:(id)arg9 contextMenuOptionsFactory:(id)arg10 productState:(id)arg11 imageLoaderFactory:(id)arg12 logger:(id)arg13 navigationManager:(id)arg14 modalPresentationController:(id)arg15 offlineModeState:(id)arg16 explicitContentHubCommandHandlerFactory:(id)arg17 explicitContentHubContentOperationFactory:(id)arg18 freeTierTestManager:(id)arg19 collectionTestManager:(id)arg20;

@end

