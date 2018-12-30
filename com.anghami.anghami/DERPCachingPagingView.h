//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString;
@protocol DERPCachingPagingViewDelegate;

@interface DERPCachingPagingView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _currentCenterIndex;
    long long _lastOffsetX;
    NSMutableArray *_cachedPages;
    unsigned long long _animationTargetIndex;
    long long _animatingDirection;
    unsigned long long _animatingPagesLeft;
    _Bool _zoomDestination;
    _Bool _shouldSendChangedPagesNotification;
    _Bool _shouldReleayoutAtDragEnd;
    _Bool _contentSizeIsChanging;
    _Bool _didLayoutSubviews;
    _Bool _scrollingLocked;
    _Bool _zoomCovers;
    _Bool _animating;
    _Bool _isDraggingOrDecelerating;
    _Bool _resetBackScrolling;
    _Bool _preventBackScrolling;
    NSArray *_currentPages;
    id <DERPCachingPagingViewDelegate> _pagingDelegate;
    NSNumber *_selectedPageIndex;
}

@property _Bool preventBackScrolling; // @synthesize preventBackScrolling=_preventBackScrolling;
@property _Bool resetBackScrolling; // @synthesize resetBackScrolling=_resetBackScrolling;
@property(nonatomic) _Bool isDraggingOrDecelerating; // @synthesize isDraggingOrDecelerating=_isDraggingOrDecelerating;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool zoomCovers; // @synthesize zoomCovers=_zoomCovers;
@property(nonatomic) _Bool scrollingLocked; // @synthesize scrollingLocked=_scrollingLocked;
@property(retain, nonatomic) NSNumber *selectedPageIndex; // @synthesize selectedPageIndex=_selectedPageIndex;
@property(nonatomic) __weak id <DERPCachingPagingViewDelegate> pagingDelegate; // @synthesize pagingDelegate=_pagingDelegate;
@property(retain, nonatomic) NSArray *currentPages; // @synthesize currentPages=_currentPages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)adjustedIndexForIndex:(long long)arg1;
- (id)renderIndicesForStartIndex:(unsigned long long)arg1;
- (void)shiftCachedPages:(int)arg1;
- (void)cachePagesForIndices:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)refreshSubviewOrder;
- (void)_notifyBackwardPrevented;
- (void)notifyBackwardPrevented;
- (_Bool)shouldPreventBackScrollOnAttempt;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pageTapped:(id)arg1;
- (id)pageForIndexInternal:(long long)arg1;
- (void)zoomInCenterPageAnimated;
- (void)layoutPages;
- (void)scrollAnimationStepWithDirectionMultiplier:(long long)arg1;
- (void)cancelAnimationAndSetCenterTo:(unsigned long long)arg1;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2 animateDistance:(unsigned long long)arg3 travelDirection:(int)arg4 zoomDestination:(_Bool)arg5;
- (void)reloadAllPages;
- (void)layoutPagesCenterContentOffset:(_Bool)arg1 adjustScale:(_Bool)arg2 forceWhileAnimating:(_Bool)arg3;
- (void)layoutPagesCenterContentOffset:(_Bool)arg1;
- (void)sharedInit;
- (id)initWithPagingDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
@property(nonatomic) unsigned long long currentCenterIndex;
@property(readonly, nonatomic) unsigned long long currentDisplayIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

