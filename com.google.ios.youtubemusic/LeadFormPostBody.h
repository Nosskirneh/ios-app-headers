//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface LeadFormPostBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLeadMetadata; // @dynamic hasLeadMetadata;
@property(retain, nonatomic) NSMutableArray *leadFormFieldResultsArray; // @dynamic leadFormFieldResultsArray;
@property(readonly, nonatomic) unsigned long long leadFormFieldResultsArray_Count; // @dynamic leadFormFieldResultsArray_Count;
@property(copy, nonatomic) NSString *leadMetadata; // @dynamic leadMetadata;

@end
