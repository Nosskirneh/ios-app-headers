//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UNUserNotificationCenter;

@interface SPTApplicationDelegateLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    UNUserNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logMobileDeviceSettings;
- (id)initWithLogCenter:(id)arg1 notificationCenter:(id)arg2;

@end
