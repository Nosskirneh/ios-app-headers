//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIGetConversationAttachmentEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *chatBodyEntityKey; // @dynamic chatBodyEntityKey;
@property(nonatomic) _Bool hasChatBodyEntityKey; // @dynamic hasChatBodyEntityKey;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end
