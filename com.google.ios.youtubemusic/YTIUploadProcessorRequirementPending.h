//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIUploadInfo;

@interface YTIUploadProcessorRequirementPending : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequirementType; // @dynamic hasRequirementType;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUploadInfo; // @dynamic hasUploadInfo;
@property(nonatomic) int requirementType; // @dynamic requirementType;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) YTIUploadInfo *uploadInfo; // @dynamic uploadInfo;

@end

