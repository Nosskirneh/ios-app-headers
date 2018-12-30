//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImageView;

@interface MCProgressBarView : UIView
{
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    double _minimumForegroundWidth;
    double _availableWidth;
    CALayer *_maskLayer;
    double _progress;
    double _offsetForZero;
}

@property(nonatomic) double offsetForZero; // @synthesize offsetForZero=_offsetForZero;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (id)generateMaskImageFromImage:(id)arg1 forSize:(struct CGSize)arg2;
- (void)relayoutMask;
- (void)layoutSubviews;
- (void)setForegroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 foregroundImage:(id)arg3;

@end

