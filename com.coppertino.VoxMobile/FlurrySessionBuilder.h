//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FlurrySessionBuilder : NSObject
{
    _Bool _sessionContinueSecondsSet;
    _Bool _crashReportingEnabled;
    _Bool _showErrorsInLog;
    _Bool _enablePaymentTransactionLogging;
    _Bool _enableInternal;
    _Bool _countBackgroundSessions;
    int _logLevel;
    NSString *_appVersion;
    long long _sessionContinueSeconds;
    long long _eventCountThreshold;
    long long _sessionReportingInterval;
}

@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) _Bool countBackgroundSessions; // @synthesize countBackgroundSessions=_countBackgroundSessions;
@property(nonatomic) _Bool enableInternal; // @synthesize enableInternal=_enableInternal;
@property(nonatomic) _Bool enablePaymentTransactionLogging; // @synthesize enablePaymentTransactionLogging=_enablePaymentTransactionLogging;
@property(nonatomic) _Bool showErrorsInLog; // @synthesize showErrorsInLog=_showErrorsInLog;
@property(nonatomic) _Bool crashReportingEnabled; // @synthesize crashReportingEnabled=_crashReportingEnabled;
@property(nonatomic) _Bool sessionContinueSecondsSet; // @synthesize sessionContinueSecondsSet=_sessionContinueSecondsSet;
@property(nonatomic) long long sessionReportingInterval; // @synthesize sessionReportingInterval=_sessionReportingInterval;
@property(nonatomic) long long eventCountThreshold; // @synthesize eventCountThreshold=_eventCountThreshold;
@property(nonatomic) long long sessionContinueSeconds; // @synthesize sessionContinueSeconds=_sessionContinueSeconds;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (void)build;
- (id)withIncludeBackgroundSessionsInMetrics:(_Bool)arg1;
- (id)withIAPReportingEnabled:(_Bool)arg1;
- (id)withYahooInternal;
- (id)withShowErrorInLog:(_Bool)arg1;
- (id)withLogLevel:(int)arg1;
- (id)withSessionContinueSeconds:(long long)arg1;
- (id)withCrashReporting:(_Bool)arg1;
- (id)withAppVersion:(id)arg1;
- (id)init;

@end

