//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCLegacyInkLayerRipple.h"

@class CAKeyframeAnimation;

@interface MDCLegacyInkLayerBackgroundRipple : MDCLegacyInkLayerRipple
{
    CAKeyframeAnimation *_backgroundOpacityAnim;
}

@property(retain, nonatomic) CAKeyframeAnimation *backgroundOpacityAnim; // @synthesize backgroundOpacityAnim=_backgroundOpacityAnim;
- (void).cxx_destruct;
- (void)removeAllAnimations;
- (void)exit:(_Bool)arg1;
- (void)enter;

@end
