//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (KMNavigationBarTransition)
+ (void)load;
- (void)setKm_transitionContextToViewController:(id)arg1;
- (id)km_transitionContextToViewController;
- (void)setKm_backgroundViewHidden:(_Bool)arg1;
- (_Bool)km_backgroundViewHidden;
- (void)km_setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)km_popToRootViewControllerAnimated:(_Bool)arg1;
- (id)km_popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)km_popViewControllerAnimated:(_Bool)arg1;
- (void)km_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)km_containerViewBackgroundColor;
@end
