//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIThumbnailDetails;

@interface YTIConnectionShelfEmptyRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *detailsArray; // @dynamic detailsArray;
@property(readonly, nonatomic) unsigned long long detailsArray_Count; // @dynamic detailsArray_Count;
@property(nonatomic) _Bool hasIllustration; // @dynamic hasIllustration;
@property(retain, nonatomic) YTIThumbnailDetails *illustration; // @dynamic illustration;

@end

