//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIEntityMutationPayload;

@interface YTIEntityMutation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *entityKey; // @dynamic entityKey;
@property(nonatomic) _Bool hasEntityKey; // @dynamic hasEntityKey;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) YTIEntityMutationPayload *payload; // @dynamic payload;
@property(nonatomic) int type; // @dynamic type;

@end
