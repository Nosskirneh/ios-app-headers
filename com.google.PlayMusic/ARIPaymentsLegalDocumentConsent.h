//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array;

@interface ARIPaymentsLegalDocumentConsent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewValue; // @dynamic hasNewValue;
@property(retain, nonatomic) GPBInt64Array *legalDocumentIdArray; // @dynamic legalDocumentIdArray;
@property(readonly, nonatomic) unsigned long long legalDocumentIdArray_Count; // @dynamic legalDocumentIdArray_Count;
@property(nonatomic) int newValue; // @dynamic newValue;

@end
