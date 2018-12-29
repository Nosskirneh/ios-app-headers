//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface SCDeviceManager : NSObject
{
    NSUserDefaults *_userDefaults;
}

@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)lastOnlineDate;
- (long long)remainingDaysBeforeSubscriptionExpires:(long long)arg1;
- (_Bool)deviceWasOfflineLongerThanThreshold:(long long)arg1;
- (_Bool)isForceAuthPermitted;
- (_Bool)isDeviceAuthorized;
- (void)resetDeviceManagement;
- (void)updateDeviceManagement:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end
