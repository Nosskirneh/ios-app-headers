//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHStackNavigationController, UIViewController;

@interface RHStackNavigation : NSObject
{
    RHStackNavigationController *_stackNavigationController;
    UIViewController *_stackedViewController;
}

@property(nonatomic) __weak UIViewController *stackedViewController; // @synthesize stackedViewController=_stackedViewController;
@property(nonatomic) __weak RHStackNavigationController *stackNavigationController; // @synthesize stackNavigationController=_stackNavigationController;
- (void).cxx_destruct;
- (void)exposeViewController:(id)arg1 animated:(_Bool)arg2;
- (id)nextViewController;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)pushViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithStackNavigationController:(id)arg1 stackedViewController:(id)arg2;

@end

