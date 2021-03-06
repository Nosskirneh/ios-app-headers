//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString, YTIRenderer;

@interface YTILiveErrorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool clientMayRetry; // @dynamic clientMayRetry;
@property(nonatomic) unsigned int clientRetryTimeMs; // @dynamic clientRetryTimeMs;
@property(retain, nonatomic) YTIRenderer *errorDialog; // @dynamic errorDialog;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasClientMayRetry; // @dynamic hasClientMayRetry;
@property(nonatomic) _Bool hasClientRetryTimeMs; // @dynamic hasClientRetryTimeMs;
@property(nonatomic) _Bool hasErrorDialog; // @dynamic hasErrorDialog;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasRedirectEndpoint; // @dynamic hasRedirectEndpoint;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) YTICommand *redirectEndpoint; // @dynamic redirectEndpoint;
@property(nonatomic) int type; // @dynamic type;

@end

