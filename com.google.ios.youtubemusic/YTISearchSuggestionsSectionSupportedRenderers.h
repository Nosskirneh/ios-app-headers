//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEntitySuggestionRenderer, YTIGameSuggestionRenderer, YTIHistorySuggestionRenderer, YTIMusicResponsiveListItemRenderer, YTISearchSuggestionRenderer, YTIUnpluggedHorizontalChipListRenderer;

@interface YTISearchSuggestionsSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEntitySuggestionRenderer *entitySuggestionRenderer; // @dynamic entitySuggestionRenderer;
@property(retain, nonatomic) YTIGameSuggestionRenderer *gameSuggestionRenderer; // @dynamic gameSuggestionRenderer;
@property(nonatomic) _Bool hasEntitySuggestionRenderer; // @dynamic hasEntitySuggestionRenderer;
@property(nonatomic) _Bool hasGameSuggestionRenderer; // @dynamic hasGameSuggestionRenderer;
@property(nonatomic) _Bool hasHistorySuggestionRenderer; // @dynamic hasHistorySuggestionRenderer;
@property(nonatomic) _Bool hasMusicResponsiveListItemRenderer; // @dynamic hasMusicResponsiveListItemRenderer;
@property(nonatomic) _Bool hasSearchSuggestionRenderer; // @dynamic hasSearchSuggestionRenderer;
@property(nonatomic) _Bool hasUnpluggedHorizontalChipListRenderer; // @dynamic hasUnpluggedHorizontalChipListRenderer;
@property(retain, nonatomic) YTIHistorySuggestionRenderer *historySuggestionRenderer; // @dynamic historySuggestionRenderer;
@property(retain, nonatomic) YTIMusicResponsiveListItemRenderer *musicResponsiveListItemRenderer; // @dynamic musicResponsiveListItemRenderer;
@property(retain, nonatomic) YTISearchSuggestionRenderer *searchSuggestionRenderer; // @dynamic searchSuggestionRenderer;
@property(retain, nonatomic) YTIUnpluggedHorizontalChipListRenderer *unpluggedHorizontalChipListRenderer; // @dynamic unpluggedHorizontalChipListRenderer;

@end
