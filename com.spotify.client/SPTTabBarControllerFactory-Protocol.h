//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTabBarContainerViewController;

@protocol SPTTabBarControllerFactory <NSObject>
- (SPTTabBarContainerViewController *)createTabBarContainerWithTabBarController:(struct UIViewController *)arg1;
- (struct UIViewController *)createTabBarControllerWithLogCenter:(id <SPTLogCenter>)arg1;
@end

