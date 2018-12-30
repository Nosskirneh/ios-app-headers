//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer;

@interface ISHPullUpRoundedTopShadowLayer : CALayer
{
    double _radius;
    CAShapeLayer *_shapeMaskLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeMaskLayer; // @synthesize shapeMaskLayer=_shapeMaskLayer;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)init;

@end

