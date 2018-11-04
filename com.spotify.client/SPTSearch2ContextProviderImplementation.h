//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearch2ContextProvider.h"

@class NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController;

@interface SPTSearch2ContextProviderImplementation : NSObject <SPTSearch2ContextProvider>
{
    _Bool _inAssistedCurationContext;
    _Bool _offlineSearchEnabled;
    id <SPTSearch2URLProviding> _urlProvider;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTDataLoaderFactory *_dataLoaderFactory;
    unsigned long long _entityVersion;
    SPTNetworkConnectivityController *_connectivityController;
    id <SPTSearch2ContentOperationsFactory> _postProcessContentOperationsFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTPlayer> _player;
    id <SPTSearchFancyRecentsDataSource> _recentsDataSource;
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTSearchABTestSource> _searchTestManager;
    id <SPTSearch2DateProviding> _dateProvider;
}

@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTSearchABTestSource> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(readonly, nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
@property(readonly, nonatomic) _Bool inAssistedCurationContext; // @synthesize inAssistedCurationContext=_inAssistedCurationContext;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) id <SPTSearchFancyRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) id <SPTSearch2ContentOperationsFactory> postProcessContentOperationsFactory; // @synthesize postProcessContentOperationsFactory=_postProcessContentOperationsFactory;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) unsigned long long entityVersion; // @synthesize entityVersion=_entityVersion;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (void).cxx_destruct;
- (id)makePostProcessContentOperations;
- (id)makeHUBS2MigrationContentOperation;
- (id)makeConnectivityMonitor;
- (id)makeViewModelBuilderFactory;
- (id)makeOfflineFetcherForQuery:(id)arg1;
- (id)makeOnlineFetcherForQuery:(id)arg1;
- (id)makeOfflineResultsContextForQuery:(id)arg1;
- (id)makeOnlineResultsContextForQuery:(id)arg1;
- (id)makeEmptyStateContext;
- (id)makeResultsContextForQuery:(id)arg1;
- (id)provideContextForQuery:(id)arg1;
- (id)initWithURLProvider:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 dataLoaderFactory:(id)arg4 connectivityController:(id)arg5 entityVersion:(unsigned long long)arg6 postProcessContentOperationsFactory:(id)arg7 emptyStatePropertiesProvider:(id)arg8 recentsDataSource:(id)arg9 player:(id)arg10 offlineManager:(id)arg11 playlistDataLoder:(id)arg12 inAssistedCurationContext:(_Bool)arg13 offlineSearchEnabled:(_Bool)arg14 searchTestManager:(id)arg15 dateProvider:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

