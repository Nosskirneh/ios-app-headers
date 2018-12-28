//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class PlaylogMusicClientExtension_Container;

@interface PlaylogMusicClientExtension_PlayerEventInfo_StopInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PlaylogMusicClientExtension_Container *container; // @dynamic container;
@property(nonatomic) _Bool explicitStop; // @dynamic explicitStop;
@property(nonatomic) _Bool hasContainer; // @dynamic hasContainer;
@property(nonatomic) _Bool hasExplicitStop; // @dynamic hasExplicitStop;
@property(nonatomic) _Bool hasPlaybackPositionSec; // @dynamic hasPlaybackPositionSec;
@property(nonatomic) _Bool hasTimePlayedSinceStartMillis; // @dynamic hasTimePlayedSinceStartMillis;
@property(nonatomic) _Bool hasTotalTrackLengthSec; // @dynamic hasTotalTrackLengthSec;
@property(nonatomic) unsigned int playbackPositionSec; // @dynamic playbackPositionSec;
@property(nonatomic) int timePlayedSinceStartMillis; // @dynamic timePlayedSinceStartMillis;
@property(nonatomic) unsigned int totalTrackLengthSec; // @dynamic totalTrackLengthSec;

@end

