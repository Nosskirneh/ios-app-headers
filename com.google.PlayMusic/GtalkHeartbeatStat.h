//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GtalkHeartbeatStat : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIntervalMs; // @dynamic hasIntervalMs;
@property(nonatomic) _Bool hasIp; // @dynamic hasIp;
@property(nonatomic) _Bool hasTimeout; // @dynamic hasTimeout;
@property(nonatomic) int intervalMs; // @dynamic intervalMs;
@property(copy, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) _Bool timeout; // @dynamic timeout;

@end

