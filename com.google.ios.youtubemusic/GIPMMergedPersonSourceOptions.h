//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPMCertificateParams, GIPMDataJoinParams, NSMutableArray;

@interface GIPMMergedPersonSourceOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPMCertificateParams *certificateParams; // @dynamic certificateParams;
@property(retain, nonatomic) GIPMDataJoinParams *dataJoinParams; // @dynamic dataJoinParams;
@property(nonatomic) _Bool hasCertificateParams; // @dynamic hasCertificateParams;
@property(nonatomic) _Bool hasDataJoinParams; // @dynamic hasDataJoinParams;
@property(nonatomic) _Bool includeAccountLocale; // @dynamic includeAccountLocale;
@property(retain, nonatomic) NSMutableArray *includeAffinityArray; // @dynamic includeAffinityArray;
@property(readonly, nonatomic) unsigned long long includeAffinityArray_Count; // @dynamic includeAffinityArray_Count;
@property(nonatomic) _Bool includeMuteState; // @dynamic includeMuteState;

@end
