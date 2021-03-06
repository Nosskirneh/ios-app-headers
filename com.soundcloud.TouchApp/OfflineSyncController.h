//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineSyncOperationDelegate-Protocol.h"

@class CryptoService, DownloadQueue, IdleStatePreventer, KeyMinister, NSMutableSet, NSString, NSURLSessionFactory, OfflineSyncProgressObserver, RACDisposable, RACScheduler, SecureStorage, SecureStorageCreator, UIApplication, _TtC9SCOffline22DownloadRequestCreator;
@protocol OfflineSyncConfigProvider, OfflineSyncControllerDelegate, OfflineSyncTechLogging;

@interface OfflineSyncController : NSObject <OfflineSyncOperationDelegate>
{
    id <OfflineSyncControllerDelegate> _delegate;
    id <OfflineSyncConfigProvider> _configProvider;
    SecureStorage *_secureStorage;
    CryptoService *_cryptoService;
    UIApplication *_application;
    OfflineSyncProgressObserver *_progressObserver;
    IdleStatePreventer *_idleStatePreventer;
    RACScheduler *_scheduler;
    DownloadQueue *_offlineSyncOperationQueue;
    _TtC9SCOffline22DownloadRequestCreator *_requestFactory;
    NSURLSessionFactory *_sessionFactory;
    SecureStorageCreator *_secureStorageCreator;
    KeyMinister *_keyMinister;
    id <OfflineSyncTechLogging> _offlineSyncTechLogger;
    RACDisposable *_configurationChangesDisposable;
    RACDisposable *_sessionRecreatedDisposable;
    RACDisposable *_sendErrorsDisposable;
    NSMutableSet *_batchedErrors;
}

@property(retain) NSMutableSet *batchedErrors; // @synthesize batchedErrors=_batchedErrors;
@property(retain, nonatomic) RACDisposable *sendErrorsDisposable; // @synthesize sendErrorsDisposable=_sendErrorsDisposable;
@property(retain, nonatomic) RACDisposable *sessionRecreatedDisposable; // @synthesize sessionRecreatedDisposable=_sessionRecreatedDisposable;
@property(retain, nonatomic) RACDisposable *configurationChangesDisposable; // @synthesize configurationChangesDisposable=_configurationChangesDisposable;
@property(readonly, nonatomic) id <OfflineSyncTechLogging> offlineSyncTechLogger; // @synthesize offlineSyncTechLogger=_offlineSyncTechLogger;
@property(readonly, nonatomic) KeyMinister *keyMinister; // @synthesize keyMinister=_keyMinister;
@property(readonly, nonatomic) SecureStorageCreator *secureStorageCreator; // @synthesize secureStorageCreator=_secureStorageCreator;
@property(readonly, nonatomic) NSURLSessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(readonly, nonatomic) _TtC9SCOffline22DownloadRequestCreator *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(readonly, nonatomic) DownloadQueue *offlineSyncOperationQueue; // @synthesize offlineSyncOperationQueue=_offlineSyncOperationQueue;
@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) IdleStatePreventer *idleStatePreventer; // @synthesize idleStatePreventer=_idleStatePreventer;
@property(readonly, nonatomic) OfflineSyncProgressObserver *progressObserver; // @synthesize progressObserver=_progressObserver;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) CryptoService *cryptoService; // @synthesize cryptoService=_cryptoService;
@property(readonly, nonatomic) SecureStorage *secureStorage; // @synthesize secureStorage=_secureStorage;
@property(readonly, nonatomic) id <OfflineSyncConfigProvider> configProvider; // @synthesize configProvider=_configProvider;
@property(readonly, nonatomic) __weak id <OfflineSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateRequiredReachability;
- (unsigned long long)storageRequirementsForTrack:(id)arg1;
- (_Bool)canDownloadTrack:(id)arg1 withRemainingSpace:(unsigned long long *)arg2;
- (void)informDelegateAboutSkippedTracksFrom:(id)arg1 whenDownloading:(id)arg2;
- (id)queueableOperationForTrack:(id)arg1;
- (_Bool)shouldQueueDownloadForTrack:(id)arg1;
- (id)startDownloadingTracksFrom:(id)arg1 fittingOntoDiskSpace:(unsigned long long)arg2;
- (id)currentDownloadTracks;
- (id)availableStorageSpaceIncludingDownloads;
- (void)removeAllErrors;
- (void)addError:(id)arg1;
- (id)deliveryDelaySignal:(double)arg1;
- (void)reportErrorsByType:(id)arg1;
- (id)reportBatchedErrorsToDelegate;
- (id)errorFromError:(id)arg1 urn:(id)arg2;
- (void)batchReportError:(id)arg1 forUrn:(id)arg2;
- (void)didFinishOperationForUrn:(id)arg1;
- (void)didFailOperationForUrn:(id)arg1 withError:(id)arg2;
- (void)didBeginOperationForUrn:(id)arg1;
- (void)enforceNewConfiguration;
- (_Bool)hasAnyFilesInStorage;
- (id)progressChange;
- (_Bool)isDownloadingSuspended;
- (_Bool)hasPendingDownloads;
- (void)cancelAllActivities;
- (void)cancelProcessingForUrns:(id)arg1;
- (void)startProcessing:(id)arg1;
- (void)deleteAllFilesInStorage;
- (_Bool)deleteAllFilesForUrnsInStorage:(id)arg1;
- (void)prepareOfflineSync;
- (id)initWithDelegate:(id)arg1 configProvider:(id)arg2 secureStorage:(id)arg3 cryptoService:(id)arg4 application:(id)arg5 progressObserver:(id)arg6 idleStatePreventer:(id)arg7 scheduler:(id)arg8 batchedErrors:(id)arg9 offlineSyncOperationQueue:(id)arg10 requestFactory:(id)arg11 sessionFactory:(id)arg12 keyMinister:(id)arg13 secureStorageCreator:(id)arg14 offlineSyncTechLogger:(id)arg15;
- (id)initWithDelegate:(id)arg1 configProvider:(id)arg2 reachabilityHost:(id)arg3 offlineUserConfigRepository:(id)arg4 client:(id)arg5 reachability:(id)arg6 offlineSyncTechLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

