//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CALayer, GIMMe, NSArray, NSString, UIColor, UIScrollView;

@interface YTTabScrollingView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    CALayer *_activeSelectionLayer;
    NSString *_styleContext;
    UIColor *_selectionColor;
    UIColor *_activeSelectionColor;
    UIColor *_customActiveSelectionColor;
    GIMMe *_gimme;
    NSArray *_buttons;
    double _targetTabPosition;
    double _tabPosition;
}

@property(nonatomic) double tabPosition; // @synthesize tabPosition=_tabPosition;
@property(nonatomic) double targetTabPosition; // @synthesize targetTabPosition=_targetTabPosition;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (double)scrollEdgeMargin;
- (double)widthForButton:(id)arg1;
- (id)buttonAtIndex:(long long)arg1;
- (long long)lastPage;
- (struct CGRect)selectionFrameForTabPosition:(double)arg1;
- (void)updateSelectedButton;
- (void)setCustomActiveSelectionColor:(id)arg1;
- (void)updateActiveSelectionColor;
- (void)setTextColor:(id)arg1 selectionColor:(id)arg2;
@property(readonly, nonatomic) UIView *contentView;
- (double)preferredHeight;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyleContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

