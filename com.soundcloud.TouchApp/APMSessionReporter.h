//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMAlarm, APMPersistedConfig;

@interface APMSessionReporter : NSObject
{
    APMPersistedConfig *_persistedConfig;
    APMAlarm *_sessionStartTimer;
    APMAlarm *_userEngagementTimer;
    double _engagementStartUptime;
    _Bool _reportingEnabled;
    double _minimumSessionInterval;
    double _timeoutSessionInterval;
}

@property(nonatomic) double timeoutSessionInterval; // @synthesize timeoutSessionInterval=_timeoutSessionInterval;
@property(nonatomic) double minimumSessionInterval; // @synthesize minimumSessionInterval=_minimumSessionInterval;
@property(nonatomic, getter=isReportingEnabled) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg1 withSessionNumber:(id)arg2;
- (void)updatePropertiesForNewSessionStart;
- (double)incurredEngagementTime;
- (double)currentClockTime;
- (double)currentUptime;
- (void)rescheduleUserEngagementTimer;
- (void)rescheduleSessionStartTimer;
- (void)handleScreenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)handleAppWillResignActiveWithScreen:(id)arg1;
- (void)handleAppDidBecomeActive;
- (void)logUserEngagementEventWithScreen:(id)arg1;
- (void)logUserEngagementEvent;
- (void)logSessionStartEvent;
- (id)sessionNumberProperty;
- (id)sessionIDPropertyWithTimestamp:(double)arg1;
- (_Bool)extendSession;
@property(readonly, nonatomic, getter=isSessionExpired) _Bool sessionExpired;
- (_Bool)shouldStartNewSession;
- (void)dealloc;
- (id)initWithPersistedConfig:(id)arg1;

@end
