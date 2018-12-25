//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMFamilyMemberProfile, GFMInviteeIdentifier, NSString;

@interface GFMInvitation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientCorrelationId; // @dynamic clientCorrelationId;
@property(nonatomic) _Bool hasClientCorrelationId; // @dynamic hasClientCorrelationId;
@property(nonatomic) _Bool hasInvitationId; // @dynamic hasInvitationId;
@property(nonatomic) _Bool hasInvitationStatusLong; // @dynamic hasInvitationStatusLong;
@property(nonatomic) _Bool hasInvitationStatusShort; // @dynamic hasInvitationStatusShort;
@property(nonatomic) _Bool hasInvitationText; // @dynamic hasInvitationText;
@property(nonatomic) _Bool hasInvitedRole; // @dynamic hasInvitedRole;
@property(nonatomic) _Bool hasInvitedTimestampMillis; // @dynamic hasInvitedTimestampMillis;
@property(nonatomic) _Bool hasInviteeIdentifier; // @dynamic hasInviteeIdentifier;
@property(nonatomic) _Bool hasInviteeProfile; // @dynamic hasInviteeProfile;
@property(nonatomic) _Bool hasNotificationMode; // @dynamic hasNotificationMode;
@property(nonatomic) _Bool hasRequesterProductId; // @dynamic hasRequesterProductId;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasValidUntilTimestampMillis; // @dynamic hasValidUntilTimestampMillis;
@property(copy, nonatomic) NSString *invitationId; // @dynamic invitationId;
@property(copy, nonatomic) NSString *invitationStatusLong; // @dynamic invitationStatusLong;
@property(copy, nonatomic) NSString *invitationStatusShort; // @dynamic invitationStatusShort;
@property(copy, nonatomic) NSString *invitationText; // @dynamic invitationText;
@property(nonatomic) int invitedRole; // @dynamic invitedRole;
@property(nonatomic) long long invitedTimestampMillis; // @dynamic invitedTimestampMillis;
@property(retain, nonatomic) GFMInviteeIdentifier *inviteeIdentifier; // @dynamic inviteeIdentifier;
@property(retain, nonatomic) GFMFamilyMemberProfile *inviteeProfile; // @dynamic inviteeProfile;
@property(nonatomic) int notificationMode; // @dynamic notificationMode;
@property(copy, nonatomic) NSString *requesterProductId; // @dynamic requesterProductId;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) long long validUntilTimestampMillis; // @dynamic validUntilTimestampMillis;

@end

