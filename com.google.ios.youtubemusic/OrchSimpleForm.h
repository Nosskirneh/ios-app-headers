//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, OrchFormHeader, OrchLayout, OrchLegalMessage;

@interface OrchSimpleForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *attestationNonce; // @dynamic attestationNonce;
@property(retain, nonatomic) NSMutableArray *bottomInfoMessageArray; // @dynamic bottomInfoMessageArray;
@property(readonly, nonatomic) unsigned long long bottomInfoMessageArray_Count; // @dynamic bottomInfoMessageArray_Count;
@property(retain, nonatomic) NSMutableArray *formFieldArray; // @dynamic formFieldArray;
@property(readonly, nonatomic) unsigned long long formFieldArray_Count; // @dynamic formFieldArray_Count;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasAttestationNonce; // @dynamic hasAttestationNonce;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasLayout; // @dynamic hasLayout;
@property(nonatomic) _Bool hasLegalMessage; // @dynamic hasLegalMessage;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchLayout *layout; // @dynamic layout;
@property(retain, nonatomic) OrchLegalMessage *legalMessage; // @dynamic legalMessage;
@property(retain, nonatomic) NSMutableArray *uiFieldGroupingArray; // @dynamic uiFieldGroupingArray;
@property(readonly, nonatomic) unsigned long long uiFieldGroupingArray_Count; // @dynamic uiFieldGroupingArray_Count;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

