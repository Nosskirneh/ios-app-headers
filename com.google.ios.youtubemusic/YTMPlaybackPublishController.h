//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMapTable, NSString, YTMWatchViewController;

@interface YTMPlaybackPublishController : NSObject
{
    NSMapTable *_playbackIDToObserverMap;
    YTMWatchViewController *_playerEventPublisher;
    NSString *_currentVideoID;
    NSString *_currentPlaylistID;
    NSString *_currentPlaylistSetVideoID;
    long long _currentPlayerState;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyObserver:(id)arg1 forPlayerState:(long long)arg2;
- (_Bool)playbackIDmatcher:(id)arg1 matchesVideoID:(id)arg2 playlistID:(id)arg3 playlistSetID:(id)arg4;
- (void)maybeSendPlayerUpdateToObserver:(id)arg1 observerPlaybackIDMatcher:(id)arg2;
- (void)sendPlayerUpdateToObserversThatMatchCurrentVideoPlaylistAndPlaylistSetID;
- (void)sendPlayerUpdateToObserversThatMatchCurrentVideoAndPlaylistID;
- (void)sendPlayerUpdateToObserversThatMatchCurrentPlaylistID;
- (void)sendPlayerUpdateToObserversThatMatchCurrentVideoID;
- (void)sendPlayerUpdateForMatcher:(id)arg1;
- (void)sendPlayerUpdateToAllObserversThatMatchCurrentIDs;
- (void)playerDidChangeToState:(long long)arg1 forVideoID:(id)arg2 playlistID:(id)arg3 playlistSetID:(id)arg4;
- (void)removePlayerEventObserver:(id)arg1 forPlaybackIDMatcher:(id)arg2;
- (void)addPlayerEventObserver:(id)arg1 forPlaybackIDMatcher:(id)arg2;
- (id)init;

@end
