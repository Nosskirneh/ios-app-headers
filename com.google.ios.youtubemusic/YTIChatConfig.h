//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIChatRenamingConfig, YTIChatTypingStatusConfig, YTIGetChatAttachmentConfig;

@interface YTIChatConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIGetChatAttachmentConfig *getChatAttachmentConfig; // @dynamic getChatAttachmentConfig;
@property(nonatomic) _Bool hasGetChatAttachmentConfig; // @dynamic hasGetChatAttachmentConfig;
@property(nonatomic) _Bool hasRenamingConfig; // @dynamic hasRenamingConfig;
@property(nonatomic) _Bool hasTypingStatusConfig; // @dynamic hasTypingStatusConfig;
@property(retain, nonatomic) YTIChatRenamingConfig *renamingConfig; // @dynamic renamingConfig;
@property(retain, nonatomic) YTIChatTypingStatusConfig *typingStatusConfig; // @dynamic typingStatusConfig;

@end
