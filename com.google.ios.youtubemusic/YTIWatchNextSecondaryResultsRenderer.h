//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface YTIWatchNextSecondaryResultsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

