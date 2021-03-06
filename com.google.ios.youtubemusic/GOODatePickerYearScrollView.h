//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class GOODatePickerColorPalette, NSMutableArray, NSMutableSet, NSString, UIView;
@protocol GOODatePickerYearScrollViewDelegate;

@interface GOODatePickerYearScrollView : UIScrollView <UIScrollViewDelegate>
{
    NSMutableArray *_visibleLabels;
    NSMutableSet *_reuseLabels;
    UIView *_labelContentView;
    long long _nextSelectedIndex;
    GOODatePickerColorPalette *_colorPalette;
    long long _selectedIndex;
    id <GOODatePickerYearScrollViewDelegate> _selectionDelegate;
}

@property(nonatomic) __weak id <GOODatePickerYearScrollViewDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (void).cxx_destruct;
- (void)scrollToLabel:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToVisibleLabelAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)redrawAllLabels;
- (void)tileLabelsFromMinY:(double)arg1 toMaxY:(double)arg2;
- (void)removeLabel:(id)arg1;
- (void)addLabelAtY:(double)arg1 withIndex:(long long)arg2 atFront:(_Bool)arg3;
- (void)recenterIfNecessary;
- (void)handleScrollEnd;
- (void)didTapLabel:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

