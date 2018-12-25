//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface YTIChipCloudRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chipsArray; // @dynamic chipsArray;
@property(readonly, nonatomic) unsigned long long chipsArray_Count; // @dynamic chipsArray_Count;
@property(nonatomic) int collapsedRowCount; // @dynamic collapsedRowCount;
@property(nonatomic) _Bool hasCollapsedRowCount; // @dynamic hasCollapsedRowCount;
@property(nonatomic) _Bool hasHorizontalScrollable; // @dynamic hasHorizontalScrollable;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool horizontalScrollable; // @dynamic horizontalScrollable;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

