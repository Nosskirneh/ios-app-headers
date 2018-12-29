//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"
#import "_TtP4WiMP33AnalyticsEventServiceInfoProvider_-Protocol.h"

@class NSString, UIApplicationShortcutItem, UIWindow;

@interface WMPAppDelegate : UIResponder <_TtP4WiMP33AnalyticsEventServiceInfoProvider_, UIApplicationDelegate>
{
    _Bool _isKeyboardVisible;
    UIWindow *_window;
    UIApplicationShortcutItem *_shortcutItem;
    unsigned long long _bgTask;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardVisible; // @synthesize isKeyboardVisible=_isKeyboardVisible;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain, nonatomic) UIApplicationShortcutItem *shortcutItem; // @synthesize shortcutItem=_shortcutItem;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)accessoryDidConnect:(id)arg1;
- (_Bool)checkIfString:(id)arg1 matchesRegexArray:(id)arg2;
- (void)startSDLManagerAfterConditionCheck;
- (void)startFordSDLManager;
@property(readonly, copy, nonatomic) NSString *clientId;
@property(readonly, copy, nonatomic) NSString *clientVersion;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *authToken;
@property(readonly, copy, nonatomic) NSString *sessionId;
- (void)startBackgroundingTask;
- (double)getKeyboardHeight:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)addKeyboardObservers;
- (void)handleActionForShortcutItemIfNeeded;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

