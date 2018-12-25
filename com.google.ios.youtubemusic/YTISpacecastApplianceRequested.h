//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTISpacecastApplianceRequested : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasHostname; // @dynamic hasHostname;
@property(nonatomic) _Bool hasLatencyMs; // @dynamic hasLatencyMs;
@property(nonatomic) _Bool hasResponseBytes; // @dynamic hasResponseBytes;
@property(nonatomic) _Bool hasResponseStatus; // @dynamic hasResponseStatus;
@property(nonatomic) _Bool hasRetryCount; // @dynamic hasRetryCount;
@property(copy, nonatomic) NSString *hostname; // @dynamic hostname;
@property(nonatomic) int latencyMs; // @dynamic latencyMs;
@property(nonatomic) int responseBytes; // @dynamic responseBytes;
@property(nonatomic) int responseStatus; // @dynamic responseStatus;
@property(nonatomic) int retryCount; // @dynamic retryCount;

@end
