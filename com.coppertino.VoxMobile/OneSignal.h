//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OneSignal : NSObject
{
}

+ (id)serviceExtensionTimeWillExpireRequest:(id)arg1 withMutableNotificationContent:(id)arg2;
+ (id)didReceiveNotificationExtensionRequest:(id)arg1 withMutableNotificationContent:(id)arg2;
+ (void)addActionButtonsToExtentionRequest:(id)arg1 withMutableNotificationContent:(id)arg2;
+ (void)syncHashedEmail:(id)arg1;
+ (void)processLocalActionBasedNotification:(id)arg1 identifier:(id)arg2;
+ (_Bool)remoteSilentNotification:(id)arg1 UserInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)didRegisterForRemoteNotifications:(id)arg1 deviceToken:(id)arg2;
+ (void)updateNotificationTypes:(int)arg1;
+ (void)setSubscriptionErrorStatus:(int)arg1;
+ (int)getNotificationTypes;
+ (_Bool)clearBadgeCount:(_Bool)arg1;
+ (void)submitNotificationOpened:(id)arg1;
+ (void)launchWebURL:(id)arg1;
+ (void)handleNotificationOpened:(id)arg1 isActive:(_Bool)arg2 actionType:(unsigned long long)arg3 displayType:(unsigned long long)arg4;
+ (id)checkForProcessedDups:(id)arg1 lastMessageId:(id)arg2;
+ (void)notificationOpened:(id)arg1 isActive:(_Bool)arg2;
+ (void)setLastnonActiveMessageId:(id)arg1;
+ (void)setLastAppActiveMessageId:(id)arg1;
+ (void)sendPurchases:(id)arg1;
+ (_Bool)sendNotificationTypesUpdate;
+ (id)getUsableDeviceToken;
+ (void)registerUserInternal;
+ (void)registerUser;
+ (id)getRegisterQueue;
+ (void)registerUserAfterDelay;
+ (_Bool)shouldRegisterNow;
+ (void)updateLastSessionDateTime;
+ (_Bool)isHighPriorityCall;
+ (void)updateDeviceToken:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)handleDidFailRegisterForRemoteNotification:(id)arg1;
+ (void)promptLocation;
+ (void)setLocationShared:(_Bool)arg1;
+ (void)setSubscription:(_Bool)arg1;
+ (void)enableInAppLaunchURL:(id)arg1;
+ (id)parseNSErrorAsJsonString:(id)arg1;
+ (void)postNotificationWithJsonString:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)postNotification:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)postNotification:(id)arg1;
+ (void)deleteTags:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)deleteTagsWithJsonString:(id)arg1;
+ (void)deleteTags:(id)arg1;
+ (void)deleteTag:(id)arg1;
+ (void)deleteTag:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)getTags:(CDUnknownBlockType)arg1;
+ (void)getTags:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
+ (void)sendTag:(id)arg1 value:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
+ (void)sendTag:(id)arg1 value:(id)arg2;
+ (void)sendTagsToServer;
+ (void)sendTags:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (void)sendTags:(id)arg1;
+ (void)sendTagsWithJsonString:(id)arg1;
+ (void)fireIdsAvailableCallback;
+ (void)IdsAvailable:(CDUnknownBlockType)arg1;
+ (void)removeSubscriptionObserver:(id)arg1;
+ (void)addSubscriptionObserver:(id)arg1;
+ (void)removePermissionObserver:(id)arg1;
+ (void)addPermissionObserver:(id)arg1;
+ (id)getPermissionSubscriptionState;
+ (void)registerForPushNotifications;
+ (void)promptForPushNotificationsWithUserResponse:(CDUnknownBlockType)arg1;
+ (_Bool)registerForAPNsToken;
+ (void)onesignal_Log:(unsigned long long)arg1 message:(id)arg2;
+ (void)setLogLevel:(unsigned long long)arg1 visualLevel:(unsigned long long)arg2;
+ (id)initWithLaunchOptions:(id)arg1 appId:(id)arg2 handleNotificationReceived:(CDUnknownBlockType)arg3 handleNotificationAction:(CDUnknownBlockType)arg4 settings:(id)arg5;
+ (id)initWithLaunchOptions:(id)arg1 appId:(id)arg2 handleNotificationAction:(CDUnknownBlockType)arg3 settings:(id)arg4;
+ (id)initWithLaunchOptions:(id)arg1 appId:(id)arg2 handleNotificationAction:(CDUnknownBlockType)arg3;
+ (id)initWithLaunchOptions:(id)arg1 appId:(id)arg2;
+ (_Bool)coldStartFromTapOnNotification;
+ (void)clearStatics;
+ (void)setWaitingForApnsResponse:(_Bool)arg1;
+ (void)setMSDKType:(id)arg1;
+ (id)mUserId;
+ (id)sdk_semantic_version;
+ (id)sdk_version_raw;
+ (id)app_id;
+ (void)setMSubscriptionStatus:(id)arg1;
+ (struct OSObservable *)subscriptionStateChangesObserver;
+ (struct OSObservable *)permissionStateChangesObserver;
+ (void)setLastSubscriptionState:(id)arg1;
+ (id)lastSubscriptionState;
+ (id)currentSubscriptionState;
+ (void)setLastPermissionState:(id)arg1;
+ (id)lastPermissionState;
+ (id)currentPermissionState;
+ (id)osNotificationSettings;
+ (unsigned long long)inFocusDisplayType;
+ (void)setInFocusDisplayType:(unsigned long long)arg1;
+ (id)httpClient;

@end

