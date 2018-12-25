//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer;

@interface MDCShadowLayer : CALayer
{
    _Bool _shadowPathIsInvalid;
    _Bool _shadowMaskEnabled;
    double _elevation;
    CAShapeLayer *_topShadow;
    CAShapeLayer *_bottomShadow;
    CAShapeLayer *_topShadowMask;
    CAShapeLayer *_bottomShadowMask;
}

+ (struct CGSize)shadowSpreadForElevation:(double)arg1;
@property(retain, nonatomic) CAShapeLayer *bottomShadowMask; // @synthesize bottomShadowMask=_bottomShadowMask;
@property(retain, nonatomic) CAShapeLayer *topShadowMask; // @synthesize topShadowMask=_topShadowMask;
@property(retain, nonatomic) CAShapeLayer *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) CAShapeLayer *topShadow; // @synthesize topShadow=_topShadow;
@property(nonatomic, getter=isShadowMaskEnabled) _Bool shadowMaskEnabled; // @synthesize shadowMaskEnabled=_shadowMaskEnabled;
@property(nonatomic) double elevation; // @synthesize elevation=_elevation;
- (void).cxx_destruct;
- (void)animateCornerRadius:(double)arg1 withTimingFunction:(id)arg2 duration:(double)arg3;
- (void)commonLayoutSublayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)outerMaskPath;
- (struct CGRect)maskRect;
- (void)configureShadowLayerMaskForLayer:(id)arg1;
- (void)setShouldRasterize:(_Bool)arg1;
- (void)setShadowColor:(struct CGColor *)arg1;
- (void)setShadowPath:(struct CGPath *)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)defaultShadowPath;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)commonMDCShadowLayerInit;
- (id)initWithLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

