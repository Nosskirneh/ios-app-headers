//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSString;

@interface GtalkHeartbeatConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIntervalMs; // @dynamic hasIntervalMs;
@property(nonatomic) _Bool hasIp; // @dynamic hasIp;
@property(nonatomic) _Bool hasUploadStat; // @dynamic hasUploadStat;
@property(nonatomic) int intervalMs; // @dynamic intervalMs;
@property(copy, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) _Bool uploadStat; // @dynamic uploadStat;

@end

