//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIInnerTubeContext;

@interface YTIGetPushNotificationDialogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasLastTimeAskedSec; // @dynamic hasLastTimeAskedSec;
@property(nonatomic) _Bool hasSendToSettings; // @dynamic hasSendToSettings;
@property(nonatomic) long long lastTimeAskedSec; // @dynamic lastTimeAskedSec;
@property(nonatomic) _Bool sendToSettings; // @dynamic sendToSettings;

@end

