//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZOEnqueueCallback, DZOFetchCallback, DZOPlayerProxy, DZOTrack, NSArray;
@protocol BMWPlayerDelegate;

@interface BMWPlayer : NSObject
{
    int _state;
    DZOTrack *_currentTrack;
    NSArray *_trackList;
    id <BMWPlayerDelegate> _delegate;
    DZOPlayerProxy *_player;
    DZOEnqueueCallback *_enqueueCallback;
    DZOFetchCallback *_fetchCallback;
}

@property(retain, nonatomic) DZOFetchCallback *fetchCallback; // @synthesize fetchCallback=_fetchCallback;
@property(retain, nonatomic) DZOEnqueueCallback *enqueueCallback; // @synthesize enqueueCallback=_enqueueCallback;
@property(retain, nonatomic) DZOPlayerProxy *player; // @synthesize player=_player;
@property(nonatomic) __weak id <BMWPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *trackList; // @synthesize trackList=_trackList;
@property(retain, nonatomic) DZOTrack *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)restorePlaybackState;
- (void)trackListWasShuffled;
- (void)didChangePlayingTrack:(id)arg1;
- (void)readjustState;
- (void)didStopBuffering:(id)arg1;
- (void)didStartBuffering:(id)arg1;
- (void)didFailToPlay:(id)arg1;
- (void)didStopPlaying:(id)arg1;
- (void)didStartPlaying:(id)arg1;
- (void)tryEnqueueing:(id)arg1 fromObjects:(id)arg2;
- (void)restoreLastTracklistWithPlayableObject:(id)arg1 currentTrackId:(id)arg2;
- (_Bool)isPlayingRadio;
- (id)nextTrackTitle;
- (id)previousTrackTitle;
- (unsigned long long)currentTrackIndex;
- (void)seekToPosition:(double)arg1;
- (void)playTrackAtIndex:(unsigned long long)arg1;
- (void)pause;
- (void)play;
- (void)playPreviousTrack;
- (void)playNextTrack;
- (void)playAlbum:(id)arg1 fromAlbums:(id)arg2;
- (void)fetchTracksOfAlbum:(id)arg1 fromAlbums:(id)arg2 startingAlbum:(id)arg3 firstTrack:(id)arg4 tracks:(id)arg5;
- (void)enqueueTracks:(id)arg1 startingTrack:(id)arg2 fromFriend:(_Bool)arg3;
- (void)enqueue:(id)arg1 tracks:(id)arg2 startingTrack:(id)arg3 fromFriend:(_Bool)arg4;
- (void)restoreLastTracklist;
- (_Bool)shouldAbortAudioLUM;
- (void)enqueueFirstPlayableFavorite;
- (void)archiveCurrentTracklist;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

