//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveChatErrorMessageRenderer, YTILiveChatTextActionsErrorMessageRenderer;

@interface YTISendLiveChatMessageErrorSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveChatErrorMessageRenderer; // @dynamic hasLiveChatErrorMessageRenderer;
@property(nonatomic) _Bool hasLiveChatTextActionsErrorMessageRenderer; // @dynamic hasLiveChatTextActionsErrorMessageRenderer;
@property(retain, nonatomic) YTILiveChatErrorMessageRenderer *liveChatErrorMessageRenderer; // @dynamic liveChatErrorMessageRenderer;
@property(retain, nonatomic) YTILiveChatTextActionsErrorMessageRenderer *liveChatTextActionsErrorMessageRenderer; // @dynamic liveChatTextActionsErrorMessageRenderer;

@end
