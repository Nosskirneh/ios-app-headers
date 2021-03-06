//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, SPTLyricsV2LoadingViewStyle;

@interface SPTLyricsV2LoadingView : UIView
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    SPTLyricsV2LoadingViewStyle *_style;
}

@property(retain, nonatomic) SPTLyricsV2LoadingViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)animateIndicator:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

