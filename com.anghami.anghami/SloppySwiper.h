//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSWAnimatorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SSWAnimator, UINavigationController, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;
@protocol SloppySwiperDelegate;

@interface SloppySwiper : NSObject <UIGestureRecognizerDelegate, SSWAnimatorDelegate>
{
    _Bool _duringAnimation;
    UIPanGestureRecognizer *_panRecognizer;
    id <SloppySwiperDelegate> _delegate;
    UINavigationController *_navigationController;
    SSWAnimator *_animator;
    UIPercentDrivenInteractiveTransition *_interactionController;
}

@property(nonatomic) _Bool duringAnimation; // @synthesize duringAnimation=_duringAnimation;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) SSWAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SloppySwiperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)pan:(id)arg1;
- (double)animatorTransitionDimAmount:(id)arg1;
- (_Bool)animatorShouldAnimateTabBar:(id)arg1;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

