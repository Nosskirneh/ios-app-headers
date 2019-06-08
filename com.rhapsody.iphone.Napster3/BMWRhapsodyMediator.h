//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarIntegrationDelegate-Protocol.h"
#import "RHConnectedDeviceInfo-Protocol.h"
#import "RHPlayerDelegate-Protocol.h"

@class AlbumArtRetreiver, AlbumDetailer, ArtistDetailer, AudioPlaya, CarFob, CarIntegrationDataTranslator, CarIntegrationNowPlayingDetails, CarIntegrationNowPlayingDetailsMaker, CarIntegrationOnlineStatusMonitor, CatalogSearcher, ChartsNavigator, DownloadsRetriever, NSNotificationCenter, NSString, PlaylistMonger, RAPIMainController, StationDJ, _TtC7Napster20RemoteCommandService;
@protocol OS_dispatch_queue;

@interface BMWRhapsodyMediator : NSObject <CarIntegrationDelegate, RHPlayerDelegate, RHConnectedDeviceInfo>
{
    _Bool _shouldRestoreMainHMIState;
    _Bool _originalShouldRecoverBackToEP;
    _Bool _wasPlaying;
    int _appState;
    CarFob *_carFob;
    PlaylistMonger *_playlistMonger;
    StationDJ *_stationDJ;
    CarIntegrationNowPlayingDetails *_nowPlayingDetails;
    CarIntegrationNowPlayingDetailsMaker *_nowPlayingDetailsMaker;
    CarIntegrationDataTranslator *_carIntegrationDataTranslator;
    DownloadsRetriever *_downloadsRetriever;
    AudioPlaya *_audioPlaya;
    CarIntegrationOnlineStatusMonitor *_carIntegrationOnlineStatusMonitor;
    CatalogSearcher *_catalogSearcher;
    ChartsNavigator *_chartsNavigator;
    AlbumDetailer *_albumDetailer;
    ArtistDetailer *_artistDetailer;
    NSObject<OS_dispatch_queue> *_appStateChangeQueue;
    AlbumArtRetreiver *_albumArtRetreiver;
    long long _originalRepeatMode;
}

@property(nonatomic) _Bool wasPlaying; // @synthesize wasPlaying=_wasPlaying;
@property(nonatomic) _Bool originalShouldRecoverBackToEP; // @synthesize originalShouldRecoverBackToEP=_originalShouldRecoverBackToEP;
@property(nonatomic) long long originalRepeatMode; // @synthesize originalRepeatMode=_originalRepeatMode;
@property(retain, nonatomic) AlbumArtRetreiver *albumArtRetreiver; // @synthesize albumArtRetreiver=_albumArtRetreiver;
@property(nonatomic) int appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appStateChangeQueue; // @synthesize appStateChangeQueue=_appStateChangeQueue;
@property(retain, nonatomic) ArtistDetailer *artistDetailer; // @synthesize artistDetailer=_artistDetailer;
@property(retain, nonatomic) AlbumDetailer *albumDetailer; // @synthesize albumDetailer=_albumDetailer;
@property(retain, nonatomic) ChartsNavigator *chartsNavigator; // @synthesize chartsNavigator=_chartsNavigator;
@property(retain, nonatomic) CatalogSearcher *catalogSearcher; // @synthesize catalogSearcher=_catalogSearcher;
@property(retain, nonatomic) CarIntegrationOnlineStatusMonitor *carIntegrationOnlineStatusMonitor; // @synthesize carIntegrationOnlineStatusMonitor=_carIntegrationOnlineStatusMonitor;
@property(retain, nonatomic) AudioPlaya *audioPlaya; // @synthesize audioPlaya=_audioPlaya;
@property(retain, nonatomic) DownloadsRetriever *downloadsRetriever; // @synthesize downloadsRetriever=_downloadsRetriever;
@property(retain, nonatomic) CarIntegrationDataTranslator *carIntegrationDataTranslator; // @synthesize carIntegrationDataTranslator=_carIntegrationDataTranslator;
@property(nonatomic) _Bool shouldRestoreMainHMIState; // @synthesize shouldRestoreMainHMIState=_shouldRestoreMainHMIState;
@property(retain, nonatomic) CarIntegrationNowPlayingDetailsMaker *nowPlayingDetailsMaker; // @synthesize nowPlayingDetailsMaker=_nowPlayingDetailsMaker;
@property(retain, nonatomic) CarIntegrationNowPlayingDetails *nowPlayingDetails; // @synthesize nowPlayingDetails=_nowPlayingDetails;
@property(retain, nonatomic) StationDJ *stationDJ; // @synthesize stationDJ=_stationDJ;
@property(retain, nonatomic) PlaylistMonger *playlistMonger; // @synthesize playlistMonger=_playlistMonger;
@property(retain, nonatomic) CarFob *carFob; // @synthesize carFob=_carFob;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC7Napster20RemoteCommandService *remoteCommandService;
- (void)openUrl:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)didSignIn:(id)arg1;
- (id)carLanguage;
- (id)lockScreenName;
- (id)deviceMeteringPlayerName;
- (void)handleNextTrackChangeWithPlayerController:(id)arg1 nextItem:(id)arg2;
- (void)handleTrackChangeWithPlayerController:(id)arg1 previousItem:(id)arg2 currentItem:(id)arg3;
- (void)updateNowPlayingTrackList;
- (void)playerController:(id)arg1 changedPlayheadPosition:(double)arg2;
- (void)playerController:(id)arg1 changedNextItemTo:(id)arg2;
- (void)playerController:(id)arg1 changedCurrentItemFrom:(id)arg2 toItem:(id)arg3;
- (void)playerController:(id)arg1 changedFromState:(long long)arg2 toState:(long long)arg3;
- (void)completeTrackSourceChangeForProvider:(id)arg1;
- (void)pendingTrackSourceChangeForProvider:(id)arg1;
- (_Bool)isOnline;
- (_Bool)isPlayingRadio;
- (_Bool)canSkipPrevious;
- (_Bool)canSkipNext;
- (_Bool)isPlaying;
- (_Bool)isShuffling;
- (_Bool)isPaused;
- (void)getTopTracksWithBlock:(CDUnknownBlockType)arg1;
- (void)getTopNewAlbumsWithBlock:(CDUnknownBlockType)arg1;
- (void)getDetailsForArtist:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)searchFor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateItemWithDownloadedAlbumsAsContentItems:(id)arg1;
- (id)getDownloadedTracks;
- (id)getDownloadedAlbums;
- (id)getDownloadedArtists;
- (void)getDownloadedPlaylistsWithBlock:(CDUnknownBlockType)arg1;
- (id)prevTrackName;
- (id)nextTrackName;
- (void)generateNowPlayingDetails;
- (id)getNowPlayingDetails;
- (id)currentArtistName;
- (id)currentAlbumName;
- (id)currentTrackName;
- (id)currentTrack;
- (void)getStationsForGenre:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getGenresWithBlock:(CDUnknownBlockType)arg1;
- (void)getLibraryStationsWithBlock:(CDUnknownBlockType)arg1;
- (void)playSearchResultsTrack:(id)arg1;
- (void)playStationForCurrentArtist;
- (void)playArtistStation:(id)arg1;
- (void)playTopTracksTrackAtIndex:(long long)arg1;
- (void)playAlbumFromSearch:(id)arg1;
- (void)playAlbumFromNewReleases:(id)arg1;
- (void)playAlbum:(id)arg1;
- (void)playDownloadedTrackAt:(long long)arg1;
- (void)playDownloadedAlbum:(id)arg1;
- (void)playDownloadedPlaylist:(id)arg1;
- (void)playProgrammedStation:(id)arg1;
- (void)playLibraryStation:(id)arg1;
- (void)playMyFavorites;
- (void)playFeaturedPlaylist:(id)arg1;
- (void)playLibraryPlaylist:(id)arg1;
- (void)pauseIfPlaying;
- (void)resumeIfPaused;
- (void)startPlayingTrackAt:(long long)arg1;
- (void)setShuffle:(_Bool)arg1;
- (void)previousTrack;
- (void)nextTrack;
- (void)togglePlayPause;
- (void)addToFavorites;
- (void)getMyPlaylistsWithBlock:(CDUnknownBlockType)arg1;
- (void)getFeaturedPlaylistsWithBlock:(CDUnknownBlockType)arg1;
- (void)playbackStateDidChange:(id)arg1;
@property(readonly) _Bool isConnected;
- (void)didConnectToBMW;
- (void)handleApplicationDisconnection;
- (void)applicationDidDisconnect;
- (void)applicationDidFailToConnect;
- (void)applicationDidConnect;
- (void)applicationDidConnectToVehicle;
- (void)updateConnectionsToRhapsodyControllers;
- (void)unregisterForRhapsodyNotifications;
- (void)registerForRhapsodyNotifications;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
- (void)displayMessage:(id)arg1;
- (void)destroyRhapsodyDataObjects;
- (void)createRhapsodyDataHelperObjects;
@property(readonly, nonatomic) RAPIMainController *RAPIController;
- (void)createAndConfigureBMW;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

