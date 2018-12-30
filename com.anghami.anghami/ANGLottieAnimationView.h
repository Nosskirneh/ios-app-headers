//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTAnimationView.h"

@class CADisplayLink, NSDate;

@interface ANGLottieAnimationView : LOTAnimationView
{
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
    double _endTime;
    NSDate *_lastTimeStamp;
    _Bool _isPlayingReverse;
    _Bool _shouldHide;
}

+ (void)updateHiddenViews;
+ (id)animationNamed:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)updateDisplayLink:(id)arg1;
- (void)updateHidden;
- (void)setHidden:(_Bool)arg1;
- (void)endAnimation;
- (void)playFromPosition:(double)arg1 toPosition:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
