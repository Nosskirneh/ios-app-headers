//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCAnimationProxy.h"

@interface MCSpringAnimation : MCAnimationProxy
{
    double _springBounciness;
    double _springSpeed;
}

+ (id)propertyNameForSelector:(SEL)arg1;
@property(nonatomic) double springSpeed; // @synthesize springSpeed=_springSpeed;
@property(nonatomic) double springBounciness; // @synthesize springBounciness=_springBounciness;
- (id)propertyAnimation;
- (id)initWithObject:(id)arg1;

@end
