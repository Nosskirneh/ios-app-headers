//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSingleRequestViewModel.h"

#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTPlayerObserver.h"

@class NSArray, NSString, NSURL, SPTAlbumData, SPTAlbumPlaybackStateRestorer, SPTPlayerContext;

@interface SPTAlbumViewModel : SPTSingleRequestViewModel <SPTPlayerObserver, SPTExplicitContentEnabledStateObserver>
{
    _Bool _heartsInEntityHeadersEnabled;
    NSURL *_URL;
    id <SPTAlbumViewModelPlaybackDelegate> _playbackDelegate;
    id <SPTAlbumViewModelCollectionDelegate> _collectionDelegate;
    SPTAlbumData *_albumData;
    long long _playingRow;
    NSString *_customMessage;
    NSString *_username;
    id <SPTOfflineManager> _offlineManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTProductState> _productState;
    id <SPTUpsellManager> _upsellManager;
    NSArray *_albumTracks;
    id <SPTPlayer> _player;
    SPTPlayerContext *_playerContext;
    SPTAlbumPlaybackStateRestorer *_playbackStateRestorer;
    long long _collectionTracksCount;
    id <SPTClientSettings> _clientSettings;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionAlbumSubscription;
    id <SPTContributingArtistsService> _contributingArtistsService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTContributingArtistsService> contributingArtistsService; // @synthesize contributingArtistsService=_contributingArtistsService;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionAlbumSubscription; // @synthesize collectionAlbumSubscription=_collectionAlbumSubscription;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(nonatomic) long long collectionTracksCount; // @synthesize collectionTracksCount=_collectionTracksCount;
@property(nonatomic) __weak SPTAlbumPlaybackStateRestorer *playbackStateRestorer; // @synthesize playbackStateRestorer=_playbackStateRestorer;
@property(retain, nonatomic) SPTPlayerContext *playerContext; // @synthesize playerContext=_playerContext;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *albumTracks; // @synthesize albumTracks=_albumTracks;
@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
@property(nonatomic, getter=isHeartsInEntityHeadersEnabled) _Bool heartsInEntityHeadersEnabled; // @synthesize heartsInEntityHeadersEnabled=_heartsInEntityHeadersEnabled;
@property(nonatomic) long long playingRow; // @synthesize playingRow=_playingRow;
@property(retain, nonatomic) SPTAlbumData *albumData; // @synthesize albumData=_albumData;
@property(nonatomic) __weak id <SPTAlbumViewModelCollectionDelegate> collectionDelegate; // @synthesize collectionDelegate=_collectionDelegate;
@property(nonatomic) __weak id <SPTAlbumViewModelPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)playAutoTrialTrackURL:(id)arg1;
- (id)artistNamesForTrackAtIndex:(unsigned long long)arg1;
- (id)artistNames;
- (_Bool)shouldPrimaryActionButtonBeEnabled;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)setPlayableStateForAllTracks;
- (void)setActiveStatesForAllTracks;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (_Bool)shouldShowUnplayableTracks;
@property(readonly, copy, nonatomic) NSString *windowedContentButtonTitle;
@property(readonly, copy, nonatomic) NSString *windowedContentMessage;
@property(readonly, copy, nonatomic) NSString *windowedContentTitle;
@property(readonly, copy, nonatomic) NSString *copyrightText;
@property(readonly, copy, nonatomic) NSString *descriptionForSpotlightIndex;
@property(readonly, copy, nonatomic) NSString *titleForAlbumMetadataUpperCase;
@property(readonly, copy, nonatomic) NSString *titleForAlbumMetadata;
- (unsigned long long)albumType;
@property(readonly, copy, nonatomic) NSString *titleForRelatedAlbums;
- (id)dataWithDictionary:(id)arg1;
- (void)parseSuccessfulResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createPlayContextWithData:(id)arg1;
@property(readonly, nonatomic) _Bool albumHasTracksInCollection;
@property(readonly, nonatomic, getter=isCompleteAlbumInCollection) _Bool completeAlbumInCollection;
@property(readonly, nonatomic) _Bool shouldDisplayIncludesHeader;
- (_Bool)contextMenuNeedsCompleteAlbumAction;
- (id)contextMenuActionsForCurrentViewWithFactory:(id)arg1 logContext:(id)arg2;
@property(readonly, nonatomic) _Bool isAlbumByVariousArtists;
@property(readonly, nonatomic) long long numberOfRelatedAlbums;
@property(readonly, nonatomic) long long numberOfPlayableTracks;
@property(readonly, nonatomic) long long numberOfTracks;
- (id)relatedAlbumDataAtIndex:(unsigned long long)arg1;
- (id)trackDataAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldDisplayWindowedContentButton;
@property(readonly, nonatomic) _Bool shouldDisplayWindowedContentMessage;
@property(readonly, nonatomic) _Bool hasRelatedAlbums;
- (_Bool)isTrackWindowedAtIndexPath:(id)arg1;
- (_Bool)trackIsExplicitContentPlaybackRestrictedAtIndexPath:(id)arg1;
- (_Bool)trackIsRatedExplicitAtIndexPath:(id)arg1;
- (_Bool)trackIsCurrentlyPlayingAtIndexPath:(id)arg1;
- (_Bool)trackIsPlayableAtIndexPath:(id)arg1;
- (_Bool)trackIsDisabledAtIndexPath:(id)arg1;
- (_Bool)hasTrack:(id)arg1;
- (_Bool)playTrack:(id)arg1;
- (_Bool)playTrackAtIndexPath:(id)arg1;
- (void)playAlbum:(_Bool)arg1 didUserTapTrackRow:(_Bool)arg2;
- (void)playAlbum:(_Bool)arg1 playerState:(CDUnknownBlockType)arg2;
- (_Bool)canResumeAlbumPlayback;
- (void)resumeAlbumPlayback;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 offlineState:(id)arg2 offlineManager:(id)arg3 playbackStateRestorer:(id)arg4 dataLoader:(id)arg5 serviceName:(id)arg6 endpointPath:(id)arg7 albumURL:(id)arg8 clientSettings:(id)arg9 username:(id)arg10 collectionPlatform:(id)arg11 productState:(id)arg12 upsellManager:(id)arg13 collectionTestManager:(id)arg14 contributingArtistsService:(id)arg15 presentationService:(id)arg16 explicitContentAccessManager:(id)arg17 heartsInEntityHeadersEnabled:(_Bool)arg18;
- (id)trackURLs;
- (id)offlineURL;
- (void)downloadSavedAlbum;
- (void)saveAndDownloadAlbum;
- (void)setAlbumIsOfflined:(_Bool)arg1;
- (void)isAlbumComplete:(CDUnknownBlockType)arg1;
- (_Bool)albumIsOffline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

