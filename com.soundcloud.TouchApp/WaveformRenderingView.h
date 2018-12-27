//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WaveformRenderingView : UIView
{
    double _barWidth;
    double _barSpacing;
    double _reflectionGap;
    struct CGGradient *_gradient;
    NSArray *_samples;
}

+ (unsigned long long)numberOfBarsInWidth:(double)arg1 barScale:(double)arg2;
@property(retain, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(nonatomic) struct CGGradient *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) double reflectionGap; // @synthesize reflectionGap=_reflectionGap;
@property(readonly, nonatomic) double barSpacing; // @synthesize barSpacing=_barSpacing;
@property(readonly, nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
- (void).cxx_destruct;
- (void)setPlayableProgress:(double)arg1;
- (id)gradientColors;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 samples:(id)arg2 barScale:(double)arg3 withGradient:(_Bool)arg4;

@end

