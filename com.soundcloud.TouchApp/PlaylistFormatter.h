//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import "_TtP8Features18PlaylistFormatting_-Protocol.h"

@class NSDateFormatter;

@interface PlaylistFormatter : NSFormatter <_TtP8Features18PlaylistFormatting_>
{
    NSDateFormatter *_yearFormatter;
}

+ (id)playlistFormatter;
@property(retain, nonatomic) NSDateFormatter *yearFormatter; // @synthesize yearFormatter=_yearFormatter;
- (void).cxx_destruct;
- (id)formattedStringForDuration:(double)arg1;
- (id)formattedStringForCount:(unsigned long long)arg1;
- (id)formattedStringForReleaseInfoWithType:(id)arg1 date:(id)arg2;
- (id)durationStatsForPlaylistWithDuration:(double)arg1 trackCount:(unsigned long long)arg2 asSpeech:(_Bool)arg3;

@end

