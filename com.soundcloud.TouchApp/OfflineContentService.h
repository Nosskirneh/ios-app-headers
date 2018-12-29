//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineContentServicing-Protocol.h"

@class NSString, OfflineContentDatabaseCleaner, OfflineContentGenerator, OfflineContentObserver, OfflineSyncController, OfflineSyncControllerFactory, OfflineTrackToDownloadMapper, RACDisposable, _TtC4Core6Client;
@protocol Delaying, OfflineSortedTracksReposing, OfflineStateReposing, OfflineSyncControllerDelegate, OfflineSyncFeatureObserving, OfflineSyncPerformanceProfiling, OfflineSyncTechLogging, OfflineUserConfigDataSourcing, _TtP4Core9Reachable_;

@interface OfflineContentService : NSObject <OfflineContentServicing>
{
    id <OfflineSyncFeatureObserving> _offlineSyncFeatureObserver;
    OfflineTrackToDownloadMapper *_downloadTrackAdapter;
    OfflineContentObserver *_offlineContentObserver;
    OfflineSyncControllerFactory *_offlineSyncControllerFactory;
    OfflineContentDatabaseCleaner *_contentDatabaseCleaner;
    id <OfflineSortedTracksReposing> _offlineSortedTracksRepository;
    id <OfflineUserConfigDataSourcing> _offlineUserConfigRepository;
    OfflineContentGenerator *_offlineContentGenerator;
    id <OfflineSyncPerformanceProfiling> _offlineSyncPerformanceProfiler;
    RACDisposable *_offlineSyncProgressDisposable;
    id <OfflineStateReposing> _offlineStateRepository;
    id <OfflineSyncControllerDelegate> _offlineSyncControllerDelegateHandler;
    id _offlineUserConfigDisposable;
    id <_TtP4Core9Reachable_> _reachability;
    NSString *_reachabilityHost;
    _TtC4Core6Client *_client;
    id <Delaying> _delayer;
    OfflineSyncController *_offlineSyncController;
    id <OfflineSyncTechLogging> _offlineSyncTechLogger;
}

@property(retain, nonatomic) id <OfflineSyncTechLogging> offlineSyncTechLogger; // @synthesize offlineSyncTechLogger=_offlineSyncTechLogger;
@property(retain, nonatomic) OfflineSyncController *offlineSyncController; // @synthesize offlineSyncController=_offlineSyncController;
@property(readonly, nonatomic) id <Delaying> delayer; // @synthesize delayer=_delayer;
@property(readonly, nonatomic) _TtC4Core6Client *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) NSString *reachabilityHost; // @synthesize reachabilityHost=_reachabilityHost;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id offlineUserConfigDisposable; // @synthesize offlineUserConfigDisposable=_offlineUserConfigDisposable;
@property(readonly, nonatomic) id <OfflineSyncControllerDelegate> offlineSyncControllerDelegateHandler; // @synthesize offlineSyncControllerDelegateHandler=_offlineSyncControllerDelegateHandler;
@property(readonly, nonatomic) id <OfflineStateReposing> offlineStateRepository; // @synthesize offlineStateRepository=_offlineStateRepository;
@property(retain, nonatomic) RACDisposable *offlineSyncProgressDisposable; // @synthesize offlineSyncProgressDisposable=_offlineSyncProgressDisposable;
@property(readonly, nonatomic) id <OfflineSyncPerformanceProfiling> offlineSyncPerformanceProfiler; // @synthesize offlineSyncPerformanceProfiler=_offlineSyncPerformanceProfiler;
@property(readonly, nonatomic) OfflineContentGenerator *offlineContentGenerator; // @synthesize offlineContentGenerator=_offlineContentGenerator;
@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> offlineUserConfigRepository; // @synthesize offlineUserConfigRepository=_offlineUserConfigRepository;
@property(readonly, nonatomic) id <OfflineSortedTracksReposing> offlineSortedTracksRepository; // @synthesize offlineSortedTracksRepository=_offlineSortedTracksRepository;
@property(readonly, nonatomic) OfflineContentDatabaseCleaner *contentDatabaseCleaner; // @synthesize contentDatabaseCleaner=_contentDatabaseCleaner;
@property(readonly, nonatomic) OfflineSyncControllerFactory *offlineSyncControllerFactory; // @synthesize offlineSyncControllerFactory=_offlineSyncControllerFactory;
@property(readonly, nonatomic) OfflineContentObserver *offlineContentObserver; // @synthesize offlineContentObserver=_offlineContentObserver;
@property(readonly, nonatomic) OfflineTrackToDownloadMapper *downloadTrackAdapter; // @synthesize downloadTrackAdapter=_downloadTrackAdapter;
@property(readonly, nonatomic) id <OfflineSyncFeatureObserving> offlineSyncFeatureObserver; // @synthesize offlineSyncFeatureObserver=_offlineSyncFeatureObserver;
- (void).cxx_destruct;
- (void)dealloc;
- (id)neverCompletingSignalFromSignal:(id)arg1;
- (id)offlineSyncFeatureObservation;
- (void)stopObserving;
- (void)startObserving;
- (id)createAndPrepareOfflineSyncController;
- (void)download:(id)arg1;
- (void)subscribeToOfflineSyncProgressChanges;
- (void)subscribeToOfflineSyncFeatureChanges;
- (void)subscribeToConfigurationChanges;
- (void)cleanDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduleDatabaseCleanerWithDelay;
- (void)offlineDatabaseCleanerDidCleanAll;
- (void)offlineContentDidChangeWithTracks:(id)arg1;
- (void)endOfflineSyncMeasurement;
- (void)performanceMeasure:(id)arg1;
- (void)applicationWillEnterForeground;
- (_Bool)hasAnyFilesInStorage;
- (id)progressChange;
- (id)deleteSyncContent;
- (id)deleteSyncContentAndStopWatchingChanges;
- (id)prepareForUse;
- (id)initWithOfflineSyncFeatureObserver:(id)arg1 offlineContentObserver:(id)arg2 downloadTrackAdapter:(id)arg3 offlineSyncControllerFactory:(id)arg4 contentDatabaseCleaner:(id)arg5 offlineSyncControllerDelegate:(id)arg6 offlineSortedTracksRepository:(id)arg7 offlineUserConfigRepository:(id)arg8 offlineStateRepository:(id)arg9 offlineContentGenerator:(id)arg10 offlineSyncPerformanceProfiler:(id)arg11 offlineSyncTechLogger:(id)arg12 reachability:(id)arg13 reachabilityHost:(id)arg14 client:(id)arg15 delayer:(id)arg16;
- (id)initWithOfflineSyncFeatureObserver:(id)arg1 offlineSyncTechLogger:(id)arg2 offlineContentDataSource:(id)arg3 userConfigDataSource:(id)arg4 offlineStateRepository:(id)arg5 offlineSortedTracksRepository:(id)arg6 trackMetadataPrefetcher:(id)arg7 offlineSyncPerformanceProfiler:(id)arg8 reachability:(id)arg9 reachabilityHost:(id)arg10 usageTagger:(id)arg11 client:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
