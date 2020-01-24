//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADTransitionDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class ADTransition, NSString;
@protocol UIViewControllerContextTransitioning;

@interface ADTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, ADTransitionDelegate>
{
    id <UIViewControllerContextTransitioning> _currentTransitioningContext;
    ADTransition *_transition;
}

@property(retain, nonatomic) ADTransition *transition; // @synthesize transition=_transition;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)popTransitionDidFinish:(id)arg1;
- (void)pushTransitionDidFinish:(id)arg1;
- (id)initWithTransition:(id)arg1;
- (void)_completeTransition;
- (void)_teardownLayers:(id)arg1;
- (void)_setupLayers:(id)arg1;
- (void)_transitionInContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 withTransition:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
