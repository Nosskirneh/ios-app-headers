//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIViewController;

@protocol RHIAPViewControllerContainerDelegate
- (void)displaySignUpWithMetricsSource:(NSString *)arg1;
- (void)goBack:(_Bool)arg1;
- (void)pushController:(UIViewController *)arg1;
- (void)close:(_Bool)arg1 withAfterCloseAction:(ZDSPromise * (^)(void))arg2;
- (void)clickSignUpWithMetricsSource:(NSString *)arg1;
- (void)clickLoginWithMetricsSource:(NSString *)arg1;
- (void)displayLoginAnimated:(_Bool)arg1 metricsSource:(NSString *)arg2;
@end

