//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface OrchDynamicListValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) NSMutableArray *itemValueArray; // @dynamic itemValueArray;
@property(readonly, nonatomic) unsigned long long itemValueArray_Count; // @dynamic itemValueArray_Count;
@property(retain, nonatomic) NSMutableArray *itemValueDeprecatedArray; // @dynamic itemValueDeprecatedArray;
@property(readonly, nonatomic) unsigned long long itemValueDeprecatedArray_Count; // @dynamic itemValueDeprecatedArray_Count;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

