//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface TopWindowController : NSObject
{
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)configureAlertWindow;
- (void)createAlertWindowWithStatusBarStyle:(long long)arg1;
- (void)removeWindow;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 statusBarStyle:(long long)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;

@end
