//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SFSPPDAutocompleteDisplayableFieldLite : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) int index; // @dynamic index;
@property(retain, nonatomic) NSMutableArray *matchingSubstringsArray; // @dynamic matchingSubstringsArray;
@property(readonly, nonatomic) unsigned long long matchingSubstringsArray_Count; // @dynamic matchingSubstringsArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

