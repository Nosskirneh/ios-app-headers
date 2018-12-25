//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIHeartbeatRequestParams, YTIInnerTubeContext;

@interface YTIHeartbeatRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *cpn; // @dynamic cpn;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCpn; // @dynamic hasCpn;
@property(nonatomic) _Bool hasHeartbeatRequestParams; // @dynamic hasHeartbeatRequestParams;
@property(nonatomic) _Bool hasHeartbeatToken; // @dynamic hasHeartbeatToken;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIHeartbeatRequestParams *heartbeatRequestParams; // @dynamic heartbeatRequestParams;
@property(copy, nonatomic) NSString *heartbeatToken; // @dynamic heartbeatToken;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

