//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

#import "VOXOfflineModeProtocol-Protocol.h"

@class NSError, NSManagedObjectContext, NSNumber, NSString;

@interface VOXLoopClient : AFHTTPSessionManager <VOXOfflineModeProtocol>
{
    id _logoutObserver;
    id _loginObserver;
    NSManagedObjectContext *_backgroundContext;
    NSNumber *_tempSyncValue;
    NSError *_fetchErrorOccured;
}

+ (id)shared;
@property(retain, nonatomic) NSError *fetchErrorOccured; // @synthesize fetchErrorOccured=_fetchErrorOccured;
@property(retain, nonatomic) NSNumber *tempSyncValue; // @synthesize tempSyncValue=_tempSyncValue;
@property(retain, nonatomic) NSManagedObjectContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
- (void).cxx_destruct;
- (id)validate:(id)arg1;
- (void)didLogout;
@property(readonly, nonatomic) NSString *accessToken;
@property(readonly, nonatomic) _Bool initialLoadPerformed;
@property(readonly, nonatomic) _Bool isLoadingContent;
- (void)configureOfflineMode;
- (void)configureOnlineMode;
- (id)parametersFrom:(id)arg1;
- (void)_getAlbumsPartiallyWithFields:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fillTracksCountMigrationWithComplition:(CDUnknownBlockType)arg1;
- (void)searchForAlbumsWithString:(id)arg1 limit:(unsigned long long)arg2 inCompletion:(CDUnknownBlockType)arg3;
- (void)searchForTracksWithString:(id)arg1 limit:(unsigned long long)arg2 inCompletion:(CDUnknownBlockType)arg3;
- (void)_getTracksForAlbumIds:(id)arg1 inCompletion:(CDUnknownBlockType)arg2;
- (void)getTracksForAlbumIds:(id)arg1 withProgress:(CDUnknownBlockType)arg2 inCompletion:(CDUnknownBlockType)arg3;
- (void)_getAlbumsWithOffset:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlbumsIn:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForUpdates;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)stopUpdateTimer;
- (void)restartManualUpdateTimer;
- (void)updateTempSyncValue:(id)arg1;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
