//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTIItemSectionPreviewRenderer_ItemSectionPreviewExpandedSupportedRenderers;

@interface YTIItemSectionPreviewRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIItemSectionPreviewRenderer_ItemSectionPreviewExpandedSupportedRenderers *fullContents; // @dynamic fullContents;
@property(nonatomic) _Bool hasFullContents; // @dynamic hasFullContents;
@property(nonatomic) _Bool hasLoadMoreText; // @dynamic hasLoadMoreText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *loadMoreText; // @dynamic loadMoreText;
@property(retain, nonatomic) NSMutableArray *previewContentsArray; // @dynamic previewContentsArray;
@property(readonly, nonatomic) unsigned long long previewContentsArray_Count; // @dynamic previewContentsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

