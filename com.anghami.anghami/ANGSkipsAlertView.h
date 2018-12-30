//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGAlertView.h"

@class ANGDialog, NSString, NSTimer;

@interface ANGSkipsAlertView : ANGAlertView
{
    long long _timeRemaining;
    NSTimer *_timer;
    NSString *_dialogMessage;
    ANGDialog *_skipDialog;
}

+ (void)showSkipsAlertSong:(id)arg1 playQueue:(id)arg2 timeRemaining:(long long)arg3;
@property(retain, nonatomic) ANGDialog *skipDialog; // @synthesize skipDialog=_skipDialog;
@property(retain, nonatomic) NSString *dialogMessage; // @synthesize dialogMessage=_dialogMessage;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property long long timeRemaining; // @synthesize timeRemaining=_timeRemaining;
- (void).cxx_destruct;
- (id)messageLabelFont;
- (void)countdownTimer;
- (void)alertButtonClicked:(id)arg1;
- (void)dismissWithClickedButton:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateCounter;
- (void)showInQueue;

@end
