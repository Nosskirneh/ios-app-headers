//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, UITapGestureRecognizer;

@interface MarqueeLabel : UILabel <CAAnimationDelegate>
{
    _Bool _labelize;
    _Bool _holdScrolling;
    _Bool _tapToScroll;
    _Bool _isPaused;
    unsigned long long _animationCurve;
    unsigned long long _marqueeType;
    double _scrollDuration;
    double _rate;
    double _leadingBuffer;
    double _trailingBuffer;
    double _fadeLength;
    double _animationDelay;
    double _animationDuration;
    UILabel *_subLabel;
    UITapGestureRecognizer *_tapRecognizer;
    double _awayOffset;
    CDUnknownBlockType _scrollCompletionBlock;
    NSArray *_gradientColors;
    struct CGRect _homeLabelFrame;
}

+ (Class)layerClass;
+ (void)notifyController:(id)arg1 withMessage:(id)arg2;
+ (void)controllerLabelsShouldAnimate:(id)arg1;
+ (void)controllerLabelsShouldLabelize:(id)arg1;
+ (void)controllerViewAppearing:(id)arg1;
+ (void)controllerViewDidAppear:(id)arg1;
+ (void)controllerViewWillAppear:(id)arg1;
+ (void)restartLabelsOfController:(id)arg1;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic) double awayOffset; // @synthesize awayOffset=_awayOffset;
@property(nonatomic) struct CGRect homeLabelFrame; // @synthesize homeLabelFrame=_homeLabelFrame;
@property(nonatomic) __weak UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(nonatomic) double fadeLength; // @synthesize fadeLength=_fadeLength;
@property(nonatomic) double trailingBuffer; // @synthesize trailingBuffer=_trailingBuffer;
@property(nonatomic) double leadingBuffer; // @synthesize leadingBuffer=_leadingBuffer;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) unsigned long long marqueeType; // @synthesize marqueeType=_marqueeType;
@property(nonatomic) _Bool tapToScroll; // @synthesize tapToScroll=_tapToScroll;
@property(nonatomic) _Bool holdScrolling; // @synthesize holdScrolling=_holdScrolling;
@property(nonatomic) _Bool labelize; // @synthesize labelize=_labelize;
@property(nonatomic) unsigned long long animationCurve; // @synthesize animationCurve=_animationCurve;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool awayFromHome;
@property(nonatomic) double continuousMarqueeExtraBuffer;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setAdjustsLetterSpacingToFitWidth:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)tintColorDidChange;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBaselineAdjustment:(long long)arg1;
- (long long)baselineAdjustment;
- (void)setMinimumFontSize:(double)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)setShadowOffset:(struct CGSize)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)setText:(id)arg1;
- (id)text;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewForBaselineLayout;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)labelReturnedToHome:(_Bool)arg1;
- (void)labelWillBeginScroll;
- (void)triggerScrollStart;
- (void)labelWasTapped:(id)arg1;
- (void)unpauseLabel;
- (void)pauseLabel;
- (void)shutdownLabel;
- (void)resetLabel;
- (void)restartLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)timingFunctionForAnimationOptions:(unsigned long long)arg1;
- (id)keyFrameAnimationForProperty:(id)arg1 values:(id)arg2 interval:(double)arg3 delay:(double)arg4;
- (id)keyFrameAnimationForGradientFadeLength:(double)arg1 interval:(double)arg2 delay:(double)arg3;
- (void)removeGradientMask;
- (void)applyGradientMaskForFadeLength:(double)arg1 animated:(_Bool)arg2;
- (void)scrollContinuousWithInterval:(double)arg1 after:(double)arg2 labelAnimation:(id)arg3 gradientAnimation:(id)arg4;
- (void)scrollContinuousWithInterval:(double)arg1 after:(double)arg2;
- (void)scrollAwayWithInterval:(double)arg1 delayAmount:(double)arg2;
- (void)scrollAwayWithInterval:(double)arg1 delay:(_Bool)arg2;
- (void)scrollAwayWithInterval:(double)arg1;
- (void)returnLabelToOriginImmediately;
- (void)beginScrollWithDelay:(_Bool)arg1;
- (void)beginScroll;
- (_Bool)labelReadyForScroll;
@property(readonly, nonatomic) _Bool labelShouldScroll;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)subLabelSize;
- (void)updateSublabelAndBeginScroll:(_Bool)arg1;
- (void)updateSublabel;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)minimizeLabelFrameWithMaximumSize:(struct CGSize)arg1 adjustHeight:(_Bool)arg2;
- (void)setupLabel;
- (void)forwardPropertiesToSubLabel;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)maskLayer;
- (id)repliLayer;
- (void)prepareForInterfaceBuilder;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 rate:(double)arg2 andFadeLength:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2 andFadeLength:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)labelsShouldAnimate:(id)arg1;
- (void)labelsShouldLabelize:(id)arg1;
- (void)viewControllerShouldRestart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

