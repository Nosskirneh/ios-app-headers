//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "PDLPersonInAppNotificationTargetOriginatingField-Protocol.h"

@class NSArray, NSString;

@interface PDLPersonInAppNotificationTargetOriginatingField : GPBMessage <PDLPersonInAppNotificationTargetOriginatingField>
{
}

+ (id)descriptor;
@property(retain, nonatomic) NSArray *matchingInfoArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int fieldIndex; // @dynamic fieldIndex;
@property(nonatomic) int fieldType; // @dynamic fieldType;
@property(nonatomic) _Bool hasFieldIndex; // @dynamic hasFieldIndex;
@property(nonatomic) _Bool hasFieldType; // @dynamic hasFieldType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

