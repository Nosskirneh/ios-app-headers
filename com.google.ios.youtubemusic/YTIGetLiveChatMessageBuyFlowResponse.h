//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveChatMessageBuyFlowSupportedRenderers, YTIResponseContext;

@interface YTIGetLiveChatMessageBuyFlowResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTILiveChatMessageBuyFlowSupportedRenderers *contents; // @dynamic contents;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

