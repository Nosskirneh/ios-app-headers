//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIResponseContext;

@interface YTIYPCReviewRecurrenceUpdateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *confirmationsArray; // @dynamic confirmationsArray;
@property(readonly, nonatomic) unsigned long long confirmationsArray_Count; // @dynamic confirmationsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTransactionParams; // @dynamic hasTransactionParams;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSString *transactionParams; // @dynamic transactionParams;

@end

