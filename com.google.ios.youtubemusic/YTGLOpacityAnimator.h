//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLAnimator.h"

@class NSArray;

@interface YTGLOpacityAnimator : YTGLAnimator
{
    NSArray *_blendables;
    float _startOpacity;
    float _endOpacity;
}

- (void).cxx_destruct;
- (void)animateWithFramePresentationTime:(double)arg1;
- (id)initWithAnimationDirection:(long long)arg1 duration:(double)arg2;
- (id)initWithTargets:(id)arg1 animationDirection:(long long)arg2 duration:(double)arg3 startOpacity:(float)arg4 endOpacity:(float)arg5;

@end

