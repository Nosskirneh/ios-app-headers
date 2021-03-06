//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXTransitionAnimator.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;

@interface VOXMenuTransitionAnimator : VOXTransitionAnimator <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIView *_gestureHandlingView;
    UIView *_gestureTransformingView;
    struct CGRect _restrictedRect;
}

@property(nonatomic) __weak UIView *gestureTransformingView; // @synthesize gestureTransformingView=_gestureTransformingView;
@property(nonatomic) __weak UIView *gestureHandlingView; // @synthesize gestureHandlingView=_gestureHandlingView;
@property(nonatomic) struct CGRect restrictedRect; // @synthesize restrictedRect=_restrictedRect;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeGestureHandlingView;
- (void)addGestureHandlingView;
- (void)minimizeViewControllerWithVelocity:(double)arg1;
- (void)presentDestinationViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentDestinationView;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)updateInactiveRecognizerRect:(struct CGRect)arg1;
- (void)setupGestureRecognizerForView:(id)arg1 transformingView:(id)arg2;
- (void)setupGestureRecognizerForView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

