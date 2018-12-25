//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIThumbnailDetails;

@interface YTITypingStatusUpdateData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(nonatomic) long long clientTimestampMs; // @dynamic clientTimestampMs;
@property(copy, nonatomic) NSString *contactEntityKey; // @dynamic contactEntityKey;
@property(copy, nonatomic) NSString *contactId; // @dynamic contactId;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasClientTimestampMs; // @dynamic hasClientTimestampMs;
@property(nonatomic) _Bool hasContactEntityKey; // @dynamic hasContactEntityKey;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;
@property(nonatomic) _Bool hasShouldShowTyping; // @dynamic hasShouldShowTyping;
@property(nonatomic) _Bool shouldShowTyping; // @dynamic shouldShowTyping;

@end

