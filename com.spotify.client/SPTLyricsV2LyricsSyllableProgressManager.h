//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsLineProgressManager-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSHashTable, NSString, NSTimer, SPTLyricsLineSet, SPTPlayerTrack;
@protocol SPTPlayer;

@interface SPTLyricsV2LyricsSyllableProgressManager : NSObject <SPTPlayerObserver, SPTLyricsLineProgressManager>
{
    _Bool _didChangeLine;
    id <SPTPlayer> _player;
    SPTPlayerTrack *_currentTrack;
    SPTLyricsLineSet *_lyricsLineSet;
    NSTimer *_timer;
    long long _activeLineIndex;
    long long _activeSyllableIndex;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) long long activeSyllableIndex; // @synthesize activeSyllableIndex=_activeSyllableIndex;
@property(nonatomic) long long activeLineIndex; // @synthesize activeLineIndex=_activeLineIndex;
@property(nonatomic) _Bool didChangeLine; // @synthesize didChangeLine=_didChangeLine;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SPTLyricsLineSet *lyricsLineSet; // @synthesize lyricsLineSet=_lyricsLineSet;
@property(retain, nonatomic) SPTPlayerTrack *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)notifyActiveSyllableIndexChanged;
- (void)notifyActiveLineIndexChanged;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateWithLyricsLineSet:(id)arg1 forTrack:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)showNextLineWithDelay:(double)arg1;
- (void)scheduleNextLineWithPlayerState:(id)arg1;
- (void)updateWithPlayerState:(id)arg1;
- (void)updateState;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

