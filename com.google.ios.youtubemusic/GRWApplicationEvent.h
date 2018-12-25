//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRWAccessibilityInfo, GRWDeviceStateInfo, NSMutableArray;

@interface GRWApplicationEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWAccessibilityInfo *accessibilityInfo; // @dynamic accessibilityInfo;
@property(nonatomic) long long appFirstUsedTimestampMs; // @dynamic appFirstUsedTimestampMs;
@property(retain, nonatomic) GRWDeviceStateInfo *deviceStateInfo; // @dynamic deviceStateInfo;
@property(nonatomic) _Bool hasAccessibilityInfo; // @dynamic hasAccessibilityInfo;
@property(nonatomic) _Bool hasAppFirstUsedTimestampMs; // @dynamic hasAppFirstUsedTimestampMs;
@property(nonatomic) _Bool hasDeviceStateInfo; // @dynamic hasDeviceStateInfo;
@property(retain, nonatomic) NSMutableArray *permissionStateArray; // @dynamic permissionStateArray;
@property(readonly, nonatomic) unsigned long long permissionStateArray_Count; // @dynamic permissionStateArray_Count;

@end

