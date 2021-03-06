//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTCAccessibilityNode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *className_p; // @dynamic className_p;
@property(nonatomic) _Bool hasClassName_p; // @dynamic hasClassName_p;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIsAccessibleElement; // @dynamic hasIsAccessibleElement;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasTraits; // @dynamic hasTraits;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *hint; // @dynamic hint;
@property(nonatomic) _Bool isAccessibleElement; // @dynamic isAccessibleElement;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *nodeArray; // @dynamic nodeArray;
@property(readonly, nonatomic) unsigned long long nodeArray_Count; // @dynamic nodeArray_Count;
@property(nonatomic) unsigned long long traits; // @dynamic traits;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

