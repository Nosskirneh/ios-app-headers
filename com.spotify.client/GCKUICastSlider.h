//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, TooltipBorder, UIColor, UIFont, UILabel, UIView;

@interface GCKUICastSlider : UISlider
{
    UIView *_containerView;
    NSMutableArray *_adBlockViews;
    NSString *text;
    TooltipBorder *_tooltipBorder;
    UIColor *_tooltipBorderColor;
    NSLayoutConstraint *_leadingConstraintOfTooltip;
    NSLayoutConstraint *_leadingConstraintOfPreSeekableRangeTrackView;
    NSLayoutConstraint *_leadingConstraintOfAfterSeekableRangeTrackView;
    NSLayoutConstraint *_leadingConstraintOfSeekableProgressTrackView;
    NSLayoutConstraint *_leadingConstraintOfSeekableSecondaryProgressTrack;
    NSLayoutConstraint *_thumbViewXPosition;
    _Bool _showStreamStart;
    NSArray *_adBlockPositions;
    NSString *_tooltipText;
    double _streamStart;
    double _seekableRangeStart;
    double _seekableRangeEnd;
    UIView *_preStreamTrackView;
    UIView *_preSeekableRangeTrackView;
    UIView *_seekableProgressTrackView;
    UIView *_seekableSecondaryProgressTrackView;
    UIView *_afterSeekableRangeTrackView;
    UIView *_thumbView;
    UILabel *_tooltipLabel;
}

@property(copy, nonatomic) UILabel *tooltipLabel; // @synthesize tooltipLabel=_tooltipLabel;
@property(copy, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(copy, nonatomic) UIView *afterSeekableRangeTrackView; // @synthesize afterSeekableRangeTrackView=_afterSeekableRangeTrackView;
@property(copy, nonatomic) UIView *seekableSecondaryProgressTrackView; // @synthesize seekableSecondaryProgressTrackView=_seekableSecondaryProgressTrackView;
@property(copy, nonatomic) UIView *seekableProgressTrackView; // @synthesize seekableProgressTrackView=_seekableProgressTrackView;
@property(copy, nonatomic) UIView *preSeekableRangeTrackView; // @synthesize preSeekableRangeTrackView=_preSeekableRangeTrackView;
@property(copy, nonatomic) UIView *preStreamTrackView; // @synthesize preStreamTrackView=_preStreamTrackView;
@property(nonatomic) double seekableRangeEnd; // @synthesize seekableRangeEnd=_seekableRangeEnd;
@property(nonatomic) double seekableRangeStart; // @synthesize seekableRangeStart=_seekableRangeStart;
@property(nonatomic) double streamStart; // @synthesize streamStart=_streamStart;
@property(nonatomic) _Bool showStreamStart; // @synthesize showStreamStart=_showStreamStart;
@property(copy, nonatomic) NSString *tooltipText; // @synthesize tooltipText=_tooltipText;
@property(retain, nonatomic) NSArray *adBlockPositions; // @synthesize adBlockPositions=_adBlockPositions;
- (void).cxx_destruct;
- (double)leadingOfTooltipView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) struct CGSize tooltipTextShadowOffset;
@property(retain, nonatomic) UIColor *tooltipTextShadowColor;
@property(retain, nonatomic) UIFont *tooltipTextFont;
@property(retain, nonatomic) UIColor *tooltipTextColor;
@property(retain, nonatomic) UIColor *tooltipBackgroundColor;
@property(retain, nonatomic) UIColor *thumbColor;
@property(retain, nonatomic) UIColor *seekableSecondaryProgressColor;
@property(retain, nonatomic) UIColor *seekableProgressColor;
@property(retain, nonatomic) UIColor *unseekableProgressColor;
- (void)applyStyleAttributes:(id)arg1;
@property(nonatomic) _Bool thumbHidden;
- (void)updateSliderWithStreamStart:(double)arg1 seekableRangeStart:(double)arg2 seekableRangeEnd:(double)arg3;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)updateTracks;
- (void)createAdBlockViews;
- (void)clearAdBlockViews;
- (id)initWithCoder:(id)arg1;

@end

