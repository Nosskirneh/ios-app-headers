//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVC_n.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ChromecastManager, HistoryObject, LyricsManager, LyricsSnippetView, LyricsVC, LyricsView, MiniPlayer, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PlayerAnimator, PlayerArtScroller, PlayerControls, PlayerEmptyState, RadioFooter, SaavnStreamer, SaavnTabBar, UIButton, UIView, UserData, iPadSpotlight;

@interface PlayerVC : SaavnVC_n <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *playerData;
    NSMutableArray *queue;
    NSMutableArray *shuffleQueue;
    NSMutableArray *shuffleIndexes;
    NSMutableArray *editingQueue;
    long long currentSong;
    NSString *currentlyPlayingSongUrl;
    NSString *currentPlayingSongPid;
    NSString *stationName;
    NSMutableDictionary *currentRadioSong;
    NSDictionary *currentLibrarySong;
    UserData *uData;
    SaavnStreamer *streamer;
    _Bool isShuffle;
    _Bool isRepeat;
    _Bool isRepeatSingle;
    _Bool isDeletingRow;
    _Bool isBulkEditing;
    _Bool slidingToNowPlaying;
    long long audioQualityBitrate;
    UIButton *optionsBtn;
    UIButton *editCancelBtn;
    PlayerAnimator *animator;
    SaavnTabBar *tabBar;
    MiniPlayer *miniPlayer;
    double statusBarH;
    _Bool draggingTable;
    _Bool scrollToDismiss;
    _Bool dismissCancelled;
    _Bool deceleratingFromDrag;
    _Bool artScrolled;
    PlayerArtScroller *artScroller;
    _Bool viewReady;
    _Bool playerLoadedAtLaunch;
    _Bool viewLoadedOnce;
    UIView *loadingView;
    PlayerEmptyState *emptyState;
    _Bool crossFadeEnabled;
    _Bool showJioTune;
    long long currentLibrarySongIndex;
    long long fetchedSongStartIndex;
    long long fetchedSongEndIndex;
    _Bool isPlayingDownloadedSongsOnly;
    _Bool isFetchingDownloads;
    _Bool songMarkedForDelete;
    NSString *songToPlayNext;
    NSString *librarySourceView;
    NSMutableDictionary *libraryContext;
    NSMutableArray *fetchedSongs;
    NSMutableArray *allSongIds;
    NSMutableArray *shuffledSongIds;
    NSMutableArray *shuffledSongIdIndices;
    ChromecastManager *castManager;
    _Bool isChromecastAvailable;
    _Bool isChromecastConnected;
    long long adsSongCount;
    iPadSpotlight *iPadMRec;
    UIView *iPadAdBevel;
    UIView *iPadAdTopBevel;
    UIView *iPadAdBtmBevel;
    LyricsView *lyricsView;
    _Bool isLyricsMiniDisplay;
    LyricsManager *lyricsManager;
    LyricsSnippetView *snippetView;
    LyricsVC *lyricsVC;
    _Bool _speakersAvailable;
    _Bool _bannerBelowControls;
    int _playerMode;
    int _radioMode;
    PlayerControls *_controls;
    RadioFooter *_radioFooter;
    NSMutableDictionary *_radioStation;
    HistoryObject *_queueobj;
    HistoryObject *_radioQueueObj;
}

@property(retain) HistoryObject *radioQueueObj; // @synthesize radioQueueObj=_radioQueueObj;
@property(retain) HistoryObject *queueobj; // @synthesize queueobj=_queueobj;
@property(retain) NSMutableDictionary *radioStation; // @synthesize radioStation=_radioStation;
@property(nonatomic) _Bool bannerBelowControls; // @synthesize bannerBelowControls=_bannerBelowControls;
@property(nonatomic) _Bool speakersAvailable; // @synthesize speakersAvailable=_speakersAvailable;
@property(retain, nonatomic) RadioFooter *radioFooter; // @synthesize radioFooter=_radioFooter;
@property(nonatomic) int radioMode; // @synthesize radioMode=_radioMode;
@property(retain, nonatomic) PlayerControls *controls; // @synthesize controls=_controls;
@property(nonatomic) int playerMode; // @synthesize playerMode=_playerMode;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)enterForegroundState;
- (void)enterBackgroundState;
- (void)unHideBannerAd;
- (void)hideBannerAd:(_Bool)arg1;
- (void)showBannerAd:(_Bool)arg1;
- (double)adBannerHeight;
- (void)hideOrShowAdBanner;
- (long long)getSongCountForAds;
- (void)logEvent:(id)arg1 songId:(id)arg2;
- (void)purchaseSuccessful;
- (void)CCast_updateTitle;
- (void)seekToTime:(double)arg1;
- (void)seekAfterChromecastDisconnect:(id)arg1;
- (void)playAndSeekWithValue:(double)arg1;
- (long long)CCast_getIndexOnQueueList:(long long)arg1;
- (long long)CCast_getQueueIndex;
- (id)CCast_getQueue;
- (id)CCast_getCurrentQueue;
- (void)CCast_updateNowPlayingWithIndex:(int)arg1;
- (void)chromecastUpdate:(id)arg1;
- (id)getCastManager;
- (void)chooseChromecastDevice:(id)arg1;
- (void)initChromecast;
- (void)updateMPNowPlayingInfoCenterProgress:(id)arg1;
- (void)updateMPNowPlayingInfoCenter;
- (void)seekRequested:(double)arg1;
- (void)updateTimeStampLyrics:(double)arg1;
- (void)updateProgress:(id)arg1;
- (void)handleStreamerFinishedAudioAdFailed;
- (void)handleStreamerFinished;
- (void)handleStreamerStopped;
- (void)handleStreamerPause;
- (void)handleStreamerPlay;
- (void)stopPlayback;
- (void)resumePlayback;
- (id)getStreamerContext;
- (id)getStreamer;
- (void)clearAllCachedSongs;
- (void)songUnCached:(id)arg1;
- (void)songCached:(id)arg1;
- (void)cacheAll;
- (void)songRightsChanged:(int)arg1 songId:(id)arg2 deleteCachedObj:(_Bool)arg3 new_cache_rights:(id)arg4;
- (id)updateRadioSong:(id)arg1;
- (void)updatePlayerQueueSongs:(id)arg1;
- (id)updateSingleSongInPlayerQueue:(id)arg1;
- (void)changePlayerQueueSong:(id)arg1;
- (id)getCurrentStationName;
- (id)getUniqueHistoryIdFromSongs;
- (_Bool)isBuffering;
- (_Bool)isPaused;
- (_Bool)isStreaming;
- (_Bool)isPlaying;
- (_Bool)isPlayerInEditMode;
- (_Bool)isLibraryPlayer;
- (_Bool)isRadio;
- (_Bool)isRepeatSingle;
- (_Bool)isRepeat;
- (_Bool)isShuffling;
- (_Bool)isNextEnabled;
- (_Bool)isQueueEmpty;
- (long long)getCurrentSongWithoutShuffle;
- (long long)getIndexOfSong;
- (void)updateMyLibrarySongList:(id)arg1;
- (void)refreshLibrarySongIDs:(id)arg1 playAtIndex:(unsigned long long)arg2 deleteCurrentSong:(_Bool)arg3;
- (id)getNextLibrarySong:(id)arg1;
- (void)updateIndexesForSongIDArray:(id)arg1 aroundPlayIndex:(long long)arg2;
- (void)loadLibraryWithSongIDs:(id)arg1 playAtIndex:(unsigned long long)arg2 startPlaying:(_Bool)arg3 context:(id)arg4 downloadsOnly:(_Bool)arg5;
- (void)stationSavedWithName:(id)arg1 andStationID:(id)arg2;
- (void)setRadioFromHistory:(id)arg1;
- (void)storeStation:(id)arg1 name:(id)arg2 andType:(int)arg3 startingView:(id)arg4;
- (void)updateRadioHistory:(int)arg1 fromSource:(id)arg2 withStationId:(id)arg3;
- (void)toggleRadioMode;
- (void)updateRadioModeToRestart:(int)arg1;
- (void)updateRadioMode:(int)arg1 whileStartingStation:(_Bool)arg2;
- (void)updateRadioTopSource:(id)arg1;
- (void)setCurrentStation:(id)arg1 ofType:(int)arg2 withId:(id)arg3 fromCurrentSong:(_Bool)arg4 loadFromSong:(id)arg5 viaHistory:(_Bool)arg6 topSourceData:(id)arg7 andSourceView:(id)arg8;
- (void)loadStation:(id)arg1 ofType:(int)arg2 withName:(id)arg3 startingFromSong:(id)arg4 withOriginalSource:(id)arg5 updateRadio:(_Bool)arg6;
- (void)startSavedUserStationFrom:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startArtistStationFrom:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startFeaturedStation:(id)arg1 withArtist:(_Bool)arg2 inRadioMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startUserProfileStation:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startLibraryStation:(id)arg1 inMode:(int)arg2 updateRadio:(_Bool)arg3;
- (void)startAlbumStation:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startPlaylistStation:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startChannelStation:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startChannelStationFrom:(id)arg1 atFirstSong:(id)arg2 inMode:(int)arg3 updateRadio:(_Bool)arg4;
- (void)startSearchStationFrom:(id)arg1 inMode:(int)arg2 updateRadio:(_Bool)arg3;
- (void)startSongStationFrom:(id)arg1 inMode:(int)arg2 updateRadio:(_Bool)arg3;
- (void)startRadio:(int)arg1 fromSource:(id)arg2 atFirstSong:(id)arg3 inMode:(int)arg4 restartRadio:(_Bool)arg5;
- (void)updateButtonStates;
- (void)refreshTableFooter;
- (void)showLyricsPopover;
- (void)hideLyricsSnippetView;
- (void)showLyricsSnippetView;
- (void)updateNowPlaying:(_Bool)arg1;
- (void)loadSong:(id)arg1;
- (void)playRadioSong:(id)arg1;
- (void)radioError:(id)arg1;
- (void)radioSuccess:(id)arg1;
- (id)radioFetchParamsForFirstSong:(_Bool)arg1;
- (void)getNextRadioSong:(_Bool)arg1;
- (_Bool)playNextOfflineSong;
- (void)previous;
- (void)next;
- (void)getNextSong:(CDUnknownBlockType)arg1;
- (void)pausePlayer;
- (void)playLibrarySong;
- (void)playSongAtIndex:(long long)arg1 viaPrevious:(_Bool)arg2;
- (void)playSongAtIndex:(long long)arg1;
- (void)play;
- (id)getAutoPlayObjectFromPlayerQueue;
- (void)startAutoPlayRadioWithEntity:(id)arg1;
- (void)savePlayerState;
- (_Bool)librarySongOutOfBounds:(long long)arg1;
- (_Bool)songOutOfBounds:(long long)arg1;
- (void)queueSaved:(id)arg1 fromPlayer:(_Bool)arg2;
- (void)clearQueue:(_Bool)arg1 shouldSaveQueue:(_Bool)arg2;
- (void)resetShuffleForQueueMode:(_Bool)arg1;
- (long long)getNextAvailableTrackViaPrevious:(_Bool)arg1;
- (void)refreshQueueAtCurrentSong:(int)arg1;
- (void)refreshQueue;
- (void)thumbsDownTapped;
- (void)thumbsUpTapped;
- (void)setRepeatOff;
- (void)repeatTapped;
- (void)forceShuffleOff;
- (void)shuffleTapped:(_Bool)arg1;
- (void)previousTapped;
- (void)nextTapped;
- (void)pauseTapped;
- (void)playTapped;
- (void)togglePlayPause;
- (void)refreshPlayerModeUI;
- (void)radioOff;
- (void)resetPlayerMode;
- (void)updatePlayerMode:(int)arg1;
- (void)iPadPlayerInit;
- (void)playerLoaded;
- (void)doneEditingBtnTapped;
- (void)deleteBtnTapped;
- (void)cancelEditingBtnTapped;
- (void)endEditingQueueWithChanges:(_Bool)arg1;
- (void)startEditingQueue;
- (void)tadaNowPlayingCell;
- (void)jumpToNowPlaying;
- (void)loadHistoryInModal;
- (void)navTitleTapped:(id)arg1;
- (void)stopAddingToQueue;
- (void)clearQueuePrompt;
- (void)playerOptions;
- (void)artScrolledIntoView;
- (void)artScrolledOutView;
- (void)unpinArtView;
- (void)pinArtView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateShuffleAfterQueueEdit;
- (void)updateNowPlayingAfterQueueEdit;
- (void)updateQueueWithoutChangingSong;
- (void)removeSong:(id)arg1 fromTable:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)showJioTuneCell;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setJioTune;
- (void)jioTunesBtnTapped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCurrentRadioSong;
- (long long)getFetchedSongEndIndex;
- (long long)getFetchedSongStartIndex;
- (id)getLibraryFetchedSongs;
- (id)getLibraryShuffledSongIds;
- (id)getLibrarySongIds;
- (id)getCurrentLibrarySong;
- (double)getArtworkHeight;
- (id)getArtScroller;
- (_Bool)showQueue;
- (id)getNowPlaying;
- (id)getShuffleQueue;
- (id)getQueue;
- (id)getFauxNav;
- (void)updateOfflineMode;
- (void)crossfadeStateChanged:(id)arg1;
- (void)homepageDataFetched:(id)arg1;
- (void)updateProMode;
- (void)updateUIMode;
- (void)refreshEmptyState;
- (void)hidePlayerEmptyState;
- (void)showPlayerEmptyState;
- (void)buildLoadingView;
- (void)iPadAdSetup;
- (void)initAds;
- (void)clearNowPlaying;
- (void)updateNavTitle;
- (void)refreshArtwork;
- (void)setTableInsets;
- (void)initMainTable;
- (id)lyricsView;
- (void)initLyricsView;
- (void)initExternalSpeakers;
- (void)initControls;
- (void)initShuffleAndRepeatStates;
- (void)closePlayer;
- (void)initFauxNav;
- (long long)preferredStatusBarStyle;
- (void)initInteractiveTransitions;
- (void)initData;
- (void)buildPlayer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)playerInit;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

