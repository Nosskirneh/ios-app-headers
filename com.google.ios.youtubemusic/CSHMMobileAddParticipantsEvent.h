//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CSHMMobileAddParticipantsEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *actorParticipantDisplayName; // @dynamic actorParticipantDisplayName;
@property(copy, nonatomic) NSString *actorParticipantId; // @dynamic actorParticipantId;
@property(nonatomic) _Bool hasActorParticipantDisplayName; // @dynamic hasActorParticipantDisplayName;
@property(nonatomic) _Bool hasActorParticipantId; // @dynamic hasActorParticipantId;
@property(retain, nonatomic) NSMutableArray *newParticipantsArray; // @dynamic newParticipantsArray;
@property(readonly, nonatomic) unsigned long long newParticipantsArray_Count; // @dynamic newParticipantsArray_Count;

@end

