//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConversationSearchButtonSupportedRenderers, YTIConversationWatchHistorySupportedRenderers, YTIFormattedString;

@interface YTIConversationWatchHistoryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSearchButton; // @dynamic hasSearchButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasVideoList; // @dynamic hasVideoList;
@property(retain, nonatomic) YTIConversationSearchButtonSupportedRenderers *searchButton; // @dynamic searchButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIConversationWatchHistorySupportedRenderers *videoList; // @dynamic videoList;

@end

