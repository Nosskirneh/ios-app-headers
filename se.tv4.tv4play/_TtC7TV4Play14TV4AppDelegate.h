//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "FIRMessagingDelegate-Protocol.h"
#import "GCKLoggerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "iRateDelegate-Protocol.h"

@class UIWindow;

@interface _TtC7TV4Play14TV4AppDelegate : UIResponder <UIApplicationDelegate, GCKLoggerDelegate, FIRMessagingDelegate, iRateDelegate>
{
    // Error parsing type: , name: window
    // Error parsing type: , name: navController
    // Error parsing type: , name: isShowingTermsOfUse
    // Error parsing type: , name: launchOptions
    // Error parsing type: , name: isOpeningPushFromDeadState
    // Error parsing type: , name: assetIdToLoad
    // Error parsing type: , name: topMostNavigationController
    // Error parsing type: , name: dateAppWasSentToBackground
    // Error parsing type: , name: launchCount
    // Error parsing type: , name: isDisplayingHelloBar
    // Error parsing type: , name: helloBarView
    // Error parsing type: , name: globalDeviceToken
    // Error parsing type: , name: adobeCampaignCampaignNeolaneServerUrlProd
    // Error parsing type: , name: adobeCampaignCampaignNeolaneServerUrlStage
    // Error parsing type: , name: loginObserver
    // Error parsing type: , name: logoutObserver
    // Error parsing type: , name: hasSetupPush
    // Error parsing type: , name: onboardingViewController
    // Error parsing type: , name: startupBlock
    // Error parsing type: , name: dispatchHandler
    // Error parsing type: , name: termsController
    // Error parsing type: , name: latestPlayTermsAvailable
    // Error parsing type: , name: forceTouchPageToShow
    // Error parsing type: , name: supportedInterfaceOrientations
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)iRateDidOpenAppStore;
- (void)iRateUserDidRequestReminderToRateApp;
- (void)iRateUserDidDeclineToRateApp;
- (void)tokenRefreshNotification:(id)arg1;
- (void)messaging:(id)arg1 didReceiveMessage:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)logMessage:(id)arg1 fromFunction:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)didUpdateDeviceList;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
@property(nonatomic, retain) UIWindow *window; // @synthesize window;
- (void)proceedToForceUpdateUITests;
@property(nonatomic, readonly) _Bool isTestingForceUpdate;
- (void)setupForceUpdateEngine;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)beginFetchingHelloBars;
- (void)setupLinkpulseReferrerFromPushNotification;

@end

