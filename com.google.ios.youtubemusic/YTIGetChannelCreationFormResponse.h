//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIChannelCreationSupportedRenderers, YTICommand, YTIResponseContext;

@interface YTIGetChannelCreationFormResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChannelCreationSupportedRenderers *channelCreation; // @dynamic channelCreation;
@property(nonatomic) _Bool hasChannelCreation; // @dynamic hasChannelCreation;
@property(nonatomic) _Bool hasRedirectEndpoint; // @dynamic hasRedirectEndpoint;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTICommand *redirectEndpoint; // @dynamic redirectEndpoint;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end
