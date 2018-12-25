//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIKeyValuePair : GPBMessage
{
}

+ (id)descriptor;
+ (id)pairWithKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(nonatomic) double floatValue; // @dynamic floatValue;
@property(retain, nonatomic) YTIFormattedString *formattedStringValue; // @dynamic formattedStringValue;
@property(nonatomic) _Bool hasBoolValue; // @dynamic hasBoolValue;
@property(nonatomic) _Bool hasFloatValue; // @dynamic hasFloatValue;
@property(nonatomic) _Bool hasFormattedStringValue; // @dynamic hasFormattedStringValue;
@property(nonatomic) _Bool hasIntValue; // @dynamic hasIntValue;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) int intValue; // @dynamic intValue;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

