//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEViewAnimator.h"

#import "GLUEStyleable-Protocol.h"

@class CALayer, NSString, UIView;

@interface GLUEPressedViewAnimator : GLUEViewAnimator <GLUEStyleable>
{
    _Bool _isAnimating;
    UIView *_animatedView;
    CALayer *_animatedLayer;
    double _pressedScaleFactor;
    double _animationDuration;
    double _restoreAnimationDuration;
}

@property(nonatomic) double restoreAnimationDuration; // @synthesize restoreAnimationDuration=_restoreAnimationDuration;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double pressedScaleFactor; // @synthesize pressedScaleFactor=_pressedScaleFactor;
@property(retain, nonatomic) CALayer *animatedLayer; // @synthesize animatedLayer=_animatedLayer;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (id)animatedView;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)glue_applyStyle:(id)arg1;
- (void)restoreAnimatedViewWithoutAnimation;
- (void)restoreAnimatedViewWithDelay:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithView:(id)arg1 pressedAnimatorStyle:(id)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

