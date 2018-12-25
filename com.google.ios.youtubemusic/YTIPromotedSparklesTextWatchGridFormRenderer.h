//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIActiveViewDisplayMeasurement, YTIPromotedSparklesTextContent, YTIRenderer;

@interface YTIPromotedSparklesTextWatchGridFormRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIActiveViewDisplayMeasurement *activeView; // @dynamic activeView;
@property(retain, nonatomic) NSMutableArray *clickLocationTargetsArray; // @dynamic clickLocationTargetsArray;
@property(readonly, nonatomic) unsigned long long clickLocationTargetsArray_Count; // @dynamic clickLocationTargetsArray_Count;
@property(retain, nonatomic) YTIRenderer *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) YTIPromotedSparklesTextContent *content; // @dynamic content;
@property(nonatomic) _Bool hasActiveView; // @dynamic hasActiveView;
@property(nonatomic) _Bool hasCloseButton; // @dynamic hasCloseButton;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasMutedAdStateRenderer; // @dynamic hasMutedAdStateRenderer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *mutedAdStateRenderer; // @dynamic mutedAdStateRenderer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

