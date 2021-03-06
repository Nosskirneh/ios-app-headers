//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, GFMCanCreateFamilyResponse_BirthdayInfo, GFMPage, GPBEnumArray;

@interface GFMCanCreateFamilyResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool canCreateFamily; // @dynamic canCreateFamily;
@property(retain, nonatomic) GFMPage *errorDescription; // @dynamic errorDescription;
@property(retain, nonatomic) GFMCanCreateFamilyResponse_BirthdayInfo *existingBirthdayInfo; // @dynamic existingBirthdayInfo;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasCanCreateFamily; // @dynamic hasCanCreateFamily;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasExistingBirthdayInfo; // @dynamic hasExistingBirthdayInfo;
@property(retain, nonatomic) GPBEnumArray *unmetPreconditionsArray; // @dynamic unmetPreconditionsArray;
@property(readonly, nonatomic) unsigned long long unmetPreconditionsArray_Count; // @dynamic unmetPreconditionsArray_Count;

@end

