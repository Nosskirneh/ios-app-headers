//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingRemoteControlPolicy.h"

@class NSArray, NSHashTable, NSString, SPTPlayerState;

@interface SPTNowPlayingBaseRemoteControlPolicy : NSObject <SPTNowPlayingRemoteControlPolicy>
{
    SPTPlayerState *_playerState;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)notifyObserversThatPolicyDidChange;
- (void)removeRemoteControlStateUpdateObserver:(id)arg1;
- (void)addRemoteControlStateUpdateObserver:(id)arg1;
- (void)bookmarkButtonPressedWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *localizedTitleForBookmarkCommand;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeAvailable;
- (void)dislikeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *localizedTitleForDislikeCommand;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeAvailable;
- (void)likeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *localizedTitleForLikeCommand;
- (void)shuffleButtonPressedWithShuffleType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeAvailable;
- (void)repeatButtonPressedWithRepeatType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeAvailable;
- (void)skipForwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipForwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeAvailable;
- (void)skipBackwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipBackwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

