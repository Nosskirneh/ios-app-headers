//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIZeroStepChannelCreationParams;

@interface YTIChannelCreationServiceEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *channelCreationToken; // @dynamic channelCreationToken;
@property(nonatomic) _Bool hasChannelCreationToken; // @dynamic hasChannelCreationToken;
@property(nonatomic) _Bool hasZeroStepChannelCreationParams; // @dynamic hasZeroStepChannelCreationParams;
@property(retain, nonatomic) YTIZeroStepChannelCreationParams *zeroStepChannelCreationParams; // @dynamic zeroStepChannelCreationParams;

@end

