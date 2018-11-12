//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZOFetchCallback;

@interface DZOPlayerProxy : NSObject
{
    DZOFetchCallback *fetchCallback;
    id _queueingNotificationObserver;
}

+ (void)displayMessageForUnAuthorizedStreamActionWithOrigin:(id)arg1;
+ (_Bool)canStreamFullTracks;
+ (id)workingQueue;
+ (id)sharedPlayerProxy;
@property(retain) id queueingNotificationObserver; // @synthesize queueingNotificationObserver=_queueingNotificationObserver;
@property(retain) DZOFetchCallback *fetchCallback; // @synthesize fetchCallback;
- (void).cxx_destruct;
- (void)playerDidFailPlaying:(id)arg1;
- (void)playerDidStopPlaying:(id)arg1;
- (void)playerDidChangeTrack:(id)arg1;
- (void)playerDidBuffer:(id)arg1;
- (void)playerWillBuffer:(id)arg1;
- (void)playerDidPlay:(id)arg1;
- (void)playerDidPause:(id)arg1;
- (void)playerDidSeek:(id)arg1;
- (void)playerStoppedByAccountRestrictions:(id)arg1;
- (void)notifyPlayingTrackDidChangeWithTrack:(id)arg1;
- (void)didChangePlayingState:(_Bool)arg1;
- (_Bool)isPlayingCollection:(id)arg1;
- (_Bool)isPlayingASmartRadio;
- (_Bool)isPlayingARadio;
- (_Bool)isPlayingAPlaylist;
- (_Bool)isPlayingAnAlbum;
- (double)currentTrackBufferingProgress;
- (_Bool)isBuffering;
- (double)currentTrackElaspedTime;
- (double)currentTrackDuration;
- (double)currentTrackProgress;
- (_Bool)isStoppedAfterFailing;
- (_Bool)isPlaying;
- (_Bool)canSeekInTrack;
- (_Bool)canPlayNextTrack;
- (_Bool)hasPlayNext;
- (_Bool)hasPlayPrevious;
- (long long)repeatMode;
- (_Bool)isInRepeatMode;
- (_Bool)canShuffle;
- (_Bool)isInShuffleMode;
- (long long)setRepeatMode:(long long)arg1;
- (long long)toggleRepeat;
- (_Bool)setShuffle:(_Bool)arg1;
- (_Bool)toggleShuffle;
- (void)seekInPlayingTrackToPosition:(double)arg1;
- (_Bool)hasTracksEnqueued;
- (id)currentPlayableObject;
- (id)currentRadio;
- (id)currentTracks;
- (id)currentTrackList;
- (id)currentDeezerTrack;
- (id)currentTrack;
- (void)removeQueuedTracksObservation;
- (void)handleQueuedTracksChangeWithCallback:(id)arg1 openTracksById:(id)arg2;
- (void)observeQueuedTracksWithCallback:(id)arg1 openTracksById:(id)arg2;
- (_Bool)changeTrackOrderWithIds:(id)arg1;
- (_Bool)playTrackAtIndexInCurrentTrackList:(unsigned long long)arg1;
- (void)playRadio:(id)arg1 isSmartRadio:(_Bool)arg2 callback:(id)arg3;
- (void)playOfflineTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 callback:(id)arg5;
- (void)playOfflinePlaylist:(id)arg1 callback:(id)arg2;
- (void)playOfflineFriendPlaylist:(id)arg1 callback:(id)arg2;
- (id)callbackWithOfflinePlaylist:(id)arg1 fromFriend:(_Bool)arg2 enqueueCallback:(id)arg3;
- (void)playOfflinePlaylist:(id)arg1 withPlaylist:(id)arg2 callback:(id)arg3;
- (void)playOfflineAlbum:(id)arg1 callback:(id)arg2;
- (_Bool)enqueueTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 listeningOrigin:(unsigned long long)arg5 startOffset:(unsigned long long)arg6 autoPlayMode:(long long)arg7 callback:(id)arg8;
- (void)selectStartingTrackForObject:(id)arg1 withOptions:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)playObject:(id)arg1 withOptions:(id)arg2 callback:(id)arg3;
- (void)playTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 listeningOrigin:(unsigned long long)arg5 startingWithTrack:(id)arg6 startOffset:(unsigned long long)arg7 autoPlayMode:(long long)arg8 callback:(id)arg9;
- (void)playTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 listeningOrigin:(unsigned long long)arg5 startingWithTrackAtIndex:(unsigned long long)arg6 startOffset:(unsigned long long)arg7 autoPlayMode:(long long)arg8 callback:(id)arg9;
- (void)playTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 startingWithTrack:(id)arg5 startOffset:(unsigned long long)arg6 autoPlayMode:(long long)arg7 callback:(id)arg8;
- (void)playTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 startingWithTrack:(id)arg5 callback:(id)arg6;
- (void)playTrackList:(id)arg1 deezerId:(id)arg2 title:(id)arg3 object:(id)arg4 startingWithTrackAtIndex:(unsigned long long)arg5 callback:(id)arg6;
- (void)playTrackList:(id)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 startOffset:(unsigned long long)arg3 autoPlayMode:(long long)arg4 callback:(id)arg5;
- (void)playAlbum:(id)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 startOffset:(unsigned long long)arg3 autoPlayMode:(long long)arg4 callback:(id)arg5;
- (void)playAlbum:(id)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 callback:(id)arg3;
- (void)playAlbum:(id)arg1 startingWithTrack:(id)arg2 callback:(id)arg3;
- (void)playAlbum:(id)arg1 callback:(id)arg2;
- (void)playPlaylist:(id)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 startOffset:(unsigned long long)arg3 autoPlayMode:(long long)arg4 callback:(id)arg5;
- (void)playPlaylist:(id)arg1 startingWithTrackAtIndex:(unsigned long long)arg2 callback:(id)arg3;
- (void)playPlaylist:(id)arg1 startingWithTrack:(id)arg2 callback:(id)arg3;
- (void)playPlaylist:(id)arg1 callback:(id)arg2;
- (_Bool)playPreviousTrack;
- (_Bool)playNextTrack;
- (void)stop;
- (void)pause;
- (void)play;
- (id)init;
- (_Bool)stopSharedAudioSession;
- (_Bool)resumeSharedAudioSession;
- (id)nextTrackTitle;
- (id)previousTrackTitle;
- (unsigned long long)currentTrackIndex;
- (_Bool)isPlayingWhenReadyEnabled;
- (_Bool)shouldRestoreLastTrackList;
- (void)enablePlayingWhenReadyToPlay;
- (void)disablePlayingWhenReadyToPlay;
- (_Bool)enableRepeatCurrentTracklist;
- (_Bool)disableRepeat;

@end
