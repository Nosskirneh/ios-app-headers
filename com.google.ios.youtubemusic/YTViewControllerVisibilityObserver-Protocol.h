//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol YTViewControllerVisibilityObserver <NSObject>
- (void)viewControllerDidDisappear:(UIViewController *)arg1;
- (void)viewControllerDidAppear:(UIViewController *)arg1;
- (void)viewControllerWillDisappear:(UIViewController *)arg1;
- (void)viewControllerWillAppear:(UIViewController *)arg1;
@end

