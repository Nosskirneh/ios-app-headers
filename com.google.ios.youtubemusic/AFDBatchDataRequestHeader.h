//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AFDClientInfo, EncryptedSelectedExperiments, MessageSet, NSData, NSMutableArray, NSString, RequestQoS;

@interface AFDBatchDataRequestHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AFDClientInfo *clientInfo; // @dynamic clientInfo;
@property(copy, nonatomic) NSString *consistencyTokenJar; // @dynamic consistencyTokenJar;
@property(retain, nonatomic) NSMutableArray *consistencyTokenJarsArray; // @dynamic consistencyTokenJarsArray;
@property(readonly, nonatomic) unsigned long long consistencyTokenJarsArray_Count; // @dynamic consistencyTokenJarsArray_Count;
@property(retain, nonatomic) MessageSet *customExtensions; // @dynamic customExtensions;
@property(copy, nonatomic) NSString *effectiveUser; // @dynamic effectiveUser;
@property(retain, nonatomic) EncryptedSelectedExperiments *encryptedSelectedExperiments; // @dynamic encryptedSelectedExperiments;
@property(copy, nonatomic) NSString *experimentOverride; // @dynamic experimentOverride;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasConsistencyTokenJar; // @dynamic hasConsistencyTokenJar;
@property(nonatomic) _Bool hasCustomExtensions; // @dynamic hasCustomExtensions;
@property(nonatomic) _Bool hasEffectiveUser; // @dynamic hasEffectiveUser;
@property(nonatomic) _Bool hasEncryptedSelectedExperiments; // @dynamic hasEncryptedSelectedExperiments;
@property(nonatomic) _Bool hasExperimentOverride; // @dynamic hasExperimentOverride;
@property(nonatomic) _Bool hasRequestQos; // @dynamic hasRequestQos;
@property(nonatomic) _Bool hasSocialClientBytes; // @dynamic hasSocialClientBytes;
@property(retain, nonatomic) RequestQoS *requestQos; // @dynamic requestQos;
@property(copy, nonatomic) NSData *socialClientBytes; // @dynamic socialClientBytes;

@end

