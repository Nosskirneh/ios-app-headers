//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString;

@protocol _TtP8Features18PlaylistFormatting_
- (NSString *)formattedStringForDuration:(double)arg1;
- (NSString *)formattedStringForCount:(unsigned long long)arg1;
- (NSString *)formattedStringForReleaseInfoWithType:(NSString *)arg1 date:(NSDate *)arg2;
- (NSString *)durationStatsForPlaylistWithDuration:(double)arg1 trackCount:(unsigned long long)arg2 asSpeech:(_Bool)arg3;
@end
