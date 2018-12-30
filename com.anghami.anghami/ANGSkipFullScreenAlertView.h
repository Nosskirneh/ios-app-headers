//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGFullAlertViewController.h"

@class ANGPlayQueue, ANGSong, NSTimer;

@interface ANGSkipFullScreenAlertView : ANGFullAlertViewController
{
    ANGSong *_song;
    ANGPlayQueue *_playQueue;
    NSTimer *_timer;
    long long _timeRemaining;
}

+ (void)showSkipsAlertSong:(id)arg1 playQueue:(id)arg2 timeRemaining:(long long)arg3;
@property long long timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) ANGPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(retain, nonatomic) ANGSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)countdownTimer;
- (void)hideCompletion:(CDUnknownBlockType)arg1;
- (void)updateCounter;
- (void)startTimer;
- (void)executeActionIsAction:(_Bool)arg1;
- (id)init;

@end

