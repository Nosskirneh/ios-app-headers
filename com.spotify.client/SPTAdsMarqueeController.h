//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistryObserver-Protocol.h"
#import "SPTAdsMarqueContentViewControllerDelegate-Protocol.h"
#import "SPTNavigationManagerDelegate-Protocol.h"
#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTSlateViewDataSource-Protocol.h"
#import "SPTSlateWireframeCustomPresentationDelegate-Protocol.h"

@class NSString, NSURL, SPTAdsMarqueContentViewController, SPTAdsMarqueeContextMenuFactory, SPTAdsMarqueeContextMenuTransition, SPTAdsMarqueeContextMenuView, SPTAdsMarqueeContextMenuViewController, SPTNavigationManager, SPTProgressView, SPTTheme, UIImage;
@protocol GLUEImageLoader, SPTAdsBaseCosmosBridge, SPTAdsBaseMarqueeEntity, SPTAdsBaseRegistry, SPTInAppMessagePresentationMonitor, SPTLinkDispatcher, SPTLogCenter, SPTProductState, SPTSlate, SPTSlateBuilderProvider, SPTSlateManager, SPTUIPresentationService, SPTWebViewFactory;

@interface SPTAdsMarqueeController : NSObject <SPTAdsBaseRegistryObserver, SPTNavigationManagerDelegate, SPTSlateDataSource, SPTSlateDelegate, SPTSlateViewDataSource, SPTSlateWireframeCustomPresentationDelegate, SPTAdsMarqueContentViewControllerDelegate>
{
    _Bool _shouldNavigateToAlbum;
    _Bool _shouldAnimateSlate;
    id <SPTAdsBaseRegistry> _registry;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <GLUEImageLoader> _imageLoader;
    SPTTheme *_theme;
    SPTNavigationManager *_navigationManagager;
    SPTAdsMarqueeContextMenuFactory *_contextMenuFactory;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlateManager> _slateManager;
    id <SPTWebViewFactory> _webViewFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTInAppMessagePresentationMonitor> _inAppMessagePresentationMonitor;
    id <SPTUIPresentationService> _presentationService;
    SPTAdsMarqueeContextMenuTransition *_transition;
    SPTAdsMarqueContentViewController *_marqueeContentViewController;
    SPTAdsMarqueeContextMenuViewController *_primaryMarqueeContextMenuController;
    SPTAdsMarqueeContextMenuViewController *_secondaryMarqueeContextMenuController;
    SPTAdsMarqueeContextMenuView *_primaryContextMenu;
    SPTAdsMarqueeContextMenuView *_secondaryContextMenu;
    id <SPTAdsBaseMarqueeEntity> _adEntity;
    id <SPTSlate> _slate;
    UIImage *_albumImage;
    id <SPTLogCenter> _logCenter;
    SPTProgressView *_progressView;
    NSURL *_currentContextURL;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) _Bool shouldAnimateSlate; // @synthesize shouldAnimateSlate=_shouldAnimateSlate;
@property(nonatomic) _Bool shouldNavigateToAlbum; // @synthesize shouldNavigateToAlbum=_shouldNavigateToAlbum;
@property(retain, nonatomic) NSURL *currentContextURL; // @synthesize currentContextURL=_currentContextURL;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) UIImage *albumImage; // @synthesize albumImage=_albumImage;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) id <SPTAdsBaseMarqueeEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) SPTAdsMarqueeContextMenuView *secondaryContextMenu; // @synthesize secondaryContextMenu=_secondaryContextMenu;
@property(retain, nonatomic) SPTAdsMarqueeContextMenuView *primaryContextMenu; // @synthesize primaryContextMenu=_primaryContextMenu;
@property(retain, nonatomic) SPTAdsMarqueeContextMenuViewController *secondaryMarqueeContextMenuController; // @synthesize secondaryMarqueeContextMenuController=_secondaryMarqueeContextMenuController;
@property(retain, nonatomic) SPTAdsMarqueeContextMenuViewController *primaryMarqueeContextMenuController; // @synthesize primaryMarqueeContextMenuController=_primaryMarqueeContextMenuController;
@property(retain, nonatomic) SPTAdsMarqueContentViewController *marqueeContentViewController; // @synthesize marqueeContentViewController=_marqueeContentViewController;
@property(readonly, nonatomic) SPTAdsMarqueeContextMenuTransition *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) id <SPTInAppMessagePresentationMonitor> inAppMessagePresentationMonitor; // @synthesize inAppMessagePresentationMonitor=_inAppMessagePresentationMonitor;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) SPTAdsMarqueeContextMenuFactory *contextMenuFactory; // @synthesize contextMenuFactory=_contextMenuFactory;
@property(readonly, nonatomic) SPTNavigationManager *navigationManagager; // @synthesize navigationManagager=_navigationManagager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) id <SPTAdsBaseRegistry> registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)loadImageURL:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)secondaryActionsForContextMenu;
- (id)primaryActionsForContextMenu;
- (void)performOptOutAction;
- (void)showConfirmationWithMessage:(id)arg1;
- (_Bool)isIPad;
- (id)randomizedArrayFromArray:(id)arg1;
- (void)didTapInformationLabelText:(id)arg1 withSender:(id)arg2;
- (void)didTapAlbumActionButton:(id)arg1;
- (void)dismissSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2;
- (id)provideSlate;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (double)preferredHorizontalMargin;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (void)slateDidDismiss:(id)arg1;
- (void)slateSwiped:(id)arg1;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (_Bool)isCurrentContextURLHome;
- (void)forcePresentMarquee;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 cosmosBridge:(id)arg2 imageLoader:(id)arg3 slateBuilderProvider:(id)arg4 slateManager:(id)arg5 contextMenuFactory:(id)arg6 presentationService:(id)arg7 navigationManager:(id)arg8 linkDispatcher:(id)arg9 inAppMessagePresentationMonitor:(id)arg10 logCenter:(id)arg11 theme:(id)arg12 productState:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

