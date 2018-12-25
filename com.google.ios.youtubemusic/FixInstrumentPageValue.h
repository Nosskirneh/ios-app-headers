//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, OrchInstrumentActivationFormValue, OrchInstrumentSelectorValue;

@interface FixInstrumentPageValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *dependencyGraphActionToken; // @dynamic dependencyGraphActionToken;
@property(nonatomic) _Bool hasDependencyGraphActionToken; // @dynamic hasDependencyGraphActionToken;
@property(nonatomic) _Bool hasInstrumentActivationFormValue; // @dynamic hasInstrumentActivationFormValue;
@property(nonatomic) _Bool hasInstrumentSelectorValue; // @dynamic hasInstrumentSelectorValue;
@property(retain, nonatomic) OrchInstrumentActivationFormValue *instrumentActivationFormValue; // @dynamic instrumentActivationFormValue;
@property(retain, nonatomic) OrchInstrumentSelectorValue *instrumentSelectorValue; // @dynamic instrumentSelectorValue;
@property(retain, nonatomic) NSMutableArray *legalDocDataArray; // @dynamic legalDocDataArray;
@property(readonly, nonatomic) unsigned long long legalDocDataArray_Count; // @dynamic legalDocDataArray_Count;
@property(retain, nonatomic) NSMutableArray *simpleFormValueArray; // @dynamic simpleFormValueArray;
@property(readonly, nonatomic) unsigned long long simpleFormValueArray_Count; // @dynamic simpleFormValueArray_Count;
@property(retain, nonatomic) NSMutableArray *taxInfoFormValueArray; // @dynamic taxInfoFormValueArray;
@property(readonly, nonatomic) unsigned long long taxInfoFormValueArray_Count; // @dynamic taxInfoFormValueArray_Count;

@end

