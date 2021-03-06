//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;
@protocol SPTTimerDelegate;

@interface SPTTimer : NSObject
{
    id <SPTTimerDelegate> _delegate;
    NSTimer *_scheduledTimer;
    NSTimer *_countdownTimer;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) NSTimer *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
@property(nonatomic) __weak id <SPTTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportTimeRemaining;
- (void)scheduledTimerEnded;
- (double)timeRemaining;
- (void)cancelTimer;
- (void)setTimer:(double)arg1;

@end

