//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, OrchLegalMessage;

@interface OrchLegalMessageSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchLegalMessage *defaultMessage; // @dynamic defaultMessage;
@property(nonatomic) _Bool hasDefaultMessage; // @dynamic hasDefaultMessage;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) NSMutableArray *messageByCountryArray; // @dynamic messageByCountryArray;
@property(readonly, nonatomic) unsigned long long messageByCountryArray_Count; // @dynamic messageByCountryArray_Count;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

