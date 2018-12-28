//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCFlexibleHeaderSafeAreaDelegate-Protocol.h"
#import "MDCStatusBarShifterDelegate-Protocol.h"

@class CADisplayLink, CALayer, MDCFlexibleHeaderScrollViewInfo, MDCFlexibleHeaderTopSafeArea, MDCStatusBarShifter, NSHashTable, NSMapTable, NSString, UIScrollView, UIViewController;
@protocol MDCFlexibleHeaderViewDelegate;

@interface MDCFlexibleHeaderView : UIView <MDCStatusBarShifterDelegate, MDCFlexibleHeaderSafeAreaDelegate>
{
    NSHashTable *_forwardingViews;
    NSHashTable *_viewsToHideWhenShifted;
    NSMapTable *_trackedScrollViews;
    MDCFlexibleHeaderScrollViewInfo *_trackingInfo;
    _Bool _wantsToBeHidden;
    _Bool _hasExplicitlySetMinHeight;
    _Bool _hasExplicitlySetMaxHeight;
    _Bool _shiftAccumulatorLastContentOffsetIsValid;
    double _shiftAccumulator;
    struct CGPoint _shiftAccumulatorLastContentOffset;
    double _shiftAccumulatorDeltaY;
    CADisplayLink *_shiftAccumulatorDisplayLink;
    _Bool _interfaceOrientationIsChanging;
    _Bool _contentInsetsAreChanging;
    _Bool _didDecelerate;
    _Bool _isChangingStatusBarVisibility;
    _Bool _wasStatusBarHiddenIsValid;
    _Bool _wasStatusBarHidden;
    UIView *_topSafeAreaGuide;
    MDCStatusBarShifter *_statusBarShifter;
    CALayer *_defaultShadowLayer;
    CALayer *_customShadowLayer;
    CDUnknownBlockType _shadowIntensityChangeBlock;
    Class _wkWebViewClass;
    MDCFlexibleHeaderTopSafeArea *_topSafeArea;
    _Bool _trackingScrollViewIsBeingScrubbed;
    _Bool _canOverExtend;
    _Bool _inFrontOfInfiniteContent;
    _Bool _sharedWithManyScrollViews;
    _Bool _minMaxHeightIncludesSafeArea;
    _Bool _observesTrackingScrollViewScrollEvents;
    _Bool _disableContentInsetAdjustmentWhenContentInsetAdjustmentBehaviorIsNever;
    _Bool _canAlwaysExpandToMaximumHeight;
    _Bool _useAdditionalSafeAreaInsetsForWebKitScrollViews;
    _Bool _contentIsTranslucent;
    _Bool _statusBarHintCanOverlapHeader;
    float _visibleShadowOpacity;
    long long _scrollPhase;
    double _scrollPhaseValue;
    double _scrollPhasePercentage;
    UIScrollView *_trackingScrollView;
    double _minimumHeight;
    double _maximumHeight;
    CALayer *_shadowLayer;
    id <MDCFlexibleHeaderViewDelegate> _delegate;
    double _shadowIntensity;
    long long _shiftBehavior;
    long long _headerContentImportance;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool statusBarHintCanOverlapHeader; // @synthesize statusBarHintCanOverlapHeader=_statusBarHintCanOverlapHeader;
@property(nonatomic) _Bool contentIsTranslucent; // @synthesize contentIsTranslucent=_contentIsTranslucent;
@property(nonatomic) long long headerContentImportance; // @synthesize headerContentImportance=_headerContentImportance;
@property(nonatomic) long long shiftBehavior; // @synthesize shiftBehavior=_shiftBehavior;
@property(nonatomic) _Bool useAdditionalSafeAreaInsetsForWebKitScrollViews; // @synthesize useAdditionalSafeAreaInsetsForWebKitScrollViews=_useAdditionalSafeAreaInsetsForWebKitScrollViews;
@property(nonatomic) _Bool canAlwaysExpandToMaximumHeight; // @synthesize canAlwaysExpandToMaximumHeight=_canAlwaysExpandToMaximumHeight;
@property(readonly, nonatomic) double shadowIntensity; // @synthesize shadowIntensity=_shadowIntensity;
@property(nonatomic) __weak id <MDCFlexibleHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableContentInsetAdjustmentWhenContentInsetAdjustmentBehaviorIsNever; // @synthesize disableContentInsetAdjustmentWhenContentInsetAdjustmentBehaviorIsNever=_disableContentInsetAdjustmentWhenContentInsetAdjustmentBehaviorIsNever;
@property(nonatomic) _Bool observesTrackingScrollViewScrollEvents; // @synthesize observesTrackingScrollViewScrollEvents=_observesTrackingScrollViewScrollEvents;
@property(nonatomic) _Bool minMaxHeightIncludesSafeArea; // @synthesize minMaxHeightIncludesSafeArea=_minMaxHeightIncludesSafeArea;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) float visibleShadowOpacity; // @synthesize visibleShadowOpacity=_visibleShadowOpacity;
@property(nonatomic) _Bool sharedWithManyScrollViews; // @synthesize sharedWithManyScrollViews=_sharedWithManyScrollViews;
@property(nonatomic, getter=isInFrontOfInfiniteContent) _Bool inFrontOfInfiniteContent; // @synthesize inFrontOfInfiniteContent=_inFrontOfInfiniteContent;
@property(nonatomic) _Bool canOverExtend; // @synthesize canOverExtend=_canOverExtend;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
@property(readonly, nonatomic) double scrollPhasePercentage; // @synthesize scrollPhasePercentage=_scrollPhasePercentage;
@property(readonly, nonatomic) double scrollPhaseValue; // @synthesize scrollPhaseValue=_scrollPhaseValue;
@property(readonly, nonatomic) long long scrollPhase; // @synthesize scrollPhase=_scrollPhase;
@property(nonatomic) _Bool trackingScrollViewIsBeingScrubbed; // @synthesize trackingScrollViewIsBeingScrubbed=_trackingScrollViewIsBeingScrubbed;
- (void).cxx_destruct;
- (void)shiftHeaderOffScreenAnimated:(_Bool)arg1;
- (void)shiftHeaderOnScreenAnimated:(_Bool)arg1;
- (void)trackingScrollWillChangeToScrollView:(id)arg1;
- (_Bool)trackingScrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (double)computedMaximumHeight;
- (double)computedMinimumHeight;
- (void)stopForwardingTouchEventsForView:(id)arg1;
- (void)forwardTouchEventsForView:(id)arg1;
- (void)stopHidingViewWhenShifted:(id)arg1;
- (void)hideViewWhenShifted:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)interfaceOrientationDidChange;
- (void)interfaceOrientationIsChanging;
- (void)interfaceOrientationWillChange;
- (void)changeContentInsets:(CDUnknownBlockType)arg1;
@property(nonatomic) long long behavior;
- (_Bool)hidesStatusBarWhenCollapsed;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden;
- (void)trackingScrollViewDidEndDecelerating;
- (void)trackingScrollViewDidEndDraggingWillDecelerate:(_Bool)arg1;
- (void)trackingScrollViewDidScroll;
- (void)statusBarShifter:(id)arg1 wantsSnapshotViewAdded:(id)arg2;
- (void)statusBarShifterNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)fhv_matchHeightWithScrollView:(id)arg1;
- (void)fhv_stopObservingContentOffset;
- (void)fhv_startObservingContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)fhv_contentOffsetDidChange;
- (void)fhv_commitAccumulatorToFrame;
- (double)fhv_anchorLength;
- (void)fhv_updateLayout;
- (double)fhv_accumulatorMin;
- (void)fhv_accumulatorDidChange;
- (void)fhv_shiftAccumulatorDisplayLinkDidFire:(id)arg1;
- (void)fhv_stopDisplayLink;
- (void)fhv_startDisplayLink;
- (void)fhv_recalculatePhase;
- (_Bool)fhv_isOverExtendingBottom;
- (_Bool)fhv_isDetachedFromTopOfContent;
- (_Bool)fhv_isPartiallyExpanded;
- (_Bool)fhv_isPartiallyShifted;
- (_Bool)fhv_canShiftOffscreen;
- (_Bool)fhv_shouldCollapseToStatusBar;
- (_Bool)fhv_shouldAllowShifting;
- (double)fhv_accumulatorMax;
- (double)fhv_projectedHeaderBottomEdge;
- (double)fhv_contentOffsetMaxY;
- (double)fhv_contentOffsetWithoutInjectedTopInset;
- (double)fhv_rawTopContentInset;
- (struct CGPoint)fhv_boundedContentOffset;
- (void)fhv_updateShadowPath;
- (double)fhv_enforceInsetsForScrollView:(id)arg1;
- (double)fhv_existingContentInsetAdjustmentForScrollView:(id)arg1;
- (void)fhv_removeInsetsFromScrollView:(id)arg1;
- (void)fhv_adjustTrackingScrollViewInsets;
- (void)fhv_setContentOffset:(struct CGPoint)arg1;
- (double)flexibleHeaderSafeAreaDeviceTopSafeAreaInset:(id)arg1;
- (_Bool)flexibleHeaderSafeAreaIsStatusBarShifted:(id)arg1;
- (void)flexibleHeaderSafeAreaTopSafeAreaInsetDidChange:(id)arg1;
- (void)topSafeAreaInsetDidChange;
@property(nonatomic) __weak UIViewController *topSafeAreaSourceViewController; // @dynamic topSafeAreaSourceViewController;
@property(nonatomic) _Bool inferTopSafeAreaInsetFromViewController; // @dynamic inferTopSafeAreaInsetFromViewController;
- (_Bool)trackingScrollViewIsWebKit;
@property(readonly, nonatomic) double topSafeAreaGuideHeight;
@property(readonly, nonatomic) id topSafeAreaGuide;
- (void)safeAreaInsetsDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setShadowLayer:(id)arg1 intensityDidChangeBlock:(CDUnknownBlockType)arg2;
- (void)fhv_setShadowLayer:(id)arg1 intensityDidChangeBlock:(CDUnknownBlockType)arg2;
- (void)commonMDCFlexibleHeaderViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setShadowEnabled:(_Bool)arg1;
- (void)setHeaderViewState:(long long)arg1;
- (long long)headerViewState;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)updateNavigationStyle:(id)arg1;
- (void)updateBarButtonItem:(id)arg1 withNavigationItem:(id)arg2 forKeyPath:(id)arg3;
- (void)updateViewWithNavigationItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

