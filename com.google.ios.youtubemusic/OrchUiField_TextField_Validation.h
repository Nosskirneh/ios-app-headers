//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrchDependentVariable;

@interface OrchUiField_TextField_Validation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchDependentVariable *applyRule; // @dynamic applyRule;
@property(nonatomic) int checksumType; // @dynamic checksumType;
@property(readonly, nonatomic) int conditionOneOfCase; // @dynamic conditionOneOfCase;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasApplyRule; // @dynamic hasApplyRule;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) long long matchingTextFieldUiReference; // @dynamic matchingTextFieldUiReference;
@property(nonatomic) double maximumNumericValue; // @dynamic maximumNumericValue;
@property(nonatomic) double minimumNumericValue; // @dynamic minimumNumericValue;
@property(copy, nonatomic) NSString *regex; // @dynamic regex;

@end

