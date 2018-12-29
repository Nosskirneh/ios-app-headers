//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPPseudonymousIDObserver-Protocol.h"
#import "PHTPhenotype-Protocol.h"

@class GMVGIPPseudonymousIDStore, NSHashTable, NSString, PHTPhenotypeCache, PHTPhenotypeDatabase, PHTPhenotypeFlags, PHTPhenotypeLogger;
@protocol CCTClockProtocol, OS_dispatch_queue;

@interface PHTPhenotype : NSObject <GIPPseudonymousIDObserver, PHTPhenotype>
{
    NSString *_overrideServerURL;
    _Bool _debugForceSyncs;
    GMVGIPPseudonymousIDStore *_pseudonymousIDStore;
    id <CCTClockProtocol> _clock;
    PHTPhenotypeCache *_cache;
    PHTPhenotypeLogger *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_commitObservers;
    NSString *_bundleID;
    PHTPhenotypeFlags *_flags;
    PHTPhenotypeDatabase *_database;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (void)useLocalCachesDirectory;
+ (void)setDefaultDirectory:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) PHTPhenotypeDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) PHTPhenotypeFlags *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSHashTable *commitObservers; // @synthesize commitObservers=_commitObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PHTPhenotypeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) PHTPhenotypeCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) GMVGIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
@property(copy, nonatomic) NSString *overrideServerURL; // @synthesize overrideServerURL=_overrideServerURL;
@property(nonatomic) _Bool debugForceSyncs; // @synthesize debugForceSyncs=_debugForceSyncs;
- (void).cxx_destruct;
- (void)pseudonymousIDDidReset:(id)arg1;
- (void)useXCNServerURL;
- (void)closeDatabase;
- (void)setExternalExperimentIDs:(id)arg1 moduleNamespace:(id)arg2 logSource:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)committedConfiguration:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)committedConfiguration:(id)arg1 user:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)experimentTokensForCurrentBundleWithCallback:(CDUnknownBlockType)arg1;
- (void)experimentTokens:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)experimentTokens:(long long)arg1 user:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)peekConfiguration:(id)arg1 user:(id)arg2 diffToken:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)commitConfiguration:(id)arg1 user:(id)arg2 diffToken:(id)arg3 committer:(CDUnknownBlockType)arg4;
- (void)unregisterPackage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)registerPackage:(id)arg1 logSources:(id)arg2 params:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)registerPackage:(id)arg1 version:(long long)arg2 logSources:(id)arg3 params:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)sync:(id)arg1 syncType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)syncAllAccounts:(id)arg1 syncType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)wrapCallback:(CDUnknownBlockType)arg1 syncType:(long long)arg2 syncBeginTimeMilliseconds:(long long)arg3 syncTimeLoggedOutOnly:(long long)arg4 syncTimeFull:(long long)arg5;
- (void)syncExperimentsWithServer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)flushCountersToLogger;
- (void)removeCommitObserver:(id)arg1;
- (void)addCommitObserver:(id)arg1;
- (void)setupForTesting;
- (id)init;
- (id)initWithDatabase:(id)arg1 clock:(id)arg2 cache:(id)arg3 clearcutLogDirectory:(id)arg4 pseudonymousIDStore:(id)arg5;
- (id)initWithDatabase:(id)arg1 pseudonymousIDStore:(id)arg2 clock:(id)arg3 flags:(id)arg4 logger:(id)arg5 cache:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
