//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEmojiPickerRenderer, YTILiveChatCreatorSupportRenderer, YTILiveChatProductPickerRenderer;

@interface YTILiveChatMessageInputPickerSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEmojiPickerRenderer *emojiPickerRenderer; // @dynamic emojiPickerRenderer;
@property(nonatomic) _Bool hasEmojiPickerRenderer; // @dynamic hasEmojiPickerRenderer;
@property(nonatomic) _Bool hasLiveChatCreatorSupportRenderer; // @dynamic hasLiveChatCreatorSupportRenderer;
@property(nonatomic) _Bool hasLiveChatProductPickerRenderer; // @dynamic hasLiveChatProductPickerRenderer;
@property(retain, nonatomic) YTILiveChatCreatorSupportRenderer *liveChatCreatorSupportRenderer; // @dynamic liveChatCreatorSupportRenderer;
@property(retain, nonatomic) YTILiveChatProductPickerRenderer *liveChatProductPickerRenderer; // @dynamic liveChatProductPickerRenderer;

@end

