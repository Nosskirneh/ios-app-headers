//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIInnerTubeContext, YTIMdxContext;

@interface YTIGetMdxNotificationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *deviceMessagingId; // @dynamic deviceMessagingId;
@property(copy, nonatomic) NSData *deviceMessagingIdInBytes; // @dynamic deviceMessagingIdInBytes;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDeviceMessagingId; // @dynamic hasDeviceMessagingId;
@property(nonatomic) _Bool hasDeviceMessagingIdInBytes; // @dynamic hasDeviceMessagingIdInBytes;
@property(nonatomic) _Bool hasIsLrPersonalizedNotification; // @dynamic hasIsLrPersonalizedNotification;
@property(nonatomic) _Bool hasIsMusicNotification; // @dynamic hasIsMusicNotification;
@property(nonatomic) _Bool hasMdxContext; // @dynamic hasMdxContext;
@property(nonatomic) _Bool isLrPersonalizedNotification; // @dynamic isLrPersonalizedNotification;
@property(nonatomic) _Bool isMusicNotification; // @dynamic isMusicNotification;
@property(retain, nonatomic) YTIMdxContext *mdxContext; // @dynamic mdxContext;

@end

