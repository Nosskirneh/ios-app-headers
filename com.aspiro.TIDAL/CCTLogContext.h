//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CCTClientInfo, NSString;

@interface CCTLogContext : GPBMessage
{
}

+ (id)descriptor;
- (id)hashForFilePath;

// Remaining properties
@property(retain, nonatomic) CCTClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasIsAnonymous; // @dynamic hasIsAnonymous;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasPseudonymousId; // @dynamic hasPseudonymousId;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(nonatomic) _Bool isAnonymous; // @dynamic isAnonymous;
@property(nonatomic) int logSource; // @dynamic logSource;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(copy, nonatomic) NSString *pseudonymousId; // @dynamic pseudonymousId;
@property(nonatomic) int qosTier; // @dynamic qosTier;

@end

