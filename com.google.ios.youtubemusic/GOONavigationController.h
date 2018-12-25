//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class GOONavigationStyle, GOOTransitionController, NSMutableArray, NSString;
@protocol UINavigationControllerDelegate;

@interface GOONavigationController : UINavigationController <UINavigationControllerDelegate>
{
    id <UINavigationControllerDelegate> _externalDelegate;
    NSMutableArray *_childControllers;
    NSMutableArray *_pushingChildControllers;
    NSMutableArray *_poppingChildControllers;
    _Bool _transitioning;
    _Bool _transitioningWillShowCalled;
    _Bool _transitioningDidShowCalled;
    id _operationContext;
    _Bool _animatorIsGOOTansition;
    _Bool _processingTransitionQueue;
    NSMutableArray *_transitionQueue;
    CDUnknownBlockType _deferedAncillaryLogic;
    _Bool _adjustHeaderHeightWhenHorizontalSizeChanges;
    _Bool _shouldSpecialCaseGOOHeaderViewController;
    GOOTransitionController *_transitionController;
    GOONavigationStyle *_navigationStyle;
}

@property(nonatomic) _Bool shouldSpecialCaseGOOHeaderViewController; // @synthesize shouldSpecialCaseGOOHeaderViewController=_shouldSpecialCaseGOOHeaderViewController;
@property(retain, nonatomic) GOONavigationStyle *navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(nonatomic) _Bool adjustHeaderHeightWhenHorizontalSizeChanges; // @synthesize adjustHeaderHeightWhenHorizontalSizeChanges=_adjustHeaderHeightWhenHorizontalSizeChanges;
@property(retain, nonatomic) GOOTransitionController *transitionController; // @synthesize transitionController=_transitionController;
- (void).cxx_destruct;
- (void)invokeNextTransitionIfNeeded;
- (void)queueTransitionInvocation:(id)arg1;
- (id)invocationForSelector:(SEL)arg1;
- (void)queueTransitionForSelector:(SEL)arg1 withBoolArg:(_Bool)arg2 objectArg:(id)arg3;
- (void)queueTransitionForSelector:(SEL)arg1 withObjectArg:(id)arg2 boolArg:(_Bool)arg3 objectArg:(id)arg4;
- (void)queueTransitionForSelector:(SEL)arg1 withObjectArg:(id)arg2 boolArg:(_Bool)arg3;
- (void)queueTransitionForSelector:(SEL)arg1 withBoolArg:(_Bool)arg2;
- (_Bool)shouldQueueTransition;
- (id)currentChildController;
- (id)childControllerForViewController:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 operation:(long long)arg3 coordinator:(id)arg4 animated:(_Bool)arg5;
- (void)reparentHeaderForViewControllerIfNeeded:(id)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1 operationContext:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 operationContext:(id)arg3;
- (void)setShouldAdjustHeaderForScrollViewChanges:(_Bool)arg1;
- (id)headerViewForViewController:(id)arg1;
- (void)setNeedsBannerViewUpdate;
- (void)setNeedsSecondaryScrollViewsUpdate;
- (void)setNeedsPrimaryScrollViewUpdate;
- (void)setNeedsNavigationStyleUpdate;
- (_Bool)accessibilityPerformEscape;
- (id)navigationController:(id)arg1 headerAnimationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)executeDeferedAncillaryLogic;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (id)navigationBar;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (_Bool)isNavigationBarHidden;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1 navigationStyle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

