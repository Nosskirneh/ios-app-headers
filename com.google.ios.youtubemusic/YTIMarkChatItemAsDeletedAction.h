//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIMarkChatItemAsDeletedAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *deletedStateMessage; // @dynamic deletedStateMessage;
@property(nonatomic) _Bool hasDeletedStateMessage; // @dynamic hasDeletedStateMessage;
@property(nonatomic) _Bool hasShowOriginalContentMessage; // @dynamic hasShowOriginalContentMessage;
@property(nonatomic) _Bool hasTargetItemId; // @dynamic hasTargetItemId;
@property(retain, nonatomic) YTIFormattedString *showOriginalContentMessage; // @dynamic showOriginalContentMessage;
@property(copy, nonatomic) NSString *targetItemId; // @dynamic targetItemId;

@end

