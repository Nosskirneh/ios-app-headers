//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AEAudioTimingReceiver-Protocol.h"

@class AEAudioController, NSMutableArray, NSString;

@interface AEBlockScheduler : NSObject <AEAudioTimingReceiver>
{
    struct _schedule_t _schedule[100];
    int _head;
    int _tail;
    NSMutableArray *_scheduledIdentifiers;
    AEAudioController *_audioController;
}

+ (unsigned long long)timestampWithSeconds:(double)arg1 fromTimestamp:(unsigned long long)arg2;
+ (double)secondsUntilTimestamp:(unsigned long long)arg1;
+ (unsigned long long)timestampWithSecondsFromNow:(double)arg1;
+ (double)secondsFromHostTicks:(unsigned long long)arg1;
+ (unsigned long long)hostTicksFromSeconds:(double)arg1;
+ (unsigned long long)now;
+ (void)initialize;
@property(nonatomic) __weak AEAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) NSMutableArray *scheduledIdentifiers; // @synthesize scheduledIdentifiers=_scheduledIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType timingReceiverCallback;
- (struct _schedule_t *)scheduleWithIdentifier:(id)arg1;
- (id)infoForScheduleWithIdentifier:(id)arg1;
- (void)cancelScheduleWithIdentifier:(id)arg1;
- (id)schedules;
- (void)scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2 timingContext:(int)arg3 identifier:(id)arg4 mainThreadResponseBlock:(CDUnknownBlockType)arg5;
- (void)scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2 timingContext:(int)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)initWithAudioController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

