//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIIosPushNotificationRenderer_NotificationAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *backgroundEndpoint; // @dynamic backgroundEndpoint;
@property(retain, nonatomic) YTICommand *clickTrackingEndpoint; // @dynamic clickTrackingEndpoint;
@property(nonatomic) _Bool hasBackgroundEndpoint; // @dynamic hasBackgroundEndpoint;
@property(nonatomic) _Bool hasClickTrackingEndpoint; // @dynamic hasClickTrackingEndpoint;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;

@end
