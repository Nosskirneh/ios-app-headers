//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuViewInteractionTarget-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface SPTContextMenuViewTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, SPTContextMenuViewInteractionTarget, UIViewControllerInteractiveTransitioning>
{
    _Bool _presenting;
    _Bool _interactive;
    id <UIViewControllerContextTransitioning> _transitionContext;
    struct CGPoint _lastKnownTranslation;
    struct CGPoint _lastKnownVelocity;
    struct CGRect _originalFromViewControllerFrame;
}

@property(nonatomic) struct CGRect originalFromViewControllerFrame; // @synthesize originalFromViewControllerFrame=_originalFromViewControllerFrame;
@property(nonatomic) struct CGPoint lastKnownVelocity; // @synthesize lastKnownVelocity=_lastKnownVelocity;
@property(nonatomic) struct CGPoint lastKnownTranslation; // @synthesize lastKnownTranslation=_lastKnownTranslation;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)interactionEndedInView:(id)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)interactionChangedInView:(id)arg1 translation:(struct CGPoint)arg2;
- (void)interactionBeganInView:(id)arg1 translation:(struct CGPoint)arg2;
- (double)transitionCrossfadeDuration;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

