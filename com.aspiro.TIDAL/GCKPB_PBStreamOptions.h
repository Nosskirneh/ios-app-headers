//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBMutableArray, NSString;

@interface GCKPB_PBStreamOptions : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientInitialTokens; // @dynamic clientInitialTokens;
@property(nonatomic) int clientLogging; // @dynamic clientLogging;
@property(nonatomic) double deadline; // @dynamic deadline;
@property(nonatomic) _Bool deprecated; // @dynamic deprecated;
@property(nonatomic) _Bool endUserCredsRequested; // @dynamic endUserCredsRequested;
@property(nonatomic) _Bool failFast; // @dynamic failFast;
@property(nonatomic) _Bool hasClientInitialTokens; // @dynamic hasClientInitialTokens;
@property(nonatomic) _Bool hasClientLogging; // @dynamic hasClientLogging;
@property(nonatomic) _Bool hasDeadline; // @dynamic hasDeadline;
@property(nonatomic) _Bool hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) _Bool hasEndUserCredsRequested; // @dynamic hasEndUserCredsRequested;
@property(nonatomic) _Bool hasFailFast; // @dynamic hasFailFast;
@property(nonatomic) _Bool hasLogLevel; // @dynamic hasLogLevel;
@property(nonatomic) _Bool hasSecurityLabel; // @dynamic hasSecurityLabel;
@property(nonatomic) _Bool hasSecurityLevel; // @dynamic hasSecurityLevel;
@property(nonatomic) _Bool hasServerInitialTokens; // @dynamic hasServerInitialTokens;
@property(nonatomic) _Bool hasServerLogging; // @dynamic hasServerLogging;
@property(nonatomic) _Bool hasTokenUnit; // @dynamic hasTokenUnit;
@property(nonatomic) _Bool hasUninterpretedOptionArray; // @dynamic hasUninterpretedOptionArray;
@property(nonatomic) int logLevel; // @dynamic logLevel;
@property(retain, nonatomic) NSString *securityLabel; // @dynamic securityLabel;
@property(nonatomic) int securityLevel; // @dynamic securityLevel;
@property(nonatomic) long long serverInitialTokens; // @dynamic serverInitialTokens;
@property(nonatomic) int serverLogging; // @dynamic serverLogging;
@property(nonatomic) int tokenUnit; // @dynamic tokenUnit;
@property(retain, nonatomic) GCKPB_PBMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;

@end

