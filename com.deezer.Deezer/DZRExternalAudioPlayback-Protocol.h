//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNotification, NSString;
@protocol DZRPlayableObject, DZRQueueableCollection;

@protocol DZRExternalAudioPlayback <NSObject>
- (long long)currentTrackQuality;
- (void)disconnect;
- (_Bool)notificationWasSentByCurrentTrackController:(NSNotification *)arg1;
- (NSString *)externalContextName;
- (NSString *)queuedCollectionTitle;
- (NSString *)currentTrackTitle;
- (NSString *)currentTrackArtistName;
- (_Bool)isStoppedAfterFailing;
- (float)currentTrackBufferingProgress;
- (_Bool)currentTrackIsStalledBuffering;
- (_Bool)currentTrackIsBuffering;
- (_Bool)repeatIsAllowed;
- (_Bool)shuffleIsAllowed;
- (_Bool)skipNextIsAllowed;
- (_Bool)hasNextTrack;
- (_Bool)skipPreviousIsAllowed;
- (_Bool)hasPreviousTrack;
- (_Bool)seekIsAllowed;
- (double)playbackElaspedTime;
- (double)playbackDuration;
- (float)playbackProgress;
- (_Bool)isPlaying;
- (void)seekToProgress:(float)arg1;
- (void)togglePlayPause;
- (void)stop;
- (void)play;
- (void)pause;
- (id <DZRQueueableCollection>)playTracks:(NSArray *)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 atTime:(unsigned long long)arg3 byShufflingTracks:(_Bool)arg4;
- (id <DZRQueueableCollection>)playTracks:(NSArray *)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 atTime:(unsigned long long)arg3;
- (id <DZRQueueableCollection>)playTracks:(NSArray *)arg1 startingWithTrackAtIndex:(unsigned long long)arg2;
- (id <DZRQueueableCollection>)playTracks:(NSArray *)arg1;
- (_Bool)playCollection:(id <DZRQueueableCollection>)arg1 queuedTracks:(NSArray *)arg2 startingAtIndex:(unsigned long long)arg3 atTime:(unsigned long long)arg4 byShufflingTracks:(_Bool)arg5;
- (_Bool)playCollection:(id <DZRQueueableCollection>)arg1 startingAtIndex:(unsigned long long)arg2 atTime:(unsigned long long)arg3 byShufflingTracks:(_Bool)arg4;
- (_Bool)playCollection:(id <DZRQueueableCollection>)arg1 startingAtIndex:(unsigned long long)arg2;
- (_Bool)playCollection:(id <DZRQueueableCollection>)arg1;
- (_Bool)isInShuffleMode;
- (_Bool)toggleShuffleMode;
- (_Bool)setShuffle:(_Bool)arg1;
- (_Bool)isPlayingCollection:(id <DZRQueueableCollection>)arg1;
- (_Bool)isPlayingTrack:(id <DZRPlayableObject>)arg1;
- (unsigned long long)currentTrackAbsoluteIndex;
- (unsigned long long)currentTrackIndex;
- (NSArray *)queuedTracks;
- (id <DZRPlayableObject>)currentTrack;
- (long long)toggleRepeatMode;
- (void)setRepeatMode:(long long)arg1;
- (long long)repeatMode;
- (_Bool)hasAQueuedCollection;
- (id <DZRQueueableCollection>)queuedCollection;
- (_Bool)playTrackAtIndex:(unsigned long long)arg1;
- (_Bool)skipToPreviousTrack;
- (_Bool)skipToNextTrack;
@end

