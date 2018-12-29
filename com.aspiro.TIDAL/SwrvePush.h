//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSString;

@interface SwrvePush : NSObject <UNUserNotificationCenterDelegate>
{
    CDUnknownFunctionPointerType didRegisterForRemoteNotificationsWithDeviceTokenImpl;
    CDUnknownFunctionPointerType didFailToRegisterForRemoteNotificationsWithErrorImpl;
    CDUnknownFunctionPointerType didReceiveRemoteNotificationImpl;
    NSString *lastProcessedPushId;
}

+ (void)saveInfluencedData:(id)arg1 withPushId:(id)arg2 withAppGroupID:(id)arg3 atDate:(id)arg4;
+ (void)saveInfluencedData:(id)arg1 withPushId:(id)arg2 atDate:(id)arg3;
+ (void)handleRichPushContents:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
+ (void)handleNotificationContent:(id)arg1 withAppGroupIdentifier:(id)arg2 withCompletedContentCallback:(CDUnknownBlockType)arg3;
+ (void)resetSharedInstance;
+ (id)sharedInstanceWithPushDelegate:(id)arg1 andCommonDelegate:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)clearInfluenceDataForPushId:(id)arg1;
- (id)getNow;
- (void)processInfluenceData;
- (void)silentPushReceived:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handlePushDeeplinkString:(id)arg1;
- (void)pushNotificationResponseReceived:(id)arg1 withUserInfo:(id)arg2;
- (void)pushNotificationReceived:(id)arg1;
- (void)deswizzlePushMethods;
- (_Bool)observeSwizzling;
- (void)checkLaunchOptionsForPushData:(id)arg1;
- (void)setPushNotificationsDeviceToken:(id)arg1;
- (void)registerForPushNotifications;
- (void)setResponseDelegate:(id)arg1;
- (void)setCommonDelegate:(id)arg1;
- (void)setPushDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

