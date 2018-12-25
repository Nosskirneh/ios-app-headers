//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMFamilyMemberProfile, GFMMemberAttributes, GFMMemberSupervisionInfo, GFMUnconfirmedMemberInfo, GPBEnumArray, NSString;

@interface GFMFamilyMember : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsYoungTeen; // @dynamic hasIsYoungTeen;
@property(nonatomic) _Bool hasJoinedTimestampMillis; // @dynamic hasJoinedTimestampMillis;
@property(nonatomic) _Bool hasMemberAttributes; // @dynamic hasMemberAttributes;
@property(nonatomic) _Bool hasMemberRoleLabel; // @dynamic hasMemberRoleLabel;
@property(nonatomic) _Bool hasMemberSupervisionInfo; // @dynamic hasMemberSupervisionInfo;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasUnconfirmedMemberInfo; // @dynamic hasUnconfirmedMemberInfo;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool isYoungTeen; // @dynamic isYoungTeen;
@property(nonatomic) long long joinedTimestampMillis; // @dynamic joinedTimestampMillis;
@property(retain, nonatomic) GFMMemberAttributes *memberAttributes; // @dynamic memberAttributes;
@property(copy, nonatomic) NSString *memberRoleLabel; // @dynamic memberRoleLabel;
@property(retain, nonatomic) GFMMemberSupervisionInfo *memberSupervisionInfo; // @dynamic memberSupervisionInfo;
@property(retain, nonatomic) GPBEnumArray *possibleRoleArray; // @dynamic possibleRoleArray;
@property(readonly, nonatomic) unsigned long long possibleRoleArray_Count; // @dynamic possibleRoleArray_Count;
@property(retain, nonatomic) GFMFamilyMemberProfile *profile; // @dynamic profile;
@property(nonatomic) int role; // @dynamic role;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) GFMUnconfirmedMemberInfo *unconfirmedMemberInfo; // @dynamic unconfirmedMemberInfo;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

