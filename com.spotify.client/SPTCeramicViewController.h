//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPSessionObserver-Protocol.h"
#import "SPTCeramicCollectionViewCellLoggingDelegate-Protocol.h"
#import "SPTCeramicRequestDelegate-Protocol.h"
#import "SPTHubContentRenderingViewController-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEPressedViewAnimator, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSValue, SPForegroundObserver, SPSession, SPTCeramicBackgroundViewDecorator, SPTCeramicCellDecorator, SPTCeramicHeaderDecorator, SPTCeramicVerticalCollectionViewDataSource, SPTCeramicViewModel, SPTInfoView, SPTProgressView, SPTTheme, UICollectionView, UIScrollView;
@protocol SPTCeramicCollectionViewFooter, SPTCeramicRequest, SPTCeramicViewControllerDelegate, SPTCeramicViewControllerViewProvider, SPTCeramicViewDecorator, SPTImageLoader, SPTLinkDispatcher, SPTLogCenter, SPTShelves;

@interface SPTCeramicViewController : UIViewController <SPTHubContentRenderingViewController, UIGestureRecognizerDelegate, SPSessionObserver, SPTScrollToTopViewController, SPTCeramicCollectionViewCellLoggingDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDataSource, UITableViewDelegate, SPViewController, SPTImageLoaderDelegate, SPTCeramicRequestDelegate, UICollectionViewDelegateFlowLayout, SPContentInsetViewController, SPForegroundObserverDelegate>
{
    _Bool _presentedInsideVerticalScroll;
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _shouldLogItemAppearanceEvents;
    _Bool _shouldLogBlockAppearanceEvents;
    _Bool _previousOnlineStateWasOnline;
    _Bool _visible;
    _Bool _shouldReloadRequestWhenReturningToForeground;
    id <SPTCeramicRequest> _spaceOperation;
    id <SPTCeramicViewControllerDelegate> _delegate;
    id <SPTCeramicViewControllerViewProvider> _viewProvider;
    UICollectionView *_verticalCollectionView;
    NSValue *_tableViewStaticContentOffsetValue;
    NSString *_featureId;
    NSMutableArray *_blockViews;
    NSString *_localizedFeatureName;
    NSMutableDictionary *_footerViewGestureRecognizers;
    id <SPTCeramicCollectionViewFooter> _highlightedFooterView;
    NSMutableDictionary *_itemOverlayViews;
    SPTCeramicCellDecorator *_cellDecorator;
    SPTCeramicHeaderDecorator *_headerDecorator;
    SPTCeramicBackgroundViewDecorator *_backgroundViewDecorator;
    GLUEPressedViewAnimator *_selectedCardAnimator;
    id <SPTCeramicViewDecorator> _viewDecorator;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCeramicViewModel *_viewModel;
    SPTCeramicVerticalCollectionViewDataSource *_verticalCollectionViewDataSource;
    id <SPTShelves> _shelves;
    SPForegroundObserver *_foregroundObserver;
    id <SPTImageLoader> _imageLoader;
    SPSession *_session;
    SPTInfoView *_infoView;
    SPTProgressView *_progressView;
    SPTTheme *_theme;
    id <SPTLogCenter> _logCenter;
    struct UIEdgeInsets _insetsForStickyBar;
    struct CGRect _externalScrollVisibleRect;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(nonatomic) _Bool shouldReloadRequestWhenReturningToForeground; // @synthesize shouldReloadRequestWhenReturningToForeground=_shouldReloadRequestWhenReturningToForeground;
@property(retain, nonatomic) SPTCeramicVerticalCollectionViewDataSource *verticalCollectionViewDataSource; // @synthesize verticalCollectionViewDataSource=_verticalCollectionViewDataSource;
@property(retain, nonatomic) SPTCeramicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTCeramicViewDecorator> viewDecorator; // @synthesize viewDecorator=_viewDecorator;
@property(retain, nonatomic) GLUEPressedViewAnimator *selectedCardAnimator; // @synthesize selectedCardAnimator=_selectedCardAnimator;
@property(retain, nonatomic) SPTCeramicBackgroundViewDecorator *backgroundViewDecorator; // @synthesize backgroundViewDecorator=_backgroundViewDecorator;
@property(retain, nonatomic) SPTCeramicHeaderDecorator *headerDecorator; // @synthesize headerDecorator=_headerDecorator;
@property(readonly, nonatomic) SPTCeramicCellDecorator *cellDecorator; // @synthesize cellDecorator=_cellDecorator;
@property(readonly, nonatomic) NSMutableDictionary *itemOverlayViews; // @synthesize itemOverlayViews=_itemOverlayViews;
@property(nonatomic) _Bool previousOnlineStateWasOnline; // @synthesize previousOnlineStateWasOnline=_previousOnlineStateWasOnline;
@property(retain, nonatomic) id <SPTCeramicCollectionViewFooter> highlightedFooterView; // @synthesize highlightedFooterView=_highlightedFooterView;
@property(readonly, nonatomic) NSMutableDictionary *footerViewGestureRecognizers; // @synthesize footerViewGestureRecognizers=_footerViewGestureRecognizers;
@property(readonly, copy, nonatomic) NSString *localizedFeatureName; // @synthesize localizedFeatureName=_localizedFeatureName;
@property(retain, nonatomic) NSMutableArray *blockViews; // @synthesize blockViews=_blockViews;
@property(copy, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) NSValue *tableViewStaticContentOffsetValue; // @synthesize tableViewStaticContentOffsetValue=_tableViewStaticContentOffsetValue;
@property(retain, nonatomic) UICollectionView *verticalCollectionView; // @synthesize verticalCollectionView=_verticalCollectionView;
@property(nonatomic) _Bool shouldLogBlockAppearanceEvents; // @synthesize shouldLogBlockAppearanceEvents=_shouldLogBlockAppearanceEvents;
@property(nonatomic) _Bool shouldLogItemAppearanceEvents; // @synthesize shouldLogItemAppearanceEvents=_shouldLogItemAppearanceEvents;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(nonatomic) __weak id <SPTCeramicViewControllerViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) __weak id <SPTCeramicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPTCeramicRequest> spaceOperation; // @synthesize spaceOperation=_spaceOperation;
@property(nonatomic) struct CGRect externalScrollVisibleRect; // @synthesize externalScrollVisibleRect=_externalScrollVisibleRect;
@property(nonatomic) struct UIEdgeInsets insetsForStickyBar; // @synthesize insetsForStickyBar=_insetsForStickyBar;
@property(nonatomic, getter=isPresentedInsideVerticalScroll) _Bool presentedInsideVerticalScroll; // @synthesize presentedInsideVerticalScroll=_presentedInsideVerticalScroll;
- (void).cxx_destruct;
- (void)spt_scrollToTop;
- (void)logCeramicCellInteractionWithCeramicItem:(id)arg1 indexPath:(id)arg2 cellBlockIndex:(long long)arg3;
- (void)ceramicRequest:(id)arg1 didUpdateBlockAtIndex:(unsigned long long)arg2;
- (void)ceramicRequest:(id)arg1 didLoadWithError:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (void)sessionLoginModeChanged:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)enableFooterViewGestureRecognizers:(_Bool)arg1;
- (void)updateTableViewStaticContentOffsetValue;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic) NSURL *URI;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)insetsForBlockAtIndex:(unsigned long long)arg1;
- (void)configureCell:(id)arg1 cellSize:(struct CGSize)arg2 atCeramicIndexPath:(id)arg3 withItem:(id)arg4 itemOrder:(struct SPTCeramicItemOrder)arg5;
- (id)collectionViewFooterViewFromGestureRecognizer:(id)arg1;
- (void)collectionViewFooterViewTapRecognizerDidRecognize:(id)arg1;
- (void)collectionViewFooterViewHighlightRecognizerDidRecognize:(id)arg1;
- (void)notifyDelegateBlockWillAppearWithIndex:(unsigned long long)arg1;
- (void)notifyDelegateVerticalScrolled;
- (void)notifyDelegateDidLoadSpace:(id)arg1;
- (void)notifyDelegateOfContentSizeChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setSpace:(id)arg1;
- (void)setSpace:(id)arg1 shouldReloadData:(_Bool)arg2;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)loadRequest;
- (void)clearSelection;
- (void)unhighlightSelectedFooter;
- (void)reloadBlockAtIndex:(long long)arg1;
- (void)matchSizeOfViewsToContentSize;
- (void)updateExternalScrollSizeAndInvalidateAllLayouts;
- (void)invalidateLayoutOfBlockViews;
- (void)setAbsoluteRectInVerticalCollectionViewForBlockViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupForegroundObserver;
- (void)setupPropertiesWithOptionsMask:(unsigned long long)arg1;
- (void)setupVerticalCollectionView;
- (void)setupInfoView;
- (void)setupProgressView;
- (void)setupView;
- (void)setupVerticalCells;
- (void)dealloc;
- (id)initWithModelOperation:(id)arg1 imageLoader:(id)arg2 logCenter:(id)arg3 session:(id)arg4 shelves:(id)arg5 theme:(id)arg6 options:(unsigned long long)arg7 localizedFeatureName:(id)arg8 featureId:(id)arg9 viewDecorator:(id)arg10 linkDispatcher:(id)arg11;
- (void)logUserInterfaceMessageWithSectionId:(id)arg1 blockIndex:(unsigned long long)arg2 itemIndex:(unsigned long long)arg3 targetURI:(id)arg4 impressionType:(id)arg5 renderType:(long long)arg6;
- (void)logUserInterfaceInteractionWithSectionId:(id)arg1 blockIndex:(long long)arg2 itemIndex:(long long)arg3 targetURI:(id)arg4 interactionType:(id)arg5 userIntent:(id)arg6;
- (void)logFooterActionForBlock:(id)arg1 withIndexPath:(id)arg2 withActionURL:(id)arg3;
- (void)logLinkFollowingItem:(id)arg1 withIndexPath:(id)arg2 block:(id)arg3;
- (void)logFooterForBlockDidAppear:(id)arg1 withIndexPath:(id)arg2 targetURI:(id)arg3;
- (void)logItemDidAppear:(id)arg1 withIndexPath:(id)arg2 block:(id)arg3;
- (void)logBlockDidAppear:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)logSpaceImpression;
@property(readonly, nonatomic) UIScrollView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

