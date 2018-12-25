//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SKTRecipientMetadata;

@interface SKTSendTarget : GPBMessage
{
}

+ (id)descriptor;
+ (unsigned long long)methodTypeFromSendTargetType:(int)arg1;
+ (int)sendTargetTypeFromOriginatingFieldType:(long long)arg1;
+ (int)sendTargetTypeFromContactType:(unsigned long long)arg1;
+ (id)sendTargetFromContact:(id)arg1 forClientId:(int)arg2;
+ (id)selectedSendTargetsFromContacts:(id)arg1 forClientId:(int)arg2;
- (id)convertToSendKitContactMethod;
- (id)convertToSendKitContact;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) SKTRecipientMetadata *metadata; // @dynamic metadata;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

