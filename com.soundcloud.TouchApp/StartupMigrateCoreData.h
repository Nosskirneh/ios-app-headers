//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StartupOperation-Protocol.h"
#import "_TtP4Core21PerformanceProfilable_-Protocol.h"

@class APAnalyticsController, CoreDataMigrationController, NSString, PersistentStoreManager, UserFeaturesService, _TtC10SoundCloud7Version, _TtC4Core14ThreadExecutor;
@protocol _TtP4Core10TechLogger_, _TtP8Features15KeyValueStoring_;

@interface StartupMigrateCoreData : NSObject <StartupOperation, _TtP4Core21PerformanceProfilable_>
{
    CoreDataMigrationController *_coreDataMigrationController;
    id <_TtP4Core10TechLogger_> _techLogger;
    APAnalyticsController *_analyticsController;
    PersistentStoreManager *_persistentStoreManager;
    UserFeaturesService *_userFeaturesService;
    _TtC10SoundCloud7Version *_version;
    id <_TtP8Features15KeyValueStoring_> _keyValueStore;
    _TtC4Core14ThreadExecutor *_threadExecutor;
}

+ (_Bool)shouldDispatchToMainThread;
@property(readonly, nonatomic) _TtC4Core14ThreadExecutor *threadExecutor; // @synthesize threadExecutor=_threadExecutor;
@property(readonly, nonatomic) id <_TtP8Features15KeyValueStoring_> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) _TtC10SoundCloud7Version *version; // @synthesize version=_version;
@property(readonly, nonatomic) UserFeaturesService *userFeaturesService; // @synthesize userFeaturesService=_userFeaturesService;
@property(readonly, nonatomic) PersistentStoreManager *persistentStoreManager; // @synthesize persistentStoreManager=_persistentStoreManager;
@property(readonly, nonatomic) APAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) CoreDataMigrationController *coreDataMigrationController; // @synthesize coreDataMigrationController=_coreDataMigrationController;
- (void).cxx_destruct;
- (void)logOfflineSyncMigrationOutcome:(id)arg1 databaseSize:(id)arg2 duration:(id)arg3;
- (void)logOfflineSyncMigration:(id)arg1 duration:(double)arg2;
- (void)logTerminatedMigrationWithSize:(unsigned long long)arg1;
- (void)logMigrationResult:(id)arg1 duration:(double)arg2;
- (void)migrateStore;
- (void)deleteStore;
- (long long)previousAttempt;
- (void)migrateIfNeeded;
- (_Bool)shouldAttemptMigration;
- (void)migrate;
@property(readonly, nonatomic) unsigned long long performanceMetricType;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithCoreDataMigrationController:(id)arg1 persistentStoreManager:(id)arg2 techLogger:(id)arg3 userFeaturesService:(id)arg4 analyticsController:(id)arg5 version:(id)arg6 keyValueStoring:(id)arg7 threadExecutor:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
