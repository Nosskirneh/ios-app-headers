//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, ParentConsentNotificationDetails;

@interface ARIParentConsentNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ParentConsentNotificationDetails *details; // @dynamic details;
@property(retain, nonatomic) GPBEnumArray *eventTypeArray; // @dynamic eventTypeArray;
@property(readonly, nonatomic) unsigned long long eventTypeArray_Count; // @dynamic eventTypeArray_Count;
@property(nonatomic) _Bool hasDetails; // @dynamic hasDetails;

@end

