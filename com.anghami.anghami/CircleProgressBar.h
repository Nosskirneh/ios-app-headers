//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIColor, UIFont;

@interface CircleProgressBar : UIView
{
    NSTimer *_animationTimer;
    double _currentAnimationProgress;
    double _startProgress;
    double _endProgress;
    double _animationProgressStep;
    CDUnknownBlockType _hintTextGenerationBlock;
    CDUnknownBlockType _hintAttributedTextGenerationBlock;
    _Bool _hintHidden;
    double _progressBarWidth;
    UIColor *_progressBarProgressColor;
    UIColor *_progressBarTrackColor;
    double _startAngle;
    double _hintViewSpacing;
    UIColor *_hintViewBackgroundColor;
    UIFont *_hintTextFont;
    UIColor *_hintTextColor;
    double _progress;
}

@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *hintTextColor; // @synthesize hintTextColor=_hintTextColor;
@property(retain, nonatomic) UIFont *hintTextFont; // @synthesize hintTextFont=_hintTextFont;
@property(retain, nonatomic) UIColor *hintViewBackgroundColor; // @synthesize hintViewBackgroundColor=_hintViewBackgroundColor;
@property(nonatomic) double hintViewSpacing; // @synthesize hintViewSpacing=_hintViewSpacing;
@property(nonatomic) _Bool hintHidden; // @synthesize hintHidden=_hintHidden;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(retain, nonatomic) UIColor *progressBarTrackColor; // @synthesize progressBarTrackColor=_progressBarTrackColor;
@property(retain, nonatomic) UIColor *progressBarProgressColor; // @synthesize progressBarProgressColor=_progressBarProgressColor;
@property(nonatomic) double progressBarWidth; // @synthesize progressBarWidth=_progressBarWidth;
- (void).cxx_destruct;
- (void)setHintAttributedGenerationBlock:(CDUnknownBlockType)arg1;
- (void)setHintTextGenerationBlock:(CDUnknownBlockType)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)stopAnimation;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)updateProgressBarForAnimation;
- (void)animateProgressBarChangeFrom:(double)arg1 to:(double)arg2 duration:(double)arg3;
- (void)drawHint:(struct CGContext *)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)drawAttributedHintTextAtCenter:(struct CGPoint)arg1;
- (void)drawSimpleHintTextAtCenter:(struct CGPoint)arg1;
- (id)stringRepresentationOfProgress:(double)arg1;
- (id)hintTextColorForDrawing;
- (id)hintTextFontForDrawing;
- (id)hintViewBackgroundColorForDrawing;
- (double)hintViewSpacingForDrawing;
- (void)drawProgressBar:(struct CGContext *)arg1 progressAngle:(double)arg2 center:(struct CGPoint)arg3 radius:(double)arg4;
- (double)progressBarWidthForDrawing;
- (id)progressBarTrackColorForDrawing;
- (id)progressBarProgressColorForDrawing;
- (void)drawBackground:(struct CGContext *)arg1;
- (double)progressAccordingToBounds:(double)arg1;

@end
