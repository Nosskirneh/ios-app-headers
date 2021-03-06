//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GRWAndroidOnboardingEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *customEventParam; // @dynamic customEventParam;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) int gdsid; // @dynamic gdsid;
@property(nonatomic) _Bool hasCustomEventParam; // @dynamic hasCustomEventParam;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasGdsid; // @dynamic hasGdsid;
@property(nonatomic) _Bool hasNotificationAction; // @dynamic hasNotificationAction;
@property(nonatomic) _Bool hasPackageName; // @dynamic hasPackageName;
@property(nonatomic) int notificationAction; // @dynamic notificationAction;
@property(copy, nonatomic) NSString *packageName; // @dynamic packageName;

@end

