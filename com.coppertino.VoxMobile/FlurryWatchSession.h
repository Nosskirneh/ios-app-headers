//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FlurryDataSenderDelegate-Protocol.h"
#import "FlurryWatchConnectivityDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FlurryWatchSession : NSObject <FlurryDataSenderDelegate, FlurryWatchConnectivityDelegate>
{
    _Bool _eventLogComplete;
    int _serializationVersion;
    float _accuracy;
    int _totalErrorCount;
    int _gender;
    int _watchEventThreshold;
    int _watchDurationThreshold;
    NSString *_userID;
    NSString *_apiKey;
    NSString *_appVersion;
    NSDictionary *_watchIDs;
    NSDate *_startTime;
    NSDate *_endTime;
    long long _totalPauseIntervalMillis;
    double _latitude;
    double _longitude;
    NSMutableDictionary *_eventCounts;
    NSMutableArray *_eventLog;
    NSMutableArray *_errors;
    NSMutableDictionary *_sessionParams;
    NSDate *_age;
    NSString *_locale;
    NSString *_timeZone;
}

+ (id)initialTimestampFilePath;
+ (id)oldInitialTimestampFilePathUptilAgentVersion109;
+ (id)currentWatchAutoIncrementFilePath;
+ (id)currentWatchIDsFilePath;
+ (id)currentWatchSessionFilePath;
+ (void)loadWatchDisableWatchConnectivity;
+ (void)loadWatchSessionIfOnDisk;
+ (_Bool)createAndLoadWatchSession;
+ (id)currentWatchSession;
+ (id)sessionWithApiKey:(id)arg1 startTime:(id)arg2;
+ (id)getAgentVersionWithBuild;
+ (void)load;
+ (void)initReachabilty;
+ (id)queue;
@property(nonatomic) int watchDurationThreshold; // @synthesize watchDurationThreshold=_watchDurationThreshold;
@property(nonatomic) int watchEventThreshold; // @synthesize watchEventThreshold=_watchEventThreshold;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSDate *age; // @synthesize age=_age;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSMutableDictionary *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(nonatomic) int totalErrorCount; // @synthesize totalErrorCount=_totalErrorCount;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(nonatomic) _Bool eventLogComplete; // @synthesize eventLogComplete=_eventLogComplete;
@property(retain, nonatomic) NSMutableArray *eventLog; // @synthesize eventLog=_eventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long totalPauseIntervalMillis; // @synthesize totalPauseIntervalMillis=_totalPauseIntervalMillis;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSDictionary *watchIDs; // @synthesize watchIDs=_watchIDs;
@property(nonatomic) int serializationVersion; // @synthesize serializationVersion=_serializationVersion;
@property(copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void).cxx_destruct;
- (_Bool)flurryUserInfo:(id)arg1;
- (void)disableWatchConnectivity;
- (_Bool)didReceiveUserInfo:(id)arg1;
- (_Bool)isFlurryUserInfo:(id)arg1;
- (void)dealloc;
- (long long)sessionLength;
- (long long)timeIntervalSinceSessionStart:(id)arg1;
- (_Bool)sentReportSuccessful;
- (id)initialTimestamp;
- (id)dataForSessions:(id)arg1;
- (id)data;
- (void)printSessionPrivateLogs;
- (void)appendNetworkStatusToData:(id)arg1;
- (void)appendCookiesToData:(id)arg1;
- (void)appendSessions:(id)arg1 toData:(id)arg2;
- (void)appendDevicePropertiesToData:(id)arg1;
- (id)systemVersion;
- (_Bool)appendReportedIDsToData:(id)arg1;
- (_Bool)appendEventLogToData:(id)arg1;
- (_Bool)appendEventCountToData:(id)arg1;
- (void)appendSessionParamsToData:(id)arg1;
- (void)getSessionParametersAtPhase:(int)arg1;
- (int)updateIfTrackedAndChangedPropertyValue:(id)arg1 forPropertyKey:(id)arg2;
- (void)sendSessionsToServer;
- (void)clearWatchSessionOnDisk;
- (void)saveWatchIDsToDisk;
- (void)saveWatchSessionToDisk;
- (int)putEventIntoLog:(id)arg1;
- (int)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5;
- (int)recordWatchError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4;
- (int)recordWatchError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4;
- (int)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4;
- (int)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4;
- (int)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3;
- (int)recordWatchEvent:(id)arg1 withParameters:(id)arg2;
- (int)sanityCheckEventName:(id)arg1 parameters:(id)arg2;
- (_Bool)hasWatchSessionExpired;
- (int)totalEventCount;
- (id)watchIDGuidAsBytes;
- (id)watchIdGUID;
- (id)watchIdIDFV;
@property(copy) NSString *userID; // @synthesize userID=_userID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetEventLogs;
- (id)dataForSending:(id)arg1;
- (void)endWatchSession;
- (void)finishWatchEvent;
- (void)finishSession;
- (void)resetSessionData;
- (id)initWithAPIKey:(id)arg1 appVersion:(id)arg2 startDate:(id)arg3;
- (void)loadWatchDurationThreshold;
- (void)loadWatchEventThreshold;
- (void)loadWatchUserID;
- (void)loadWatchAppVersion;
- (void)loadWatchDebug;
- (void)loadWatchIDsFromDisk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

