//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface YTISimpleTextSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLayoutStyle; // @dynamic hasLayoutStyle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int layoutStyle; // @dynamic layoutStyle;
@property(retain, nonatomic) NSMutableArray *linesArray; // @dynamic linesArray;
@property(readonly, nonatomic) unsigned long long linesArray_Count; // @dynamic linesArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

