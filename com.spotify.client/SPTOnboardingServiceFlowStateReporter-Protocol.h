//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;

@protocol SPTOnboardingServiceFlowStateReporter <NSObject>
- (void)onboardingFlowDidFinish;
- (UINavigationController *)onboardingFlowNavigationControllerWithViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@end

