//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTNowPlayingContentCellDelegate-Protocol.h"
#import "SPTNowPlayingContentViewModelDelegate-Protocol.h"
#import "SPTThemableView-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SPTNowPlayingContentViewModel, UIScrollView;
@protocol SPTCarouselBackgroundBlurDelegate, SPTImageLoader, SPTImageLoaderFactory, SPTNowPlayingContentViewDataSource, SPTNowPlayingContentViewDelegate, SPTNowPlayingVideoManager, SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingContentView : UIView <SPTThemableView, UIScrollViewDelegate, SPTNowPlayingContentCellDelegate, SPTNowPlayingContentViewModelDelegate>
{
    _Bool _overrideVideoCellAppearance;
    _Bool _visible;
    _Bool _scrollingInteractively;
    _Bool _disallowReloadingCoverArts;
    _Bool _deferImageCallback;
    _Bool _didAttemptScroll;
    _Bool _transitioning;
    _Bool _active;
    _Bool _disableContentAnimation;
    _Bool _isLayingOutSubviews;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingContentViewDelegate> _delegate;
    id <SPTNowPlayingContentViewDataSource> _dataSource;
    UIScrollView *_contentView;
    NSMutableArray *_contentCells;
    long long _firstContentIndexInContent;
    double _contentPageWidth;
    long long _targetDragIndex;
    SPTNowPlayingContentViewModel *_viewModel;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTImageLoader> _imageLoader;
    id <SPTCarouselBackgroundBlurDelegate> _backgroundDelegate;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
    struct UIEdgeInsets _touchInsets;
    struct CGRect _contentUnitFrame;
}

@property(nonatomic) struct CGRect contentUnitFrame; // @synthesize contentUnitFrame=_contentUnitFrame;
@property(nonatomic) _Bool isLayingOutSubviews; // @synthesize isLayingOutSubviews=_isLayingOutSubviews;
@property(nonatomic) _Bool disableContentAnimation; // @synthesize disableContentAnimation=_disableContentAnimation;
@property(readonly, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(readonly, nonatomic) __weak id <SPTCarouselBackgroundBlurDelegate> backgroundDelegate; // @synthesize backgroundDelegate=_backgroundDelegate;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTNowPlayingContentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) _Bool didAttemptScroll; // @synthesize didAttemptScroll=_didAttemptScroll;
@property(nonatomic) _Bool deferImageCallback; // @synthesize deferImageCallback=_deferImageCallback;
@property(nonatomic) long long targetDragIndex; // @synthesize targetDragIndex=_targetDragIndex;
@property(nonatomic) _Bool disallowReloadingCoverArts; // @synthesize disallowReloadingCoverArts=_disallowReloadingCoverArts;
@property(nonatomic) double contentPageWidth; // @synthesize contentPageWidth=_contentPageWidth;
@property(nonatomic) long long firstContentIndexInContent; // @synthesize firstContentIndexInContent=_firstContentIndexInContent;
@property(retain, nonatomic) NSMutableArray *contentCells; // @synthesize contentCells=_contentCells;
@property(nonatomic) _Bool scrollingInteractively; // @synthesize scrollingInteractively=_scrollingInteractively;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool overrideVideoCellAppearance; // @synthesize overrideVideoCellAppearance=_overrideVideoCellAppearance;
@property(nonatomic) __weak id <SPTNowPlayingContentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SPTNowPlayingContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)contentViewModelDidStageContextImageURL:(id)arg1;
- (void)contentViewModelDidChangeLoadingState;
- (void)contentViewModelRequestsAnimation:(unsigned long long)arg1;
- (void)requestedImage:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)nowPlayingContentCellAccessoryViewTouchedUp:(id)arg1;
- (void)nowPlayingContentCellDidDetachVideoSurface:(id)arg1;
- (void)nowPlayingContentCellDidAttachVideoSurface:(id)arg1;
- (void)nowPlayingContentCell:(id)arg1 didChangeContent:(id)arg2;
- (void)updateScrollability;
- (struct CGPoint)currentDraggingTarget;
- (_Bool)tryDragToRelativeIndex:(long long)arg1 fromRelativeIndex:(long long)arg2;
- (void)contentScrollingDidFinishInteractively:(_Bool)arg1 dragging:(_Bool)arg2;
- (void)scrollToRelativePosition:(long long)arg1 fromRelativePosition:(long long)arg2 interactively:(_Bool)arg3 dragging:(_Bool)arg4;
- (void)scrollToCellNumber:(long long)arg1 animated:(_Bool)arg2;
- (void)videoAttachedStateChangedInCell:(id)arg1;
- (void)updateCoverArtsAnimated:(_Bool)arg1 includeVideo:(_Bool)arg2;
- (void)updateStagedContextCoverArtAnimated:(_Bool)arg1;
- (void)updateActivity;
- (void)updateCoverArtForCell:(id)arg1 onRelativePage:(long long)arg2 animated:(_Bool)arg3;
- (void)updateVideoSurfaceEnabledForCell:(id)arg1 onRelativePage:(long long)arg2 animated:(_Bool)arg3;
- (void)updateActivityViewForCell:(id)arg1 onRelativePage:(long long)arg2;
- (void)shiftContents:(long long)arg1;
- (void)relativePageIndexDidChange;
- (double)relativePageIndex;
- (struct CGPoint)contentOffsetForContentIndex:(long long)arg1;
- (void)repositionCellsInContentArea;
- (long long)lastScrollableContentIndex;
- (long long)firstScrollableContentIndex;
- (_Bool)canScrollToRelativePage:(long long)arg1;
- (_Bool)allowCoverArtUpdates;
- (void)attemptDragToLeftIfNeededWithRelativePage:(long long)arg1;
- (void)updateBlurConstituentForRelativePosition:(long long)arg1 toImage:(id)arg2 withURL:(id)arg3;
- (void)reloadBlurContentsWithCenter:(long long)arg1;
- (void)willScrollFromRelativePage:(long long)arg1 toRelativePage:(long long)arg2;
- (void)refreshCellLayers;
- (void)didScrollToRelativePage:(long long)arg1 interactively:(_Bool)arg2 dragging:(_Bool)arg3;
- (void)didLoadStagedContextImageURL:(id)arg1 image:(id)arg2;
- (void)reloadCellsAppearance;
- (void)setAppearanceForCell:(id)arg1 isVideo:(_Bool)arg2 trackBelongsToContext:(_Bool)arg3;
- (id)createContentCell;
- (id)contentForStagedContextCell:(id)arg1 cellSize:(struct CGSize)arg2;
- (id)contentForCell:(id)arg1 cellSize:(struct CGSize)arg2 relativePage:(long long)arg3;
- (void)updateAppearTransition:(_Bool)arg1 inProgress:(_Bool)arg2;
- (void)applyThemeLayout;
- (void)updateContentUnitFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)cellAtRelativePage:(long long)arg1;
- (void)scrollToRelativePage:(long long)arg1 interactively:(_Bool)arg2;
- (void)createInitialCells;
- (void)reloadDataAnimated:(_Bool)arg1 includeVideo:(_Bool)arg2;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)addFixedConstraints;
- (_Bool)hasExternalContentAtRelativePage:(long long)arg1;
@property(readonly, nonatomic) _Bool currentPageBelongsToContext;
@property(readonly, nonatomic) _Bool hasFullscreenVideoAtCurrentPage;
@property(readonly, nonatomic) _Bool hasVideoAtCurrentPage;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2 imageLoaderFactory:(id)arg3 backgroundDelegate:(id)arg4 nowPlayingVideoManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

