//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIAdParameters;

@interface YTIInLineNonLinear : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdParameters *adParameters; // @dynamic adParameters;
@property(copy, nonatomic) NSString *apiFramework; // @dynamic apiFramework;
@property(nonatomic) int expandedHeight; // @dynamic expandedHeight;
@property(nonatomic) int expandedWidth; // @dynamic expandedWidth;
@property(nonatomic) _Bool hasAdParameters; // @dynamic hasAdParameters;
@property(nonatomic) _Bool hasApiFramework; // @dynamic hasApiFramework;
@property(nonatomic) _Bool hasExpandedHeight; // @dynamic hasExpandedHeight;
@property(nonatomic) _Bool hasExpandedWidth; // @dynamic hasExpandedWidth;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIframeResource; // @dynamic hasIframeResource;
@property(nonatomic) _Bool hasMaintainAspectRatio; // @dynamic hasMaintainAspectRatio;
@property(nonatomic) _Bool hasMinSuggestedDuration; // @dynamic hasMinSuggestedDuration;
@property(nonatomic) _Bool hasNonLinearClickThrough; // @dynamic hasNonLinearClickThrough;
@property(nonatomic) _Bool hasResourceKind; // @dynamic hasResourceKind;
@property(nonatomic) _Bool hasScalable; // @dynamic hasScalable;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *iframeResource; // @dynamic iframeResource;
@property(nonatomic) _Bool maintainAspectRatio; // @dynamic maintainAspectRatio;
@property(copy, nonatomic) NSString *minSuggestedDuration; // @dynamic minSuggestedDuration;
@property(copy, nonatomic) NSString *nonLinearClickThrough; // @dynamic nonLinearClickThrough;
@property(retain, nonatomic) NSMutableArray *nonLinearClickTrackingsArray; // @dynamic nonLinearClickTrackingsArray;
@property(readonly, nonatomic) unsigned long long nonLinearClickTrackingsArray_Count; // @dynamic nonLinearClickTrackingsArray_Count;
@property(nonatomic) int resourceKind; // @dynamic resourceKind;
@property(nonatomic) _Bool scalable; // @dynamic scalable;
@property(nonatomic) int width; // @dynamic width;

@end

