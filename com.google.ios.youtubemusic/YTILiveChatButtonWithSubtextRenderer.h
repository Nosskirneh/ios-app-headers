//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonSupportedRenderers, YTIFormattedString;

@interface YTILiveChatButtonWithSubtextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasSubtext; // @dynamic hasSubtext;
@property(retain, nonatomic) YTIFormattedString *subtext; // @dynamic subtext;

@end

