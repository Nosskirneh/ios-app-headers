//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTStatusBarManager;

@protocol SPTStatusBarManagerObserver <NSObject>
- (void)statusBarManager:(SPTStatusBarManager *)arg1 didChangeStatusBarHeight:(double)arg2;
- (void)statusBarManager:(SPTStatusBarManager *)arg1 didToggleStatusBarState:(_Bool)arg2;
@end
