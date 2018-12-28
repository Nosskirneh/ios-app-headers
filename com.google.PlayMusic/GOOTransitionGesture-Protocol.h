//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GOONavigationController, UIGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol GOOTransitionGesture <UIGestureRecognizerDelegate>
@property(nonatomic) __weak GOONavigationController *navigationController;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (_Bool)shouldBeginInteractiveTransition;
@end

