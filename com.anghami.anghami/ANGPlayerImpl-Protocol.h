//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ANGSong;

@protocol ANGPlayerImpl
@property(nonatomic) _Bool videoModeOn;
@property(readonly, nonatomic) _Bool needsProgressTimer;
@property(readonly, nonatomic) _Bool isBuffering;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)releaseResources;
- (void)periodicTimeCheck;
- (double)durationOfSong:(ANGSong *)arg1;
- (_Bool)seekToSeconds:(double)arg1 inSong:(ANGSong *)arg2;
- (double)timeElapsedInSong:(ANGSong *)arg1;
- (void)pause;
- (void)play:(_Bool)arg1;
@end
