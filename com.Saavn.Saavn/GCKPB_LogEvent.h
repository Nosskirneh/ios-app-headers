//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_ActiveExperiments, GCKPB_AppUsage1pLogEvent, GCKPB_ExperimentIds, GCKPB_PBMutableArray, GCKPB_PlayStoreLogEvent, NSData, NSString;

@interface GCKPB_LogEvent : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_AppUsage1pLogEvent *appUsage1P; // @dynamic appUsage1P;
@property(retain, nonatomic) NSData *clientVe; // @dynamic clientVe;
@property(nonatomic) int eventCode; // @dynamic eventCode;
@property(nonatomic) int eventFlowId; // @dynamic eventFlowId;
@property(nonatomic) long long eventTimeMs; // @dynamic eventTimeMs;
@property(nonatomic) long long eventUptimeMs; // @dynamic eventUptimeMs;
@property(retain, nonatomic) GCKPB_ActiveExperiments *exp; // @dynamic exp;
@property(retain, nonatomic) GCKPB_ExperimentIds *experimentIds; // @dynamic experimentIds;
@property(nonatomic) _Bool hasAppUsage1P; // @dynamic hasAppUsage1P;
@property(nonatomic) _Bool hasClientVe; // @dynamic hasClientVe;
@property(nonatomic) _Bool hasEventCode; // @dynamic hasEventCode;
@property(nonatomic) _Bool hasEventFlowId; // @dynamic hasEventFlowId;
@property(nonatomic) _Bool hasEventTimeMs; // @dynamic hasEventTimeMs;
@property(nonatomic) _Bool hasEventUptimeMs; // @dynamic hasEventUptimeMs;
@property(nonatomic) _Bool hasExp; // @dynamic hasExp;
@property(nonatomic) _Bool hasExperimentIds; // @dynamic hasExperimentIds;
@property(nonatomic) _Bool hasInternalEvent; // @dynamic hasInternalEvent;
@property(nonatomic) _Bool hasIsUserInitiated; // @dynamic hasIsUserInitiated;
@property(nonatomic) _Bool hasSourceExtension; // @dynamic hasSourceExtension;
@property(nonatomic) _Bool hasSourceExtensionJs; // @dynamic hasSourceExtensionJs;
@property(nonatomic) _Bool hasSourceExtensionJson; // @dynamic hasSourceExtensionJson;
@property(nonatomic) _Bool hasStore; // @dynamic hasStore;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) _Bool hasTestCodeArray; // @dynamic hasTestCodeArray;
@property(nonatomic) _Bool hasTestId; // @dynamic hasTestId;
@property(nonatomic) _Bool hasTimezoneOffsetSeconds; // @dynamic hasTimezoneOffsetSeconds;
@property(nonatomic) _Bool hasValueArray; // @dynamic hasValueArray;
@property(nonatomic) int internalEvent; // @dynamic internalEvent;
@property(nonatomic) _Bool isUserInitiated; // @dynamic isUserInitiated;
@property(retain, nonatomic) NSData *sourceExtension; // @dynamic sourceExtension;
@property(retain, nonatomic) NSData *sourceExtensionJs; // @dynamic sourceExtensionJs;
@property(retain, nonatomic) NSData *sourceExtensionJson; // @dynamic sourceExtensionJson;
@property(retain, nonatomic) GCKPB_PlayStoreLogEvent *store; // @dynamic store;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) GCKPB_PBMutableArray *testCodeArray; // @dynamic testCodeArray;
@property(retain, nonatomic) NSString *testId; // @dynamic testId;
@property(nonatomic) long long timezoneOffsetSeconds; // @dynamic timezoneOffsetSeconds;
@property(retain, nonatomic) GCKPB_PBMutableArray *valueArray; // @dynamic valueArray;

@end

