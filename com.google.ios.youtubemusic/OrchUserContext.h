//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface OrchUserContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool anonymous; // @dynamic anonymous;
@property(copy, nonatomic) NSString *assertedClientMdb; // @dynamic assertedClientMdb;
@property(nonatomic) long long gaiaId; // @dynamic gaiaId;
@property(nonatomic) _Bool hasAssertedClientMdb; // @dynamic hasAssertedClientMdb;
@property(nonatomic) _Bool hasImpersonatedUserGaiaId; // @dynamic hasImpersonatedUserGaiaId;
@property(nonatomic) _Bool impersonatedUserGaiaId; // @dynamic impersonatedUserGaiaId;
@property(copy, nonatomic) NSString *ldap; // @dynamic ldap;
@property(readonly, nonatomic) int userOneOfCase; // @dynamic userOneOfCase;

@end
