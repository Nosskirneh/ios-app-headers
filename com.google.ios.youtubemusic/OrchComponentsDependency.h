//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array;

@interface OrchComponentsDependency : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *affectedComponentIdArray; // @dynamic affectedComponentIdArray;
@property(readonly, nonatomic) unsigned long long affectedComponentIdArray_Count; // @dynamic affectedComponentIdArray_Count;
@property(retain, nonatomic) GPBInt64Array *affectingComponentIdArray; // @dynamic affectingComponentIdArray;
@property(readonly, nonatomic) unsigned long long affectingComponentIdArray_Count; // @dynamic affectingComponentIdArray_Count;
@property(nonatomic) _Bool hasSubjectComponentId; // @dynamic hasSubjectComponentId;
@property(nonatomic) long long subjectComponentId; // @dynamic subjectComponentId;

@end

