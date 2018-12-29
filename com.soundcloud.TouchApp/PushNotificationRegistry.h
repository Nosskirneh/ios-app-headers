//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Appboy, NSUserDefaults, PushRegistrationApi, UIApplication, UNUserNotificationCenter;
@protocol _TtP4Core10TechLogger_;

@interface PushNotificationRegistry : NSObject
{
    UIApplication *_application;
    Appboy *_appboy;
    NSUserDefaults *_userDefaults;
    PushRegistrationApi *_pushRegistrationApi;
    id <_TtP4Core10TechLogger_> _techLogger;
    UNUserNotificationCenter *_userNotificationCenter;
}

@property(readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) PushRegistrationApi *pushRegistrationApi; // @synthesize pushRegistrationApi=_pushRegistrationApi;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) Appboy *appboy; // @synthesize appboy=_appboy;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (_Bool)shouldUploadDeviceToken:(id)arg1;
- (void)uploadPushTokenIfNeeded:(id)arg1;
- (void)storePushTokenLocally:(id)arg1;
- (id)deviceToken;
- (void)registerDeviceToken:(id)arg1;
- (void)registerForRemoteNotifications;
- (id)initWithApplication:(id)arg1 appboy:(id)arg2 userDefaults:(id)arg3 pushRegistrationApi:(id)arg4 techLogger:(id)arg5 userNotificationCenter:(id)arg6;
- (id)init;

@end
