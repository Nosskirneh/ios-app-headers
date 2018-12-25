//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTILiveStreamOfflineSlateRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionButtonsArray; // @dynamic actionButtonsArray;
@property(readonly, nonatomic) unsigned long long actionButtonsArray_Count; // @dynamic actionButtonsArray_Count;
@property(nonatomic) _Bool canShowCountdown; // @dynamic canShowCountdown;
@property(nonatomic) _Bool hasCanShowCountdown; // @dynamic hasCanShowCountdown;
@property(nonatomic) _Bool hasMainText; // @dynamic hasMainText;
@property(nonatomic) _Bool hasScheduledStartTime; // @dynamic hasScheduledStartTime;
@property(nonatomic) _Bool hasSubtitleText; // @dynamic hasSubtitleText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIFormattedString *mainText; // @dynamic mainText;
@property(nonatomic) long long scheduledStartTime; // @dynamic scheduledStartTime;
@property(retain, nonatomic) YTIFormattedString *subtitleText; // @dynamic subtitleText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end

