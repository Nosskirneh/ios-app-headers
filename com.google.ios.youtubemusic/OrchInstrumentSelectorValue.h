//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, OrchInstrumentFormValue, OrchInstrumentOptionValue;

@interface OrchInstrumentSelectorValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *disabledOptionUiReferenceArray; // @dynamic disabledOptionUiReferenceArray;
@property(readonly, nonatomic) unsigned long long disabledOptionUiReferenceArray_Count; // @dynamic disabledOptionUiReferenceArray_Count;
@property(nonatomic) _Bool hasSelectedOptionUiReference; // @dynamic hasSelectedOptionUiReference;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) GPBInt64Array *hiddenOptionUiReferenceArray; // @dynamic hiddenOptionUiReferenceArray;
@property(readonly, nonatomic) unsigned long long hiddenOptionUiReferenceArray_Count; // @dynamic hiddenOptionUiReferenceArray_Count;
@property(retain, nonatomic) OrchInstrumentFormValue *instrumentFormValue; // @dynamic instrumentFormValue;
@property(readonly, nonatomic) int instrumentOneOfCase; // @dynamic instrumentOneOfCase;
@property(retain, nonatomic) OrchInstrumentOptionValue *instrumentOptionValue; // @dynamic instrumentOptionValue;
@property(nonatomic) long long selectedOptionUiReference; // @dynamic selectedOptionUiReference;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

