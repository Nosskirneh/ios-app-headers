//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTFreeTierPlaylistModel.h"
#import "SPTFreeTierPlaylistSortingFilteringDelegate.h"
#import "SPTProductStateObserver.h"

@class NSString, NSURL, SPTFreeTierPlaylistModelEntityImplementation;

@interface SPTFreeTierPlaylistModelImplementation : NSObject <SPTProductStateObserver, SPTExplicitContentEnabledStateObserver, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistSortingFilteringDelegate>
{
    _Bool _loadError;
    _Bool _hasMore;
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistModelDelegate> _delegate;
    id <SPTFreeTierPlaylistSortingFiltering> _sortingFiltering;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTClientSettings> _clientSettings;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    NSString *_formatListType;
    SPTFreeTierPlaylistModelEntityImplementation *_entity;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _metadataSubscription;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _followCountSubscription;
    unsigned long long _onDemandType;
    struct _NSRange _currentWindow;
    struct _NSRange _loadedWindow;
}

@property(nonatomic) struct _NSRange loadedWindow; // @synthesize loadedWindow=_loadedWindow;
@property(nonatomic) struct _NSRange currentWindow; // @synthesize currentWindow=_currentWindow;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool loadError; // @synthesize loadError=_loadError;
@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType=_onDemandType;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> followCountSubscription; // @synthesize followCountSubscription=_followCountSubscription;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> metadataSubscription; // @synthesize metadataSubscription=_metadataSubscription;
@property(retain, nonatomic) SPTFreeTierPlaylistModelEntityImplementation *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *formatListType; // @synthesize formatListType=_formatListType;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering; // @synthesize sortingFiltering=_sortingFiltering;
@property(nonatomic) __weak id <SPTFreeTierPlaylistModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)playWithWithPlayOrigin:(id)arg1 playOptions:(id)arg2 platformPlayOptions:(id)arg3;
- (void)addTrackURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renamePlaylistToName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveTrack:(id)arg1 before:(_Bool)arg2 targetTrack:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateModelWithPlaylistSortingFiltering:(id)arg1;
- (void)updateMetadataWithResponse:(id)arg1 tracksResponse:(SPTPlaylistPlatformDataLoaderResponse_5db64d04 *)arg2 recommendations:(id)arg3;
- (void)loadMetadataAndAllTracks;
- (void)loadMetadataAndTracks;
- (_Bool)shouldIncludeEpisodes;
- (void)fillCommonOptions:(id)arg1;
- (void)loadFollowCount;
- (void)toggleLikedStateOnTrackEntity:(id)arg1;
- (void)toggleBannedStateOnTrackEntity:(id)arg1;
- (_Bool)isPlaybackRestrictedForTrackEntity:(id)arg1 playbackPrevented:(_Bool)arg2;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
- (void)changeOffline:(_Bool)arg1;
- (void)loadMore;
- (void)deletePlaylist;
- (void)changeFollowState:(_Bool)arg1;
- (void)playWithPlayOptions:(id)arg1 andPlayOrigin:(id)arg2;
- (void)playTrackEntity:(id)arg1 andPlayOrigin:(id)arg2;
- (void)playWithPlayOrigin:(id)arg1;
- (void)shufflePlayWithPlayOrigin:(id)arg1;
- (void)prepareLoad;
- (void)loadEntirePlaylist;
- (void)load;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)dealloc;
- (id)initWithPlaylistURL:(id)arg1 playlistDataLoader:(id)arg2 playlistModel:(id)arg3 collectionPlatform:(id)arg4 collectionConfiguration:(id)arg5 sortingFiltering:(id)arg6 onDemandSet:(id)arg7 clientSettings:(id)arg8 productState:(id)arg9 explicitContentAccessManager:(id)arg10 testManager:(id)arg11 formatListType:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

