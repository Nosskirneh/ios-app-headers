//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIScrollViewDelegate-Protocol.h"

@class MDCPageControlIndicator, MDCPageControlTrackLayer, NSMutableArray, NSString, QTMColorGroup, UIColor, UIView;

@interface MDCPageControl : UIControl <UIScrollViewDelegate>
{
    UIView *_containerView;
    NSMutableArray *_indicators;
    NSMutableArray *_indicatorPositions;
    MDCPageControlIndicator *_animatedIndicator;
    MDCPageControlTrackLayer *_trackLayer;
    double _trackLength;
    _Bool _isDeferredScrolling;
    _Bool _hidesForSinglePage;
    _Bool _defersCurrentPageDisplay;
    long long _numberOfPages;
    long long _currentPage;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
}

+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
+ (id)pageControlAccessibilityLabelWithPage:(long long)arg1 ofPages:(long long)arg2;
+ (struct CGSize)sizeForNumberOfPages:(long long)arg1;
@property(nonatomic) _Bool defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay=_defersCurrentPageDisplay;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)resetControl;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateCurrentPageDisplay;
- (void)handleTapGesture:(id)arg1;
- (void)revealIndicatorsReversed:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)scrolledPercentage:(id)arg1;
- (long long)scrolledPageNumber:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isPageIndexValid:(long long)arg1;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)commonMDCPageControlInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) QTMColorGroup *colorGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

