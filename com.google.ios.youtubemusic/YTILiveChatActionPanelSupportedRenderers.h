//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveChatMessageInputRenderer, YTILiveChatRestrictedParticipationRenderer, YTIMessageRenderer;

@interface YTILiveChatActionPanelSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveChatMessageInputRenderer; // @dynamic hasLiveChatMessageInputRenderer;
@property(nonatomic) _Bool hasLiveChatRestrictedParticipationRenderer; // @dynamic hasLiveChatRestrictedParticipationRenderer;
@property(nonatomic) _Bool hasMessageRenderer; // @dynamic hasMessageRenderer;
@property(retain, nonatomic) YTILiveChatMessageInputRenderer *liveChatMessageInputRenderer; // @dynamic liveChatMessageInputRenderer;
@property(retain, nonatomic) YTILiveChatRestrictedParticipationRenderer *liveChatRestrictedParticipationRenderer; // @dynamic liveChatRestrictedParticipationRenderer;
@property(retain, nonatomic) YTIMessageRenderer *messageRenderer; // @dynamic messageRenderer;

@end

