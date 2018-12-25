//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIConversationItemSupportedRenderers, YTIShareToContactsParams, YTISharedObjectParams;

@interface YTISendShareToContactsEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasShareToContactsParams; // @dynamic hasShareToContactsParams;
@property(nonatomic) _Bool hasSharedObjectParams; // @dynamic hasSharedObjectParams;
@property(nonatomic) _Bool hasTemplateConversationItem; // @dynamic hasTemplateConversationItem;
@property(retain, nonatomic) YTIShareToContactsParams *shareToContactsParams; // @dynamic shareToContactsParams;
@property(retain, nonatomic) YTISharedObjectParams *sharedObjectParams; // @dynamic sharedObjectParams;
@property(retain, nonatomic) YTIConversationItemSupportedRenderers *templateConversationItem; // @dynamic templateConversationItem;

@end

