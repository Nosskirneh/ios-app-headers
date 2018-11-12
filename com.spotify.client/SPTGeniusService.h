//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSCache, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSTimer, NSURL, SPTDataLoader, SPTGeniusLegacyCache, SPTGeniusProxyTrackEnabledChecker, SPTGeniusServiceEnabledResourcesLoadingState;
@protocol SPTAbbaService, SPTLocalSettings, SPTLyricsTrackChecker, SPTMetaViewController, SPTOfflineModeState, SPTPlayer;

@interface SPTGeniusService : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver, SPTPlayerObserver>
{
    _Bool _enabled;
    _Bool _displayAnnotationsAutomatically;
    SPTDataLoader *_dataLoader;
    NSCache *_memoryCache;
    NSCache *_trackIDsWithNoAnnotations;
    SPTGeniusLegacyCache *_diskCache;
    NSMutableDictionary *_requestCallbacks;
    NSSet *_enabledTrackURIs;
    NSSet *_enabledPlaylistAndAlbumURIs;
    SPTGeniusServiceEnabledResourcesLoadingState *_enabledResourcesLoadingState;
    NSTimer *_refreshEnabledURIsTimer;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTLocalSettings> _localSettings;
    id <SPTPlayer> _player;
    NSURL *_currentContextURI;
    id <SPTAbbaService> _abbaService;
    NSMutableArray *_enabledResourcesLoadedCompletions;
    SPTGeniusProxyTrackEnabledChecker *_proxyTrackEnabledChecker;
    id <SPTMetaViewController> _metaViewController;
    id <SPTLyricsTrackChecker> _lyricsTrackChecker;
}

@property(nonatomic) __weak id <SPTLyricsTrackChecker> lyricsTrackChecker; // @synthesize lyricsTrackChecker=_lyricsTrackChecker;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTGeniusProxyTrackEnabledChecker *proxyTrackEnabledChecker; // @synthesize proxyTrackEnabledChecker=_proxyTrackEnabledChecker;
@property(retain, nonatomic) NSMutableArray *enabledResourcesLoadedCompletions; // @synthesize enabledResourcesLoadedCompletions=_enabledResourcesLoadedCompletions;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(retain, nonatomic) NSURL *currentContextURI; // @synthesize currentContextURI=_currentContextURI;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSTimer *refreshEnabledURIsTimer; // @synthesize refreshEnabledURIsTimer=_refreshEnabledURIsTimer;
@property(retain, nonatomic) SPTGeniusServiceEnabledResourcesLoadingState *enabledResourcesLoadingState; // @synthesize enabledResourcesLoadingState=_enabledResourcesLoadingState;
@property(copy, nonatomic) NSSet *enabledPlaylistAndAlbumURIs; // @synthesize enabledPlaylistAndAlbumURIs=_enabledPlaylistAndAlbumURIs;
@property(copy, nonatomic) NSSet *enabledTrackURIs; // @synthesize enabledTrackURIs=_enabledTrackURIs;
@property(retain, nonatomic) NSMutableDictionary *requestCallbacks; // @synthesize requestCallbacks=_requestCallbacks;
@property(retain, nonatomic) SPTGeniusLegacyCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSCache *trackIDsWithNoAnnotations; // @synthesize trackIDsWithNoAnnotations=_trackIDsWithNoAnnotations;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool displayAnnotationsAutomatically; // @synthesize displayAnnotationsAutomatically=_displayAnnotationsAutomatically;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)invalidateTimers;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)geniusErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fireFailureCallbacksForTrackId:(id)arg1 withError:(id)arg2;
- (void)handleBackendResponseAnnotations:(id)arg1;
- (void)handleBackendResponseEnabledResources:(id)arg1;
- (void)loadCachedEnabledResources;
- (void)flushEnabledResourcesLoadedCompletions;
- (void)fireEnabledResourcesLoadedCompletions;
- (id)geniusEnabledResourcesURL;
- (void)refreshEnabledURIs;
- (void)startRefreshingEnabledURIs;
- (void)fetchAllGeniusEnabledURIs;
- (void)isContextURIGeniusEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isTrackGeniusEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)contextTypeForURI:(id)arg1;
- (void)prefetchAnnotationsForTrackURLs:(id)arg1;
- (void)fetchAnnotationsForTrackURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAnnotationsForTrackId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)geniusAnnotationsURLForTrackID:(id)arg1;
- (void)fetchFromServerAnnotationsForTrackId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)contentStartsImmediately;
- (_Bool)geniusProxyIsEnabled;
- (id)initWithDiskCache:(id)arg1 dataLoaderFactory:(id)arg2 offlineModeState:(id)arg3 localSettings:(id)arg4 abbaService:(id)arg5 player:(id)arg6 metaViewController:(id)arg7 enabled:(_Bool)arg8 lyricsTrackChecker:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

