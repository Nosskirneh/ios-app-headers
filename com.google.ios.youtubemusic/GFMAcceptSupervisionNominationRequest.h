//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiRequestHeader, NSString;

@interface GFMAcceptSupervisionNominationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(copy, nonatomic) NSString *ariSessionId; // @dynamic ariSessionId;
@property(copy, nonatomic) NSString *consentOrderId; // @dynamic consentOrderId;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasAriSessionId; // @dynamic hasAriSessionId;
@property(nonatomic) _Bool hasConsentOrderId; // @dynamic hasConsentOrderId;
@property(nonatomic) _Bool hasNominationToken; // @dynamic hasNominationToken;
@property(copy, nonatomic) NSString *nominationToken; // @dynamic nominationToken;

@end

