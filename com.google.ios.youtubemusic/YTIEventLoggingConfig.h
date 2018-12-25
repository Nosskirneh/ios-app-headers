//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIEventLoggingRetryConfig;

@interface YTIEventLoggingConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasIosExperimentalControllerEnabled; // @dynamic hasIosExperimentalControllerEnabled;
@property(nonatomic) _Bool hasMaxAgeHours; // @dynamic hasMaxAgeHours;
@property(nonatomic) _Bool hasPayloadRetryEnabled; // @dynamic hasPayloadRetryEnabled;
@property(nonatomic) _Bool hasRequestRetryEnabled; // @dynamic hasRequestRetryEnabled;
@property(nonatomic) _Bool hasRetryConfig; // @dynamic hasRetryConfig;
@property(nonatomic) _Bool hasSerialExecutorEnabled; // @dynamic hasSerialExecutorEnabled;
@property(nonatomic) _Bool iosExperimentalControllerEnabled; // @dynamic iosExperimentalControllerEnabled;
@property(nonatomic) int maxAgeHours; // @dynamic maxAgeHours;
@property(retain, nonatomic) NSMutableArray *payloadPoliciesArray; // @dynamic payloadPoliciesArray;
@property(readonly, nonatomic) unsigned long long payloadPoliciesArray_Count; // @dynamic payloadPoliciesArray_Count;
@property(nonatomic) _Bool payloadRetryEnabled; // @dynamic payloadRetryEnabled;
@property(nonatomic) _Bool requestRetryEnabled; // @dynamic requestRetryEnabled;
@property(retain, nonatomic) YTIEventLoggingRetryConfig *retryConfig; // @dynamic retryConfig;
@property(nonatomic) _Bool serialExecutorEnabled; // @dynamic serialExecutorEnabled;

@end
