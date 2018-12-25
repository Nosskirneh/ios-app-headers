//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTBrowsyBarRenderer-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, YTIFormattedString, YTISectionListRenderer, YTITabbedBrowsyBarRefinementSupportedRenderers;

@interface YTITabbedBrowsyBarRenderer : GPBMessage <YTBrowsyBarRenderer>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTISectionListRenderer *flattenedContent;
@property(readonly, nonatomic) _Bool hasFlattenedContent;
@property(readonly, nonatomic) NSArray *flattenedItemsArray;
@property(readonly, nonatomic) _Bool hasFlattenedItemsArray;

// Remaining properties
@property(retain, nonatomic) YTITabbedBrowsyBarRefinementSupportedRenderers *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

