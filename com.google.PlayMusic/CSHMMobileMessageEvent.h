//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CSHMMobileMessageEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionResultsArray; // @dynamic actionResultsArray;
@property(readonly, nonatomic) unsigned long long actionResultsArray_Count; // @dynamic actionResultsArray_Count;
@property(nonatomic) _Bool hasMessageContent; // @dynamic hasMessageContent;
@property(nonatomic) _Bool hasMessageType; // @dynamic hasMessageType;
@property(nonatomic) _Bool hasParticipantDisplayName; // @dynamic hasParticipantDisplayName;
@property(nonatomic) _Bool hasParticipantId; // @dynamic hasParticipantId;
@property(copy, nonatomic) NSString *messageContent; // @dynamic messageContent;
@property(nonatomic) int messageType; // @dynamic messageType;
@property(copy, nonatomic) NSString *participantDisplayName; // @dynamic participantDisplayName;
@property(copy, nonatomic) NSString *participantId; // @dynamic participantId;

@end

