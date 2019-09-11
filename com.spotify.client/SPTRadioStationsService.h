//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSArray, NSHashTable, NSMutableSet, NSString, SPTDataLoader, SPTPersistentCache;
@protocol OS_dispatch_queue, SPTExplicitContentAccessManager, SPTRadioTestManager;

@interface SPTRadioStationsService : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    SPTPersistentCache *_persistentCache;
    id <SPTRadioTestManager> _radioTestManager;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSArray *_savedStations;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_fetchingTrackStations;
}

+ (id)prevTracksStringWithTrackURLs:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *fetchingTrackStations; // @synthesize fetchingTrackStations=_fetchingTrackStations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSArray *savedStations; // @synthesize savedStations=_savedStations;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)URLForNextTracksForStation:(id)arg1;
- (id)convertToGDPRSafeStationIfNeeded:(id)arg1;
- (id)wrapErrorDataLoadResponse:(id)arg1;
- (id)wrapError:(id)arg1;
- (_Bool)isCachedStationValid:(id)arg1;
- (void)removePreviousTracks:(id)arg1 fromCachedStation:(id)arg2;
- (void)removeRadioStationsObserver:(id)arg1;
- (void)addRadioStationsObserver:(id)arg1;
- (void)handleThumbTrackErrorResponse:(id)arg1;
- (void)handleThumbTrackSuccessfulResponse:(id)arg1;
- (void)radioThumbTrackUrl:(id)arg1 isUp:(_Bool)arg2 forStation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleLoadTracksErrorResponse:(id)arg1;
- (void)handleLoadTracksSuccessfulResponse:(id)arg1;
- (void)loadTracksForRadioStation:(id)arg1 loadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCreateStationErrorResponse:(id)arg1;
- (void)handleCreateStationSuccessfulResponse:(id)arg1;
- (void)createStation:(id)arg1 createType:(long long)arg2 previousTracks:(id)arg3 autoplay:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getStationWithURI:(id)arg1 previousTracks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStationWithSeedURI:(id)arg1 previousTracks:(id)arg2 autoplay:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createStationWithSeedURI:(id)arg1 previousTracks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createStation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)invokeUserSavedStationCompletion:(CDUnknownBlockType)arg1 stations:(id)arg2 error:(id)arg3;
- (void)invokeRadioCompletion:(CDUnknownBlockType)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)invokeStationCompletion:(CDUnknownBlockType)arg1 station:(id)arg2 error:(id)arg3;
- (_Bool)saveStationToCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getStationFromCacheWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataLoader:(id)arg1 persistentCache:(id)arg2 radioTestManager:(id)arg3 explicitContentAccessManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

