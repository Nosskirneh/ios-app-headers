//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface UINavigationController (Additions) <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
- (void)dzrHandleNiceSwipeBackGesture:(id)arg1;
- (void)setupNiceSwipeBack;
- (id)childViewControllerForStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 checkHistory:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
