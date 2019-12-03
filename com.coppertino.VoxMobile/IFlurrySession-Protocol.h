//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryEntityRecordSet, FlurryTransaction, NSArray, NSData, NSDate, NSDictionary, NSError, NSException, NSMutableArray, NSMutableDictionary, NSString, SKPaymentTransaction;

@protocol IFlurrySession <NSObject>
+ (void)disableTransferOfFlurryInfo;
+ (void)disableWatchConnectivity;
@property(nonatomic) long long totalPauseIntervalMillis;
@property(retain, nonatomic) NSMutableArray *eventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts;
@property(readonly, nonatomic) NSDate *age;
@property(readonly, nonatomic) int gender;
@property(retain, nonatomic) NSDate *endTime;
@property(nonatomic) int pageViewCount;
@property(copy, nonatomic) NSString *appVersion;
@property(readonly, nonatomic) float accuracy;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
@property(retain, nonatomic) NSData *crashReportData;
@property _Bool isComplete;
@property _Bool crashed;
@property(readonly) NSString *apiKey;
@property(readonly) NSDate *pauseTime;
@property(readonly) NSDate *startTime;
- (void)sendFlush;
- (void)recordCrashedRecordSet:(FlurryEntityRecordSet *)arg1;
- (NSString *)installationIDForSessionReport;
- (void)removeInstallationIDFromKeychain;
- (_Bool)isPauseSecondsBeforeNewBGSessionReached;
- (_Bool)flurryUserInfo:(NSDictionary *)arg1;
- (_Bool)isFlurryUserInfo:(NSDictionary *)arg1;
- (void)sendSessionsToServerForCreateSession;
- (void)endSession;
- (void)endSessionAsync;
- (void)resumeSession;
- (void)markSessionAsResuming;
- (void)pauseSessionWithCompletionhandler:(void (^)(void))arg1;
- (void)pauseSession;
- (void)recordError:(NSString *)arg1 message:(NSString *)arg2 exceptionString:(NSString *)arg3 errorType:(int)arg4 liveReport:(NSData *)arg5;
- (void)recordError:(NSString *)arg1 message:(NSString *)arg2 error:(NSError *)arg3 liveReport:(NSData *)arg4;
- (void)recordError:(NSString *)arg1 message:(NSString *)arg2 exception:(NSException *)arg3 liveReport:(NSData *)arg4;
- (void)endTimedEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2;
- (void)setIAPReportingEnabled:(_Bool)arg1;
- (void)recordTransaction:(SKPaymentTransaction *)arg1 statusCallback:(void (^)(int))arg2;
- (int)recordEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2 timed:(_Bool)arg3 transaction:(FlurryTransaction *)arg4;
- (int)recordEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2 timed:(_Bool)arg3;
- (int)recordEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2;
- (void)setEventLoggingEnabled:(_Bool)arg1;
- (void)setConfigVariants:(NSArray *)arg1;
- (NSDate *)initialTimestamp;
- (void)setAgeInYears:(int)arg1;
- (void)setGenderAsString:(NSString *)arg1;
- (void)maybeIncrementPageView;
- (void)setBgPauseTime:(NSDate *)arg1;
- (void)setDeviceToken:(NSString *)arg1;
- (void)setCountBackgroundSessionsEnabled:(_Bool)arg1;
- (void)setCrashReportingEnabled:(_Bool)arg1;
- (void)setSessionReportsOnPauseEnabled:(_Bool)arg1;
- (void)setSessionReportsOnCloseEnabled:(_Bool)arg1;
- (void)setUserID:(NSString *)arg1;
- (void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4;
@end
