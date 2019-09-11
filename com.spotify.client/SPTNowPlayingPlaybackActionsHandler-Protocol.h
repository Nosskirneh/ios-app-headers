//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton;
@protocol SPTNowPlayingPlayButton, SPTNowPlayingPlaybackActionsHandlerObserver;

@protocol SPTNowPlayingPlaybackActionsHandler <NSObject>
@property(readonly, nonatomic) unsigned long long repeatMode;
@property(readonly, nonatomic) _Bool isSkippingToNextTrackAllowedWithoutUpsell;
@property(readonly, nonatomic) _Bool isSkippingToNextTrackAllowed;
@property(readonly, nonatomic) _Bool isSkippingToPreviousTrackAllowed;
@property(readonly, nonatomic) _Bool isSeekingAllowed;
@property(readonly, nonatomic) _Bool isShufflingAllowed;
@property(readonly, nonatomic) _Bool isResumingAllowed;
@property(readonly, nonatomic) _Bool isPausingAllowed;
@property(readonly, nonatomic) _Bool isShuffling;
@property(readonly, nonatomic) _Bool isPaused;
- (void)toggleRepeat:(UIButton *)arg1;
- (void)toggleShuffle:(UIButton *)arg1;
- (void)skip15SecondsForward:(UIButton *)arg1;
- (void)skip15SecondsBackward:(UIButton *)arg1;
- (void)skipToPrevious:(UIButton *)arg1;
- (void)skipToNext:(UIButton *)arg1;
- (void)playPause:(UIButton<SPTNowPlayingPlayButton> *)arg1;
- (void)removeObserver:(id <SPTNowPlayingPlaybackActionsHandlerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingPlaybackActionsHandlerObserver>)arg1;
@end

