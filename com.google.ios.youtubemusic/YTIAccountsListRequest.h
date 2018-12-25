//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIInnerTubeContext;

@interface YTIAccountsListRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int callCircumstance; // @dynamic callCircumstance;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasCallCircumstance; // @dynamic hasCallCircumstance;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasNextNavendpoint; // @dynamic hasNextNavendpoint;
@property(nonatomic) _Bool hasNextPageToken; // @dynamic hasNextPageToken;
@property(nonatomic) _Bool hasPersonaVersion; // @dynamic hasPersonaVersion;
@property(retain, nonatomic) YTICommand *nextNavendpoint; // @dynamic nextNavendpoint;
@property(copy, nonatomic) NSData *nextPageToken; // @dynamic nextPageToken;
@property(copy, nonatomic) NSData *personaVersion; // @dynamic personaVersion;
@property(retain, nonatomic) NSMutableArray *supportedTokensArray; // @dynamic supportedTokensArray;
@property(readonly, nonatomic) unsigned long long supportedTokensArray_Count; // @dynamic supportedTokensArray_Count;

@end

