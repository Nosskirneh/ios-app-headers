//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface OrchNumberFormattingScheme : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *decimalSymbol; // @dynamic decimalSymbol;
@property(retain, nonatomic) GPBInt32Array *groupLengthArray; // @dynamic groupLengthArray;
@property(readonly, nonatomic) unsigned long long groupLengthArray_Count; // @dynamic groupLengthArray_Count;
@property(copy, nonatomic) NSString *groupSeparatorSymbol; // @dynamic groupSeparatorSymbol;
@property(nonatomic) _Bool hasDecimalSymbol; // @dynamic hasDecimalSymbol;
@property(nonatomic) _Bool hasGroupSeparatorSymbol; // @dynamic hasGroupSeparatorSymbol;
@property(nonatomic) _Bool hasIsPrefixUnit; // @dynamic hasIsPrefixUnit;
@property(nonatomic) _Bool hasMaxMagnitude; // @dynamic hasMaxMagnitude;
@property(nonatomic) _Bool hasMaxPrecision; // @dynamic hasMaxPrecision;
@property(nonatomic) _Bool hasUnitsSymbol; // @dynamic hasUnitsSymbol;
@property(nonatomic) _Bool isPrefixUnit; // @dynamic isPrefixUnit;
@property(nonatomic) int maxMagnitude; // @dynamic maxMagnitude;
@property(nonatomic) int maxPrecision; // @dynamic maxPrecision;
@property(copy, nonatomic) NSString *unitsSymbol; // @dynamic unitsSymbol;

@end

