//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXMenuTransitionAnimator.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIView;

@interface VOXMiniPlayerTransitionAnimator : VOXMenuTransitionAnimator <UIGestureRecognizerDelegate>
{
    UIView *_view;
    UIView *_playerView;
    struct CGRect _restrictedRect;
}

@property(nonatomic) struct CGRect restrictedRect; // @synthesize restrictedRect=_restrictedRect;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)minimizeViewControllerWithVelocity:(double)arg1;
- (void)presentPlayer;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2;
- (void)handlePanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

