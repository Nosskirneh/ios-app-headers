//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIRenderer;

@interface YTIShareGroupCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) _Bool getDialog; // @dynamic getDialog;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasGetDialog; // @dynamic hasGetDialog;
@property(nonatomic) _Bool hasShareGroupRenderer; // @dynamic hasShareGroupRenderer;
@property(retain, nonatomic) YTIRenderer *shareGroupRenderer; // @dynamic shareGroupRenderer;

@end

