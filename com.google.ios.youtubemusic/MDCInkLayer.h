//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;
@protocol MDCInkLayerDelegate;

@interface MDCInkLayer : CAShapeLayer
{
    _Bool _startAnimationActive;
    id <MDCInkLayerDelegate> _animationDelegate;
    double _endAnimationDelay;
    double _finalRadius;
    double _initialRadius;
    double _maxRippleRadius;
    UIColor *_inkColor;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) double maxRippleRadius; // @synthesize maxRippleRadius=_maxRippleRadius;
@property(nonatomic) double initialRadius; // @synthesize initialRadius=_initialRadius;
@property(nonatomic) double finalRadius; // @synthesize finalRadius=_finalRadius;
@property(nonatomic) double endAnimationDelay; // @synthesize endAnimationDelay=_endAnimationDelay;
@property(readonly, nonatomic, getter=isStartAnimationActive) _Bool startAnimationActive; // @synthesize startAnimationActive=_startAnimationActive;
@property(nonatomic) __weak id <MDCInkLayerDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)endInkAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)endAnimationAtPoint:(struct CGPoint)arg1;
- (void)changeAnimationAtPoint:(struct CGPoint)arg1;
- (void)startInkAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)startAnimationAtPoint:(struct CGPoint)arg1;
- (void)setRadiiWithRect:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

