//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNotificationCenter, NSUserDefaults, UIApplication, UNUserNotificationCenter;
@protocol SPTGaiaHomeDeviceFlagsProvider, SPTGaiaHomeDeviceLocalNotificationHandler, SPTUserNotificationsRegistrar;

@interface SPTGaiaHomeDeviceLocalNotificationManager : NSObject
{
    id <SPTGaiaHomeDeviceLocalNotificationHandler> _homeDeviceLocalNotificationHandler;
    id <SPTUserNotificationsRegistrar> _notificationsRegistrar;
    UNUserNotificationCenter *_userNotificationCenter;
    NSNotificationCenter *_notificationCenter;
    NSUserDefaults *_userDefaults;
    id <SPTGaiaHomeDeviceFlagsProvider> _homeDeviceFlagsProvider;
    UIApplication *_application;
    NSDictionary *_actionIdentifierMap;
}

@property(retain, nonatomic) NSDictionary *actionIdentifierMap; // @synthesize actionIdentifierMap=_actionIdentifierMap;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTGaiaHomeDeviceFlagsProvider> homeDeviceFlagsProvider; // @synthesize homeDeviceFlagsProvider=_homeDeviceFlagsProvider;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(readonly, nonatomic) id <SPTUserNotificationsRegistrar> notificationsRegistrar; // @synthesize notificationsRegistrar=_notificationsRegistrar;
@property(nonatomic) __weak id <SPTGaiaHomeDeviceLocalNotificationHandler> homeDeviceLocalNotificationHandler; // @synthesize homeDeviceLocalNotificationHandler=_homeDeviceLocalNotificationHandler;
- (void).cxx_destruct;
- (void)applicationDidReceiveNotificationResponse:(id)arg1;
- (void)removeLastLocalNotification;
- (id)lastLocalNotification;
- (void)registerNotificationSettings;
- (void)fireLocalNotificationWithType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 notificationCenter:(id)arg2 notificationsRegistrar:(id)arg3 userNotificationCenter:(id)arg4 homeDeviceFlagsProvider:(id)arg5 application:(id)arg6;

@end

