//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIGetUploadFeedbackRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(retain, nonatomic) NSMutableArray *idsArray; // @dynamic idsArray;
@property(readonly, nonatomic) unsigned long long idsArray_Count; // @dynamic idsArray_Count;

@end

