//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString;
@protocol NSObject;

@interface SPTHomeUIPlaybackIndicatorView : UIView <CAAnimationDelegate>
{
    _Bool _animated;
    _Bool _backgrounded;
    _Bool _paused;
    CAShapeLayer *_barLayer1;
    CAShapeLayer *_barLayer2;
    CAShapeLayer *_barLayer3;
    id <NSObject> _didEnterBackgroundNotificationToken;
    id <NSObject> _willEnterForegroundNotificationToken;
}

@property(retain, nonatomic) id <NSObject> willEnterForegroundNotificationToken; // @synthesize willEnterForegroundNotificationToken=_willEnterForegroundNotificationToken;
@property(retain, nonatomic) id <NSObject> didEnterBackgroundNotificationToken; // @synthesize didEnterBackgroundNotificationToken=_didEnterBackgroundNotificationToken;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(readonly, nonatomic) CAShapeLayer *barLayer3; // @synthesize barLayer3=_barLayer3;
@property(readonly, nonatomic) CAShapeLayer *barLayer2; // @synthesize barLayer2=_barLayer2;
@property(readonly, nonatomic) CAShapeLayer *barLayer1; // @synthesize barLayer1=_barLayer1;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeStateObservers;
- (void)addStateObservers;
- (void)animateBarLayer:(id)arg1;
- (void)removeAnimations;
- (void)addAnimations;
- (void)updateAnimationIfNeeded;
- (_Bool)canAnimate;
- (void)customizeAppearance;
- (void)buildHierarchy;
- (void)stopAnimating;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

