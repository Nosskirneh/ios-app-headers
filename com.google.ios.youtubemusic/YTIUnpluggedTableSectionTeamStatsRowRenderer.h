//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTINamedValue, YTIThumbnailDetails;

@interface YTIUnpluggedTableSectionTeamStatsRowRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accessibilityStatsArray; // @dynamic accessibilityStatsArray;
@property(readonly, nonatomic) unsigned long long accessibilityStatsArray_Count; // @dynamic accessibilityStatsArray_Count;
@property(retain, nonatomic) YTIFormattedString *accessibilityTeamName; // @dynamic accessibilityTeamName;
@property(retain, nonatomic) YTIFormattedString *accessibilityTeamRank; // @dynamic accessibilityTeamRank;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAccessibilityTeamName; // @dynamic hasAccessibilityTeamName;
@property(nonatomic) _Bool hasAccessibilityTeamRank; // @dynamic hasAccessibilityTeamRank;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasHighlightedColumnIndex; // @dynamic hasHighlightedColumnIndex;
@property(nonatomic) _Bool hasTeamName; // @dynamic hasTeamName;
@property(nonatomic) _Bool hasTeamRank; // @dynamic hasTeamRank;
@property(nonatomic) _Bool hasTeamThumbnail; // @dynamic hasTeamThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateableHighlightedColumnIndex; // @dynamic hasUpdateableHighlightedColumnIndex;
@property(nonatomic) int highlightedColumnIndex; // @dynamic highlightedColumnIndex;
@property(retain, nonatomic) NSMutableArray *statsArray; // @dynamic statsArray;
@property(readonly, nonatomic) unsigned long long statsArray_Count; // @dynamic statsArray_Count;
@property(retain, nonatomic) YTIFormattedString *teamName; // @dynamic teamName;
@property(retain, nonatomic) YTIFormattedString *teamRank; // @dynamic teamRank;
@property(retain, nonatomic) YTIThumbnailDetails *teamThumbnail; // @dynamic teamThumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTINamedValue *updateableHighlightedColumnIndex; // @dynamic updateableHighlightedColumnIndex;
@property(retain, nonatomic) NSMutableArray *updateableStatsArray; // @dynamic updateableStatsArray;
@property(readonly, nonatomic) unsigned long long updateableStatsArray_Count; // @dynamic updateableStatsArray_Count;

@end

