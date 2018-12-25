//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTBrowsyBarRefinementRenderer-Protocol.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTISearchBrowsyBarRefinementSupportedRenderers, YTISectionListRenderer;

@interface YTISearchBrowsyBarRefinementRenderer : GPBMessage <YTBrowsyBarRefinementRenderer>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTISectionListRenderer *flattenedContent;
@property(readonly, nonatomic) _Bool hasFlattenedContent;

// Remaining properties
@property(retain, nonatomic) YTISearchBrowsyBarRefinementSupportedRenderers *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(readonly, nonatomic) _Bool hasThumbnailsArray; // @dynamic hasThumbnailsArray;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *thumbnailsArray; // @dynamic thumbnailsArray;
@property(readonly, nonatomic) unsigned long long thumbnailsArray_Count; // @dynamic thumbnailsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

