//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSTimer;

@interface GPMImpressionTracker : NSObject
{
    NSMutableSet *_eventLogs;
    _Bool _continuous;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)startTimerWithTimeInterval:(double)arg1;
- (void)logImpression;
- (void)newSession;
- (void)addImpression:(id)arg1;
- (void)dealloc;
- (id)init;

@end

