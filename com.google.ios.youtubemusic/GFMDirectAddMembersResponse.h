//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, NSMutableArray;

@interface GFMDirectAddMembersResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) NSMutableArray *directAddInfosArray; // @dynamic directAddInfosArray;
@property(readonly, nonatomic) unsigned long long directAddInfosArray_Count; // @dynamic directAddInfosArray_Count;
@property(retain, nonatomic) NSMutableArray *failureInfosArray; // @dynamic failureInfosArray;
@property(readonly, nonatomic) unsigned long long failureInfosArray_Count; // @dynamic failureInfosArray_Count;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;

@end

