//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDialData;

@interface YTIMdxSessionStarted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDialData *dialData; // @dynamic dialData;
@property(nonatomic) _Bool hasDialData; // @dynamic hasDialData;
@property(nonatomic) _Bool hasIsReconnectionInProgress; // @dynamic hasIsReconnectionInProgress;
@property(nonatomic) _Bool hasPreviousConnectionState; // @dynamic hasPreviousConnectionState;
@property(nonatomic) _Bool hasSessionType; // @dynamic hasSessionType;
@property(nonatomic) _Bool isReconnectionInProgress; // @dynamic isReconnectionInProgress;
@property(nonatomic) int previousConnectionState; // @dynamic previousConnectionState;
@property(nonatomic) int sessionType; // @dynamic sessionType;

@end
