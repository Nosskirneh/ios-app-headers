//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, GLUEAnimationVectorTransformer;

@interface GLUEInteractiveAnimation : NSObject
{
    _Bool _active;
    double _progress;
    CDUnknownBlockType _apply;
    GLUEAnimationVectorTransformer *_vectorTransformer;
    double _targetProgress;
    double _duration;
    CADisplayLink *_displayLink;
    unsigned long long _degradationPolicy;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long degradationPolicy; // @synthesize degradationPolicy=_degradationPolicy;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double targetProgress; // @synthesize targetProgress=_targetProgress;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) GLUEAnimationVectorTransformer *vectorTransformer; // @synthesize vectorTransformer=_vectorTransformer;
@property(copy, nonatomic) CDUnknownBlockType apply; // @synthesize apply=_apply;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)next;
- (void)animateToTargetProgress:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldAnimateForProgress:(double)arg1;
- (void)invalidate;
- (id)initWithfromValue:(id)arg1 toValue:(id)arg2 timingFunction:(id)arg3 apply:(CDUnknownBlockType)arg4 degradationPolicy:(unsigned long long)arg5;
- (id)initWithfromValue:(id)arg1 toValue:(id)arg2 timingFunction:(id)arg3 apply:(CDUnknownBlockType)arg4;
- (id)initWithObject:(id)arg1 forKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 timingFunction:(id)arg5 degradationPolicy:(unsigned long long)arg6;
- (id)initWithObject:(id)arg1 forKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 timingFunction:(id)arg5;

@end

