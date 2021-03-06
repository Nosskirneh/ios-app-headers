//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "AdjustDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class AppLauncher, Keychain, NSString, UIWindow;

@interface AppDelegate : UIResponder <AdjustDelegate, UIApplicationDelegate>
{
    UIWindow *_window;
    AppLauncher *_appLauncher;
    Keychain *_keychain;
}

@property(retain, nonatomic) Keychain *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) AppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)adjustDeeplinkResponse:(id)arg1;
- (void)adjustAttributionChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

