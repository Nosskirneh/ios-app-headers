//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UINavigationControllerDelegate-Protocol.h"

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning;

@protocol GOONavigationControllerDelegate <UINavigationControllerDelegate>

@optional
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 headerAnimationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(UIViewController *)arg4 toViewController:(UIViewController *)arg5;
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(UIViewController *)arg4 toViewController:(UIViewController *)arg5;
@end

