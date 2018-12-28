//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPYTabbedHeaderViewDataSource-Protocol.h"
#import "GPYTabbedHeaderViewDelegate-Protocol.h"
#import "GPYTransitioning-Protocol.h"

@class GPYStyle, GPYTabbedHeaderView, GPYTabbedHeroView, NSMutableDictionary, NSString, NSTimer, UIScrollView;
@protocol GPYTabbedHeaderControllerDataSource, GPYTabbedHeaderControllerDelegate;

@interface GPYTabbedHeaderController : NSObject <GPYTabbedHeaderViewDataSource, GPYTabbedHeaderViewDelegate, GPYTransitioning>
{
    UIScrollView *_observedScrollView;
    struct CGAffineTransform _heroTransform;
    struct CGAffineTransform _transitionHeaderTransform;
    NSMutableDictionary *_indexToTabDataMap;
    long long _heroImageMode;
    GPYStyle *_style;
    long long _heroImageCookie;
    long long _heroImageLastTab;
    _Bool _heroImageRevealTimedOut;
    NSTimer *_heroLoadTimer;
    NSTimer *_heroRotationtimer;
    NSTimer *_heroTintRevealTimer;
    _Bool _appIsActive;
    _Bool _viewsAreVisible;
    _Bool _isPanning;
    long long _interactiveTabPanDirection;
    long long _headerType;
    long long _headerOptions;
    id <GPYTabbedHeaderControllerDataSource> _dataSource;
    id <GPYTabbedHeaderControllerDelegate> _delegate;
    GPYTabbedHeaderView *_headerView;
    GPYTabbedHeroView *_heroView;
    long long _selectedTabIndex;
}

@property(readonly, nonatomic) long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(readonly, nonatomic) GPYTabbedHeroView *heroView; // @synthesize heroView=_heroView;
@property(readonly, nonatomic) GPYTabbedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <GPYTabbedHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GPYTabbedHeaderControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long headerOptions; // @synthesize headerOptions=_headerOptions;
@property(readonly, nonatomic) long long headerType; // @synthesize headerType=_headerType;
- (void).cxx_destruct;
- (void)resumeRotationIfNeeded;
- (void)pauseRotation;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)heroViewTransformIsVisible:(struct CGAffineTransform)arg1;
- (_Bool)heroViewIsVisible;
- (struct CGPoint)heroViewIconCenterPoint;
- (void)tintRevealTimerFired:(id)arg1;
- (void)rotationTimerFired:(id)arg1;
- (void)loadTimerFired:(id)arg1;
- (void)startTintRevealTimer;
- (void)startRotationTimer;
- (void)startLoadTimer;
- (void)cancelLoadTimer;
- (void)cancelAllTimers;
- (CDUnknownBlockType)imageConversionForTabIndex:(long long)arg1;
- (_Bool)shouldTintImagesAtTabIndex:(long long)arg1;
- (CDUnknownBlockType)imageCallbackWithConversion:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)transitionTabHeroImageForTabIndex:(long long)arg1 originPoint:(struct CGPoint)arg2 duration:(double)arg3 options:(unsigned long long)arg4;
- (void)reloadSingleHeroImageIfNecessary;
- (void)updateHeroImageMode;
- (void)reloadHeroImage;
- (void)didSelectTabIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)heroImageKeyForIndex:(long long)arg1 increment:(_Bool)arg2;
- (id)heroImageKeyForIndex:(long long)arg1;
- (void)incrementHeroImageKeyForIndex:(long long)arg1;
- (id)tabStyleForIndex:(long long)arg1;
- (id)tabDataForIndex:(long long)arg1;
- (void)updateHeroViewTransform;
- (void)stopObservingScrollView;
- (void)startObservingScrollView:(id)arg1;
- (void)updateHeroViewPlacement;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)endInteractiveTabPanWithRelativeOffset:(struct CGPoint)arg1;
- (void)interactiveTabPanRelativeOffsetDidChange:(struct CGPoint)arg1;
- (void)beginInteractiveTabPanWithRelativeOffset:(struct CGPoint)arg1;
- (void)viewsWillDisappear;
- (void)viewsWillAppear;
- (void)setPrimaryScrollView:(id)arg1;
- (void)updateHeroImageTintColor:(id)arg1 forTabAtIndex:(long long)arg2 fromPoint:(struct CGPoint)arg3;
- (void)reloadTabDataAtIndex:(long long)arg1;
- (void)reloadHeroData;
- (void)reloadData;
- (void)selectTabAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)transition:(id)arg1 didSetHeaderViewTransform:(struct CGAffineTransform)arg2;
- (void)transition:(id)arg1 didRemoveTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 willRemoveTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 didAddTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 willAddTransitioningView:(id)arg2 forKey:(id)arg3;
- (_Bool)transition:(id)arg1 shouldReparentTransitioningView:(id)arg2 forKey:(id)arg3;
- (id)outgoingTransitioningViewForKey:(id)arg1 transition:(id)arg2;
- (id)outgoingTransitioningViewKeysForTransition:(id)arg1;
- (id)incomingTransitioningViewLayoutForKey:(id)arg1 transition:(id)arg2 transitioningView:(id)arg3 withContainerBounds:(struct CGRect)arg4;
- (id)incomingTransitioningViewKeysForTransition:(id)arg1;
- (void)tabbedHeaderView:(id)arg1 didSelectTabAtIndex:(long long)arg2;
- (id)tabbedHeaderViewHeroContent:(id)arg1;
- (id)tabbedHeaderView:(id)arg1 titleForIndex:(long long)arg2;
- (long long)numberOfTabsForTabbedHeaderView:(id)arg1;
- (void)dealloc;
- (id)initWithHeaderType:(long long)arg1 options:(long long)arg2 style:(id)arg3 delegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

