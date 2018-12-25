//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface YTMEqualizerView : UIView <CAAnimationDelegate>
{
    NSMutableArray *_barViews;
    NSMutableArray *_keyFrameScale;
    double _minBarScale;
    unsigned long long _animationCount;
    _Bool _animating;
}

@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)resetBarsToRestingState;
- (void)regenerateKeyframes;
- (void)freezeAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)restartAnimationIfNescessary;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)startAnimating;
- (void)stopAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 numBars:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

