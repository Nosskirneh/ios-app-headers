//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UAAnalyticsDelegate-Protocol.h"

@class NSMutableArray, NSString, UAAutomationStore, UAPreferenceDataStore;

@interface UAAutomation : NSObject <UAAnalyticsDelegate>
{
    _Bool _isForegrounded;
    UAAutomationStore *_automationStore;
    UAPreferenceDataStore *_preferenceDataStore;
    NSString *_currentScreen;
    NSString *_currentRegion;
    NSMutableArray *_activeTimers;
    unsigned long long _backgroundTaskIdentifier;
}

+ (id)delayFromData:(id)arg1;
+ (id)predicateFromData:(id)arg1;
+ (id)triggersFromData:(id)arg1;
+ (id)scheduleFromData:(id)arg1;
+ (id)automationWithConfig:(id)arg1 dataStore:(id)arg2;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) NSMutableArray *activeTimers; // @synthesize activeTimers=_activeTimers;
@property(nonatomic) _Bool isForegrounded; // @synthesize isForegrounded=_isForegrounded;
@property(copy, nonatomic) NSString *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(copy, nonatomic) NSString *currentScreen; // @synthesize currentScreen=_currentScreen;
@property(retain, nonatomic) UAPreferenceDataStore *preferenceDataStore; // @synthesize preferenceDataStore=_preferenceDataStore;
@property(retain, nonatomic) UAAutomationStore *automationStore; // @synthesize automationStore=_automationStore;
- (void).cxx_destruct;
- (void)endBackgroundTask;
- (void)processTriggeredSchedules:(id)arg1;
- (_Bool)isScheduleDelaySatisfied:(id)arg1 delayedExecutionDate:(id)arg2;
- (void)scheduleConditionsChanged;
- (void)rescheduleTimers;
- (void)cancelTimers;
- (void)cancelTimersWithGroup:(id)arg1;
- (void)cancelTimersWithIdentifiers:(id)arg1;
- (void)scheduleTimerFired:(id)arg1;
- (void)startTimerForSchedule:(id)arg1;
- (void)updateTriggersWithType:(long long)arg1 argument:(id)arg2 incrementAmount:(double)arg3;
- (void)screenTracked:(id)arg1;
- (void)regionEventAdded:(id)arg1;
- (void)customEventAdded:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)didBecomeActive;
- (void)getSchedulesWithGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSchedules:(CDUnknownBlockType)arg1;
- (void)getScheduleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelSchedulesWithGroup:(id)arg1;
- (void)cancelAll;
- (void)cancelScheduleWithIdentifier:(id)arg1;
- (void)scheduleActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

