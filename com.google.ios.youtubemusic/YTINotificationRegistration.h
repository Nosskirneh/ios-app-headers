//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTINotificationRegistration_APNSRegistration, YTINotificationRegistration_ChromeRegistration, YTINotificationRegistration_EmailRegistration, YTINotificationRegistration_GCMRegistration;

@interface YTINotificationRegistration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTINotificationRegistration_APNSRegistration *apnsRegistration; // @dynamic apnsRegistration;
@property(retain, nonatomic) YTINotificationRegistration_ChromeRegistration *chromeRegistration; // @dynamic chromeRegistration;
@property(retain, nonatomic) YTINotificationRegistration_EmailRegistration *emailRegistration; // @dynamic emailRegistration;
@property(retain, nonatomic) YTINotificationRegistration_GCMRegistration *gcmRegistration; // @dynamic gcmRegistration;
@property(nonatomic) _Bool hasApnsRegistration; // @dynamic hasApnsRegistration;
@property(nonatomic) _Bool hasChromeRegistration; // @dynamic hasChromeRegistration;
@property(nonatomic) _Bool hasEmailRegistration; // @dynamic hasEmailRegistration;
@property(nonatomic) _Bool hasGcmRegistration; // @dynamic hasGcmRegistration;

@end
