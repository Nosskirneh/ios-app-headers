//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableSet, YTRetryStateStore;
@protocol YTRetryTaskControllerDelegate;

@interface YTRetryTaskController : NSObject
{
    YTRetryStateStore *_retryStateStore;
    NSMutableSet *_timers;
    GIMMe *_gimme;
    id <YTRetryTaskControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTRetryTaskControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)scheduleRetryTimerWithDate:(id)arg1;
- (void)fetchAndScheduleTimersForRetryableTasks;
- (void)setCurrentUserID:(id)arg1;
- (void)retryTaskWithID:(id)arg1 maxRetryDate:(id)arg2 retryableStore:(id)arg3 retryConfig:(id)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (id)initWithRetryStateStore:(id)arg1;

@end

