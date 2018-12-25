//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIBlockFlowItemSupportedRenderers, YTIButtonSupportedRenderers, YTICommand, YTIFlowProgressSupportedRenderers;

@interface YTIBlockFlowItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBlockFlowItemSupportedRenderers *block; // @dynamic block;
@property(nonatomic) int docking; // @dynamic docking;
@property(nonatomic) _Bool hasBlock; // @dynamic hasBlock;
@property(nonatomic) _Bool hasDocking; // @dynamic hasDocking;
@property(nonatomic) _Bool hasNextDestination; // @dynamic hasNextDestination;
@property(nonatomic) _Bool hasPreviousButton; // @dynamic hasPreviousButton;
@property(nonatomic) _Bool hasProgressMeter; // @dynamic hasProgressMeter;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *nextDestination; // @dynamic nextDestination;
@property(retain, nonatomic) NSMutableArray *onSuccessEndpointsArray; // @dynamic onSuccessEndpointsArray;
@property(readonly, nonatomic) unsigned long long onSuccessEndpointsArray_Count; // @dynamic onSuccessEndpointsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *previousButton; // @dynamic previousButton;
@property(retain, nonatomic) YTIFlowProgressSupportedRenderers *progressMeter; // @dynamic progressMeter;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

