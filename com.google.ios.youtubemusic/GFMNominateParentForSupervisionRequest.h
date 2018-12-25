//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiRequestHeader, GFMNomineeIdentifier, GPBEnumArray, NSString;

@interface GFMNominateParentForSupervisionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(copy, nonatomic) NSString *ariSessionId; // @dynamic ariSessionId;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasAriSessionId; // @dynamic hasAriSessionId;
@property(nonatomic) _Bool hasNomineeIdentifier; // @dynamic hasNomineeIdentifier;
@property(nonatomic) _Bool hasSupervisionType; // @dynamic hasSupervisionType;
@property(retain, nonatomic) GFMNomineeIdentifier *nomineeIdentifier; // @dynamic nomineeIdentifier;
@property(retain, nonatomic) GPBEnumArray *providedConsentArray; // @dynamic providedConsentArray;
@property(readonly, nonatomic) unsigned long long providedConsentArray_Count; // @dynamic providedConsentArray_Count;
@property(nonatomic) int supervisionType; // @dynamic supervisionType;

@end

