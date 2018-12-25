//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTINamedValue, YTIUnpluggedSportsTeamMatchupSupportedRenderers;

@interface YTIUnpluggedSmallTeamsScoreRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *endTeam; // @dynamic endTeam;
@property(retain, nonatomic) YTINamedValue *endTeamScore; // @dynamic endTeamScore;
@property(nonatomic) _Bool hasEndTeam; // @dynamic hasEndTeam;
@property(nonatomic) _Bool hasEndTeamScore; // @dynamic hasEndTeamScore;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasStartTeam; // @dynamic hasStartTeam;
@property(nonatomic) _Bool hasStartTeamScore; // @dynamic hasStartTeamScore;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateableHighlightedScoreIndex; // @dynamic hasUpdateableHighlightedScoreIndex;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTINamedValue *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *startTeam; // @dynamic startTeam;
@property(retain, nonatomic) YTINamedValue *startTeamScore; // @dynamic startTeamScore;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTINamedValue *updateableHighlightedScoreIndex; // @dynamic updateableHighlightedScoreIndex;

@end
