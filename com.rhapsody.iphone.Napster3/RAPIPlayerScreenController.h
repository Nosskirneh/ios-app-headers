//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIController.h"

#import "RAPIMainScreenDelegate-Protocol.h"

@class NSString;

@interface RAPIPlayerScreenController : RAPIController <RAPIMainScreenDelegate>
{
    long long _nowPlayingIndex;
    long long _discoverMusicIndex;
    long long _playlistsIndex;
    long long _downloadsIndex;
    long long _radioIndex;
    long long _favoritesIndex;
    long long _skipPrevIndex;
    long long _skipNextIndex;
    long long _shuffleButtonIndex;
}

@property long long shuffleButtonIndex; // @synthesize shuffleButtonIndex=_shuffleButtonIndex;
@property long long skipNextIndex; // @synthesize skipNextIndex=_skipNextIndex;
@property long long skipPrevIndex; // @synthesize skipPrevIndex=_skipPrevIndex;
@property long long favoritesIndex; // @synthesize favoritesIndex=_favoritesIndex;
@property long long radioIndex; // @synthesize radioIndex=_radioIndex;
@property long long downloadsIndex; // @synthesize downloadsIndex=_downloadsIndex;
@property long long playlistsIndex; // @synthesize playlistsIndex=_playlistsIndex;
@property long long discoverMusicIndex; // @synthesize discoverMusicIndex=_discoverMusicIndex;
@property long long nowPlayingIndex; // @synthesize nowPlayingIndex=_nowPlayingIndex;
- (void)invalidate;
- (id)formattedTimeInMinutesAndSecondsForSeconds:(long long)arg1;
- (void)didConnectToCar;
- (void)checkmarkNowPlayingTrackAtIndex:(long long)arg1;
- (void)setToolbarTooltips;
- (void)refreshToolbarButtons;
- (void)updateWithNowPlayingTrack;
- (void)trackDidChange:(id)arg1;
- (void)albumArtDidChange:(id)arg1;
- (void)containerChanged;
- (void)registerForNotifications;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (void)dealloc;
- (_Bool)currentPlaylistAvailable;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2;
- (long long)getItemCount;
- (id)getTitle;
- (id)shuffleImage;
- (void)setupToolbar;
- (id)getScreenConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
