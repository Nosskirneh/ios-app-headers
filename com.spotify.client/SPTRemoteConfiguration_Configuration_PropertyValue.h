//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPTRemoteConfiguration_Configuration_PropertyValue_BoolValue, SPTRemoteConfiguration_Configuration_PropertyValue_EnumValue, SPTRemoteConfiguration_Configuration_PropertyValue_IntValue;

@interface SPTRemoteConfiguration_Configuration_PropertyValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_BoolValue *boolValue; // @dynamic boolValue;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *componentId; // @dynamic componentId;
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_EnumValue *enumValue; // @dynamic enumValue;
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_IntValue *intValue; // @dynamic intValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) int structuredValueOneOfCase; // @dynamic structuredValueOneOfCase;

@end

