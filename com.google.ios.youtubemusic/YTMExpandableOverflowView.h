//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, QTMButton;
@protocol YTMExpandableOverflowViewDelegate;

@interface YTMExpandableOverflowView : UIView
{
    QTMButton *_moreButton;
    _Bool _expanded;
    id <YTMExpandableOverflowViewDelegate> _delegate;
    NSArray *_collapsibleButtons;
    NSArray *_pinnedButtons;
    double _fadeAnimationDelay;
    double _fadeAnimationDuration;
}

@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double fadeAnimationDelay; // @synthesize fadeAnimationDelay=_fadeAnimationDelay;
@property(retain, nonatomic) NSArray *pinnedButtons; // @synthesize pinnedButtons=_pinnedButtons;
@property(retain, nonatomic) NSArray *collapsibleButtons; // @synthesize collapsibleButtons=_collapsibleButtons;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <YTMExpandableOverflowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateLayoutAnimated:(_Bool)arg1;
- (void)didTapMoreButton;
@property(readonly, nonatomic) double totalAnimationDuration;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
