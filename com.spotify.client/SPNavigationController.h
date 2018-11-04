//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "SPContentInsetViewController.h"
#import "SPTNavigationControllerProtocol.h"
#import "SPTPageContainer.h"
#import "SPTPageController.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSHashTable, NSLayoutConstraint, NSMutableArray, NSString, NSURL, SPTNavigationControllerBlurViewOffsetCalculator, UIView, UIViewController;

@interface SPNavigationController : UINavigationController <SPContentInsetViewController, UINavigationControllerDelegate, UIGestureRecognizerDelegate, SPTPageContainer, SPTNavigationControllerProtocol, SPTPageController>
{
    _Bool _navigationTransitionInProgress;
    UIView *_navigationBarBackgroundView;
    long long _currentTransitionOperation;
    SPTNavigationControllerBlurViewOffsetCalculator *_blurViewOffsetCalculator;
    NSLayoutConstraint *_backgroundContainerViewWidthConstraint;
    UIView *_backgroundContainerView;
    NSLayoutConstraint *_navBarConstraint;
    UIViewController *_pushedViewController;
    unsigned long long _navigationBarState;
    NSMutableArray *_queuedTransitions;
    id <SPTNavigationControllerTransitioning> _transitionSource;
    NSHashTable *_observers;
    unsigned long long _navigationBarStatePendingUpdate;
}

+ (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long navigationBarStatePendingUpdate; // @synthesize navigationBarStatePendingUpdate=_navigationBarStatePendingUpdate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTNavigationControllerTransitioning> transitionSource; // @synthesize transitionSource=_transitionSource;
@property(nonatomic, getter=isNavigationTransitionInProgress) _Bool navigationTransitionInProgress; // @synthesize navigationTransitionInProgress=_navigationTransitionInProgress;
@property(retain, nonatomic) NSMutableArray *queuedTransitions; // @synthesize queuedTransitions=_queuedTransitions;
@property(nonatomic) unsigned long long navigationBarState; // @synthesize navigationBarState=_navigationBarState;
@property(nonatomic) __weak UIViewController *pushedViewController; // @synthesize pushedViewController=_pushedViewController;
@property(retain, nonatomic) NSLayoutConstraint *navBarConstraint; // @synthesize navBarConstraint=_navBarConstraint;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) NSLayoutConstraint *backgroundContainerViewWidthConstraint; // @synthesize backgroundContainerViewWidthConstraint=_backgroundContainerViewWidthConstraint;
@property(retain, nonatomic) SPTNavigationControllerBlurViewOffsetCalculator *blurViewOffsetCalculator; // @synthesize blurViewOffsetCalculator=_blurViewOffsetCalculator;
@property(nonatomic) long long currentTransitionOperation; // @synthesize currentTransitionOperation=_currentTransitionOperation;
@property(retain, nonatomic) UIView *navigationBarBackgroundView; // @synthesize navigationBarBackgroundView=_navigationBarBackgroundView;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)resetCurrentTransitionOperation;
- (void)updateNavigationBarState;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHiddenLegacy:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)setupBlurEffectView;
- (void)setupBlurEffectContainerView;
- (void)updateNavigationBarState:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2 backgroundColor:(id)arg3 useBlurEffect:(_Bool)arg4 operation:(long long)arg5 resetCurrentTransitionOperation:(_Bool)arg6;
- (void)updateNavigationBarStateFromViewController:(id)arg1 useTransitionCoordinator:(_Bool)arg2 operation:(long long)arg3;
- (void)customBackButtonPop;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewControllerOnTopOfTheNavigationStack:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 onTopOf:(id)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (double)statusBarOverlapHeight;
- (void)sp_updateContentInsets;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) __weak UIViewController *topViewController;
@property(readonly, copy, nonatomic) NSArray *viewControllers;

@end

