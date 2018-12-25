//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIBadgeSupportedRenderers, YTICommand, YTIFormattedString, YTINamedValue, YTIUnpluggedSportsTeamMatchupSupportedRenderers;

@interface YTIUnpluggedMediumTeamsScoreRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *endTeam; // @dynamic endTeam;
@property(retain, nonatomic) NSMutableArray *endTeamScoresArray; // @dynamic endTeamScoresArray;
@property(readonly, nonatomic) unsigned long long endTeamScoresArray_Count; // @dynamic endTeamScoresArray_Count;
@property(nonatomic) _Bool hasEndTeam; // @dynamic hasEndTeam;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasOnClickCommand; // @dynamic hasOnClickCommand;
@property(nonatomic) _Bool hasQuaternaryText; // @dynamic hasQuaternaryText;
@property(nonatomic) _Bool hasSecondaryTextDelimiter; // @dynamic hasSecondaryTextDelimiter;
@property(nonatomic) _Bool hasSpoilerModeBadge; // @dynamic hasSpoilerModeBadge;
@property(nonatomic) _Bool hasStartTeam; // @dynamic hasStartTeam;
@property(nonatomic) _Bool hasTenxId; // @dynamic hasTenxId;
@property(nonatomic) _Bool hasTertiaryText; // @dynamic hasTertiaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateableHighlightedScoreColumnIndex; // @dynamic hasUpdateableHighlightedScoreColumnIndex;
@property(nonatomic) _Bool hasUpdateablePossessionIndicator; // @dynamic hasUpdateablePossessionIndicator;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTICommand *onClickCommand; // @dynamic onClickCommand;
@property(retain, nonatomic) YTINamedValue *quaternaryText; // @dynamic quaternaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryTextDelimiter; // @dynamic secondaryTextDelimiter;
@property(retain, nonatomic) NSMutableArray *secondaryTextsArray; // @dynamic secondaryTextsArray;
@property(readonly, nonatomic) unsigned long long secondaryTextsArray_Count; // @dynamic secondaryTextsArray_Count;
@property(retain, nonatomic) YTIBadgeSupportedRenderers *spoilerModeBadge; // @dynamic spoilerModeBadge;
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *startTeam; // @dynamic startTeam;
@property(retain, nonatomic) NSMutableArray *startTeamScoresArray; // @dynamic startTeamScoresArray;
@property(readonly, nonatomic) unsigned long long startTeamScoresArray_Count; // @dynamic startTeamScoresArray_Count;
@property(copy, nonatomic) NSString *tenxId; // @dynamic tenxId;
@property(retain, nonatomic) YTIFormattedString *tertiaryText; // @dynamic tertiaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTINamedValue *updateableHighlightedScoreColumnIndex; // @dynamic updateableHighlightedScoreColumnIndex;
@property(retain, nonatomic) YTINamedValue *updateablePossessionIndicator; // @dynamic updateablePossessionIndicator;

@end

