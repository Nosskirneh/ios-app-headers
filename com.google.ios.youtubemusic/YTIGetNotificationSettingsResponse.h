//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTINotificationRegistrationSupportedConfigs, YTIResponseContext;

@interface YTIGetNotificationSettingsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRegistration; // @dynamic hasRegistration;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTINotificationRegistrationSupportedConfigs *registration; // @dynamic registration;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

