//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface LOTRadialGradientLayer : CALayer
{
}

+ (_Bool)needsDisplayForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *colors; // @dynamic colors;
@property struct CGPoint endPoint; // @dynamic endPoint;
@property(nonatomic) _Bool isRadial; // @dynamic isRadial;
@property(copy, nonatomic) NSArray *locations; // @dynamic locations;
@property struct CGPoint startPoint; // @dynamic startPoint;

@end

