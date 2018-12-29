//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SwrvePermissions : NSObject
{
}

+ (void)sendPermissionEvent:(id)arg1 withState:(unsigned long long)arg2 withSDK:(id)arg3;
+ (void)requestPushNotifications:(id)arg1 withCallback:(_Bool)arg2;
+ (void)updatePushNotificationSettingsStatus:(id)arg1 andSDK:(id)arg2;
+ (unsigned long long)checkPushNotificationsWithSDK:(id)arg1;
+ (id)pushNotificationsRequest;
+ (void)compareStatusAndQueueEvent:(id)arg1 lastStatus:(id)arg2 currentStatus:(id)arg3 withSDK:(id)arg4;
+ (void)checkPermissionNameAndAddFilters:(id)arg1 to:(id)arg2 withCurrentStatus:(id)arg3;
+ (_Bool)didWeAskForPushPermissionsAlready;
+ (id)currentPermissionFilters;
+ (void)compareStatusAndQueueEventsWithSDK:(id)arg1;
+ (void)bgRefreshStatusToDictionary:(id)arg1;
+ (id)pushAuthorizationWithSDK:(id)arg1;
+ (void)updatePermissionsStatusCache:(id)arg1;
+ (id)currentStatusWithSDK:(id)arg1;
+ (_Bool)processPermissionRequest:(id)arg1 withSDK:(id)arg2;
+ (id)permissionsStatusCache;

@end

