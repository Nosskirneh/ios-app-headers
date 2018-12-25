//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedTeamsStatsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *endTeamName; // @dynamic endTeamName;
@property(retain, nonatomic) YTIThumbnailDetails *endTeamThumbnail; // @dynamic endTeamThumbnail;
@property(nonatomic) _Bool hasEndTeamName; // @dynamic hasEndTeamName;
@property(nonatomic) _Bool hasEndTeamThumbnail; // @dynamic hasEndTeamThumbnail;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasStartTeamName; // @dynamic hasStartTeamName;
@property(nonatomic) _Bool hasStartTeamThumbnail; // @dynamic hasStartTeamThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIFormattedString *startTeamName; // @dynamic startTeamName;
@property(retain, nonatomic) YTIThumbnailDetails *startTeamThumbnail; // @dynamic startTeamThumbnail;
@property(retain, nonatomic) NSMutableArray *teamsStatsBarsArray; // @dynamic teamsStatsBarsArray;
@property(readonly, nonatomic) unsigned long long teamsStatsBarsArray_Count; // @dynamic teamsStatsBarsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
