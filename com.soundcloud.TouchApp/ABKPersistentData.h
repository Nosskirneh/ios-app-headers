//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABKDevice, ABKEventLog, ABKServerConfig, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

@interface ABKPersistentData : NSObject
{
    NSString *_userId;
    _Bool _shouldRequestConfigInNextRequest;
    _Bool _shouldRequestTriggersInNextRequest;
    NSString *_serverUrl;
    NSString *_deviceIdentifier;
    NSString *_pushToken;
    ABKDevice *_lastSentDevice;
    NSArray *_feedArray;
    NSDate *_feedArrayUpdateTime;
    NSArray *_contentCardsArray;
    NSDate *_lastFullCardsSyncTime;
    NSDate *_lastCardUpdatedTime;
    NSArray *_geofencesArray;
    NSDate *_geofencesArrayUpdateTime;
    NSDate *_geofencesLastReportTime;
    NSMutableDictionary *_userInfoPerUser;
    NSDictionary *_dictionarySentToServerForCurrentUser;
    ABKServerConfig *_serverConfig;
    ABKEventLog *_eventLog;
    NSString *_userDefaultsKey;
    NSOperationQueue *_userDefaultsSynchronousOperationQueue;
    NSDictionary *_currentSession;
    NSObject *_persistentDataLock;
}

+ (id)getKeyForUserWithId:(id)arg1;
+ (void)configureNSKeyedUnarchiver;
+ (CDStruct_14f26992)getSdkVersionFromString:(id)arg1;
+ (void)setLastSeenSdkVersionFromString:(id)arg1;
+ (void)setLastSeenSdkVersionFromUserDefaults;
+ (id)lastSeenSdkVersionString;
+ (_Bool)lastSeenSdkVersionIsEqualTo:(id)arg1;
+ (_Bool)lastSeenSdkVersionIsLessThan:(id)arg1;
+ (_Bool)lastSeenSdkVersionIsGreaterThan:(id)arg1;
+ (_Bool)lastSeenSdkVersionIsLessThanOrEqualTo:(id)arg1;
+ (_Bool)lastSeenSdkVersionIsGreaterThanOrEqualTo:(id)arg1;
+ (_Bool)lastSeenSdkVersionIsValid;
+ (_Bool)persistMostRecentSdkVersion;
+ (void)configureForDataVersioning;
@property(retain) NSObject *persistentDataLock; // @synthesize persistentDataLock=_persistentDataLock;
@property(retain) NSDictionary *currentSession; // @synthesize currentSession=_currentSession;
@property(retain) NSOperationQueue *userDefaultsSynchronousOperationQueue; // @synthesize userDefaultsSynchronousOperationQueue=_userDefaultsSynchronousOperationQueue;
@property(copy) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(retain) ABKEventLog *eventLog; // @synthesize eventLog=_eventLog;
@property _Bool shouldRequestTriggersInNextRequest; // @synthesize shouldRequestTriggersInNextRequest=_shouldRequestTriggersInNextRequest;
@property _Bool shouldRequestConfigInNextRequest; // @synthesize shouldRequestConfigInNextRequest=_shouldRequestConfigInNextRequest;
@property(retain) ABKServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(retain) NSDictionary *dictionarySentToServerForCurrentUser; // @synthesize dictionarySentToServerForCurrentUser=_dictionarySentToServerForCurrentUser;
@property(retain) NSMutableDictionary *userInfoPerUser; // @synthesize userInfoPerUser=_userInfoPerUser;
@property(retain) NSDate *geofencesLastReportTime; // @synthesize geofencesLastReportTime=_geofencesLastReportTime;
@property(retain) NSDate *geofencesArrayUpdateTime; // @synthesize geofencesArrayUpdateTime=_geofencesArrayUpdateTime;
@property(retain) NSArray *geofencesArray; // @synthesize geofencesArray=_geofencesArray;
@property(retain) NSDate *lastCardUpdatedTime; // @synthesize lastCardUpdatedTime=_lastCardUpdatedTime;
@property(retain) NSDate *lastFullCardsSyncTime; // @synthesize lastFullCardsSyncTime=_lastFullCardsSyncTime;
@property(retain) NSArray *contentCardsArray; // @synthesize contentCardsArray=_contentCardsArray;
@property(retain) NSDate *feedArrayUpdateTime; // @synthesize feedArrayUpdateTime=_feedArrayUpdateTime;
@property(retain) NSArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain) ABKDevice *lastSentDevice; // @synthesize lastSentDevice=_lastSentDevice;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)waitUntilAllOperationsAreFinished;
- (id)getSessionId;
- (id)getSessionInfo;
- (void)storeSessionInfo:(id)arg1;
- (void)setPlistOverrides;
- (void)updateGeofenceReportTime:(id)arg1;
- (void)updateGeofenceRequestTime:(id)arg1;
- (void)updateGeofences:(id)arg1;
- (void)addCardFromPush:(id)arg1 forUserId:(id)arg2;
- (void)updateLastCardUpdatedTime:(id)arg1;
- (void)updateLastFullCardsSyncTime:(id)arg1;
- (id)mergeServerCard:(id)arg1 withCachedCard:(id)arg2;
- (void)updateContentCards:(id)arg1 forUser:(id)arg2;
- (void)markContentCardDismissed:(id)arg1;
- (void)markContentCardViewed:(id)arg1;
- (void)updateFeedArray:(id)arg1;
- (void)markCardViewed:(id)arg1;
- (_Bool)updateServerConfigWithDefaults:(id)arg1;
- (void)updateConfigValues:(id)arg1;
- (void)removeEventsFromEventLog:(id)arg1;
- (void)addEventToEventLog:(id)arg1;
- (id)getUserDictionaryForUserWithId:(id)arg1;
- (id)getUserDictionaryForCurrentUser;
- (_Bool)changeCurrentUserId:(id)arg1;
- (_Bool)isValidNewUser:(id)arg1;
- (id)currentUserId;
- (void)processUserDictionarySentToServer:(id)arg1 forUserWithId:(id)arg2;
- (void)persistDiffOfUserAgainstLastSentToServer:(id)arg1;
- (id)deviceToSendToServer;
- (void)synchronizeDataToUserDefaults:(id)arg1;
- (id)getEncodedDataObjectFromDataDictionary:(id)arg1 persistentData:(id)arg2;
- (id)dataDictionaryForOperationQueueFromPersistentData:(id)arg1;
- (void)addUserDefaultSynchronizationOperationToQueue;
- (id)grabInfoFromUserDefaultsWithKey:(id)arg1;
- (id)init;
- (id)initFromUserDefaultsWithUserDefaultsKey:(id)arg1;
- (void)migrateUserDataFromVersionTwoToThree;
- (void)persistDataIfMigrationOccurred;

@end

