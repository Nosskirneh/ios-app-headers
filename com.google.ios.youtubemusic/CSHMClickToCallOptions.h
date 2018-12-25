//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CSHMClickToCallOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool availableNow; // @dynamic availableNow;
@property(copy, nonatomic) NSString *casesCategory; // @dynamic casesCategory;
@property(copy, nonatomic) NSString *casesProduct; // @dynamic casesProduct;
@property(retain, nonatomic) NSMutableArray *daysArray; // @dynamic daysArray;
@property(readonly, nonatomic) unsigned long long daysArray_Count; // @dynamic daysArray_Count;
@property(copy, nonatomic) NSString *estimatedWaitTimeId; // @dynamic estimatedWaitTimeId;
@property(copy, nonatomic) NSString *formId; // @dynamic formId;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) _Bool hasAvailableNow; // @dynamic hasAvailableNow;
@property(nonatomic) _Bool hasCasesCategory; // @dynamic hasCasesCategory;
@property(nonatomic) _Bool hasCasesProduct; // @dynamic hasCasesProduct;
@property(nonatomic) _Bool hasEstimatedWaitTimeId; // @dynamic hasEstimatedWaitTimeId;
@property(nonatomic) _Bool hasFormId; // @dynamic hasFormId;
@property(nonatomic) _Bool hasGroupName; // @dynamic hasGroupName;
@property(nonatomic) _Bool hasTimezone; // @dynamic hasTimezone;
@property(retain, nonatomic) NSMutableArray *hoursArray; // @dynamic hoursArray;
@property(readonly, nonatomic) unsigned long long hoursArray_Count; // @dynamic hoursArray_Count;
@property(copy, nonatomic) NSString *timezone; // @dynamic timezone;

@end

