//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "RHPlayerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class CMPopTipView, FBKVOController, GCKUICastButton, NSString, NSTimer, RHActivityIndicatorView, RHButton, RHPlayerController, RHPlayerSliderBase, RHRootViewController_ipad, RHSharingService, RHTrackMO, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UINavigationController, UIViewController, ZDSDeferred, ZDSPromise, _TtC7Napster17GoogleCastManager, _TtC7Napster18RHBlurredImageView, _TtC7Napster21VarietyViewController;
@protocol ActionSheet, RHImageProvider;

@interface RHPlayerViewControllerBase : RHViewController <UIPopoverPresentationControllerDelegate, UIPopoverControllerDelegate, RHPlayerDelegate>
{
    _Bool _userScrubbing;
    int _state;
    UIViewController *_volumePopover;
    RHTrackMO *_currentTrack;
    RHTrackMO *_nextTrack;
    RHTrackMO *_previousTrack;
    UIActivityIndicatorView *_activityIndicator;
    RHActivityIndicatorView *_customActivityIndicator;
    UIImageView *_albumImage;
    UIImage *_currentAlbumImage;
    UILabel *_trackNameLabel;
    UILabel *_artistNameLabel;
    UILabel *_extraInfoLabel;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_playbackStatusLabel;
    UIButton *_prevButton;
    UIButton *_playPauseButton;
    UIButton *_nextButton;
    UIButton *_fullPlayerButton;
    UIButton *_shuffleButton;
    RHButton *_repeatButton;
    UIButton *_volumeButton;
    UIButton *_plusButton;
    UIButton *_thumbsUpButton;
    UIButton *_thumbsDownButton;
    UIButton *_favoritesButton;
    UIButton *_bookmarkButton;
    UIButton *_equalizerButton;
    UIButton *_artistNameButton;
    UIButton *_sourceNameButton;
    UIButton *_varietyButton;
    RHPlayerSliderBase *_scrubBar;
    double _lastScrubValue;
    UILabel *_radioSkipsRemainingBadgeLabel;
    UIImageView *_radioSkipsRemainingBadgeImageView;
    _TtC7Napster21VarietyViewController *_varietyViewController;
    FBKVOController *_keyValueObserver;
    id <ActionSheet> _actionSheet;
    ZDSDeferred *__nextTrackDeferred;
    ZDSPromise *_toggleFavortiesPromise;
    ZDSPromise *_albumImagePromise;
    GCKUICastButton *_googleCastButton;
    _TtC7Napster17GoogleCastManager *_googleCastManager;
    _TtC7Napster18RHBlurredImageView *_blurredImageView;
    UIButton *_sleepButton;
    CMPopTipView *_likeDisabledTooltip;
    NSTimer *_likeDisabledTooltipTimer;
    CMPopTipView *_dislikeDisabledTooltip;
    NSTimer *_dislikeDisabledTooltipTimer;
}

+ (void)initialize;
@property(retain, nonatomic) NSTimer *dislikeDisabledTooltipTimer; // @synthesize dislikeDisabledTooltipTimer=_dislikeDisabledTooltipTimer;
@property(retain, nonatomic) CMPopTipView *dislikeDisabledTooltip; // @synthesize dislikeDisabledTooltip=_dislikeDisabledTooltip;
@property(retain, nonatomic) NSTimer *likeDisabledTooltipTimer; // @synthesize likeDisabledTooltipTimer=_likeDisabledTooltipTimer;
@property(retain, nonatomic) CMPopTipView *likeDisabledTooltip; // @synthesize likeDisabledTooltip=_likeDisabledTooltip;
@property(nonatomic) __weak UIButton *sleepButton; // @synthesize sleepButton=_sleepButton;
@property(nonatomic) __weak _TtC7Napster18RHBlurredImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(readonly, nonatomic) _TtC7Napster17GoogleCastManager *googleCastManager; // @synthesize googleCastManager=_googleCastManager;
@property(retain, nonatomic) GCKUICastButton *googleCastButton; // @synthesize googleCastButton=_googleCastButton;
@property(retain, nonatomic) ZDSPromise *albumImagePromise; // @synthesize albumImagePromise=_albumImagePromise;
@property(retain, nonatomic) ZDSPromise *toggleFavortiesPromise; // @synthesize toggleFavortiesPromise=_toggleFavortiesPromise;
@property(retain, nonatomic) ZDSDeferred *_nextTrackDeferred; // @synthesize _nextTrackDeferred=__nextTrackDeferred;
@property(retain, nonatomic) id <ActionSheet> actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) FBKVOController *keyValueObserver; // @synthesize keyValueObserver=_keyValueObserver;
@property(retain, nonatomic) _TtC7Napster21VarietyViewController *varietyViewController; // @synthesize varietyViewController=_varietyViewController;
@property(retain, nonatomic) UIImageView *radioSkipsRemainingBadgeImageView; // @synthesize radioSkipsRemainingBadgeImageView=_radioSkipsRemainingBadgeImageView;
@property(retain, nonatomic) UILabel *radioSkipsRemainingBadgeLabel; // @synthesize radioSkipsRemainingBadgeLabel=_radioSkipsRemainingBadgeLabel;
@property(nonatomic) double lastScrubValue; // @synthesize lastScrubValue=_lastScrubValue;
@property(nonatomic) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(retain, nonatomic) RHPlayerSliderBase *scrubBar; // @synthesize scrubBar=_scrubBar;
@property(nonatomic) __weak UIButton *varietyButton; // @synthesize varietyButton=_varietyButton;
@property(nonatomic) __weak UIButton *sourceNameButton; // @synthesize sourceNameButton=_sourceNameButton;
@property(nonatomic) __weak UIButton *artistNameButton; // @synthesize artistNameButton=_artistNameButton;
@property(nonatomic) __weak UIButton *equalizerButton; // @synthesize equalizerButton=_equalizerButton;
@property(nonatomic) __weak UIButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
@property(nonatomic) __weak UIButton *favoritesButton; // @synthesize favoritesButton=_favoritesButton;
@property(nonatomic) __weak UIButton *thumbsDownButton; // @synthesize thumbsDownButton=_thumbsDownButton;
@property(nonatomic) __weak UIButton *thumbsUpButton; // @synthesize thumbsUpButton=_thumbsUpButton;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) RHButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(retain, nonatomic) UIButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(retain, nonatomic) UIButton *fullPlayerButton; // @synthesize fullPlayerButton=_fullPlayerButton;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) UIButton *prevButton; // @synthesize prevButton=_prevButton;
@property(retain, nonatomic) UILabel *playbackStatusLabel; // @synthesize playbackStatusLabel=_playbackStatusLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UILabel *extraInfoLabel; // @synthesize extraInfoLabel=_extraInfoLabel;
@property(retain, nonatomic) UILabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) UILabel *trackNameLabel; // @synthesize trackNameLabel=_trackNameLabel;
@property(retain, nonatomic) UIImage *currentAlbumImage; // @synthesize currentAlbumImage=_currentAlbumImage;
@property(retain, nonatomic) UIImageView *albumImage; // @synthesize albumImage=_albumImage;
@property(nonatomic) __weak RHActivityIndicatorView *customActivityIndicator; // @synthesize customActivityIndicator=_customActivityIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) RHTrackMO *previousTrack; // @synthesize previousTrack=_previousTrack;
@property(retain, nonatomic) RHTrackMO *nextTrack; // @synthesize nextTrack=_nextTrack;
@property(retain, nonatomic) RHTrackMO *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) UIViewController *volumePopover; // @synthesize volumePopover=_volumePopover;
- (void).cxx_destruct;
- (void)sharedSocialContentForPlatform:(id)arg1 additionalAttributes:(id)arg2;
- (void)sharedSocialContentForPlatform:(id)arg1;
- (id)shareMetricsProperties;
- (id)metricsScreenName;
- (void)logPageViewEvent;
- (void)logRepeatModeChange;
@property(readonly, nonatomic) RHRootViewController_ipad *baseViewController;
@property(readonly, nonatomic) RHPlayerController *playerController;
- (id)dataController;
- (id)reachabilityService;
@property(readonly, nonatomic) RHSharingService *sharingService;
- (id)dependencies;
@property(readonly, nonatomic) id <RHImageProvider> imageProvider;
@property(readonly, nonatomic) UINavigationController *selectedNavController;
- (void)animateBounceFromValue:(id)arg1 toValue:(id)arg2 layer:(id)arg3;
- (void)animateNoNextTrackBounceWithLayer:(id)arg1;
- (void)animateNoPreviousTrackBounceWithLayer:(id)arg1;
- (void)animateContentChangeWithTransitionSubtype:(id)arg1 layer:(id)arg2;
- (void)updateGoogleCastButton;
- (void)googleCastConnectionStatusChanged:(id)arg1;
- (void)googleCastListChanged:(id)arg1;
- (_Bool)googleCastEnableSupport;
- (void)addKidsModeButtonsToActionSheet:(id)arg1;
- (void)addViewSourceButtonToActionSheet:(id)arg1;
- (void)addViewAlbumButtonToActionSheet:(id)arg1;
- (void)addPlayTrackRadioButtonToActionSheet:(id)arg1;
- (void)addShareButtonToActionSheet:(id)arg1 anchor:(id)arg2;
- (void)showSleepActionSheetWithAnchor:(id)arg1;
- (void)addSleepButtonToActionSheet:(id)arg1 anchor:(id)arg2;
- (void)addDownloadButtonsToActionSheet:(id)arg1;
- (void)addLibraryButtonsToActionSheet:(id)arg1;
- (void)addDiscoverFansButtonToActionSheet:(id)arg1;
- (void)addQueueButtonToActionSheet:(id)arg1;
- (void)addBookmarksButtonToActionSheet:(id)arg1;
- (void)addFavoritesButtonToActionSheet:(id)arg1;
- (void)addStationLibraryButtonToActionSheet:(id)arg1;
- (void)trackFavoritesStateChanged:(id)arg1;
- (void)toggleFavorites;
- (void)addBookmark;
- (void)bookmarkButtonTapped:(id)arg1;
- (void)favoritesButtonTapped:(id)arg1;
- (void)closeFullScreenPlayer;
- (void)prepareAlbumViewForTrack:(id)arg1;
- (void)showAlbumForTrack:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)closeAndReleaseVolumePopoverIfVisible;
- (void)varietyButtonTapped:(id)arg1;
- (void)equalizerButtonTapped:(id)arg1;
- (void)thumbsDownTapped:(id)arg1;
- (void)thumbsUpTapped:(id)arg1;
- (id)currentStationTrack;
- (id)stationSession;
- (void)sourceNameTapped:(id)arg1;
- (void)artistNameTapped:(id)arg1;
- (void)playbackSourceButtonTapped:(id)arg1;
- (void)scrubberEndDrag:(id)arg1;
- (void)scrubberDragged:(id)arg1;
- (void)repeatButtonTapped:(id)arg1;
- (void)shuffleButtonTapped:(id)arg1;
- (void)plusButtonTapped:(id)arg1;
- (void)previousButtonTapped:(id)arg1;
- (void)nextButtonTapped:(id)arg1;
- (void)volumeButtonTapped:(id)arg1;
- (void)playPauseButtonTapped:(id)arg1;
@property(readonly, nonatomic) _Bool isBookmarkingAvailable;
- (void)tagTrackWithGuid:(id)arg1 newLikeness:(long long)arg2 oldLikeness:(long long)arg3;
- (void)updateThumbsButtonStateWithLikeness:(long long)arg1;
- (void)updateBlurredImage;
- (void)updateImage;
- (void)ensureImageFetched:(id)arg1 withSize:(struct CGSize)arg2;
- (void)setButtonStateImages;
- (void)networkStatusChanged:(id)arg1;
- (void)setIphoneSelectedItem:(long long)arg1;
- (void)showMyMusicArtistTracksWithDownloadedOnly:(_Bool)arg1;
- (void)showFollowingPlaylist;
- (void)showListenersPlaylist;
- (void)showCombinedPlaylist;
- (void)showTastePlaylist;
- (void)showTrackCharts;
- (void)showFavoriteTracks:(_Bool)arg1;
- (void)showHistory;
- (void)showQueue;
- (void)showPlayingDownloadedPlaylist;
- (void)showPlayingPlaylistInLibrary;
- (void)showPlayingPublishedPlaylist;
- (void)showPlayingDownloadedTracks;
- (void)showNewReleasesSampler;
- (void)showPlayingAllTracks;
- (void)showPlayingDownloadedAlbum;
- (void)showPlayingAlbumInLibrary;
- (void)showPlayingAlbum;
- (void)showPlayingPopularTopTrackHighlights;
- (void)showPlayingGenreTrackHighlights;
- (void)showPlayingArtistTrackHighlights;
- (void)switchFromNonStackTab;
- (void)pushViewControllersOnCurrentNavStack:(id)arg1 animated:(_Bool)arg2;
- (id)visibleViewControllerAfterDismissal;
- (void)showTracksForMode:(long long)arg1;
- (void)showTracks;
- (void)showArtist;
- (void)removeStationFromLibrary:(id)arg1;
- (void)addStationToLibrary:(id)arg1;
- (void)removeTrackFromDownloads:(id)arg1;
- (void)cancelDownloadLease:(id)arg1;
- (void)downloadTrack:(id)arg1;
- (void)queueTracks:(id)arg1;
- (void)reportAddToLibraryForTrackGuid:(id)arg1;
- (void)removeTrackFromLibrary:(id)arg1;
- (void)addTrackToLibrary:(id)arg1;
- (id)durationFromTimeInterval:(double)arg1;
- (void)updateScrubBarForTrackTime:(double)arg1 andPlayheadPosition:(double)arg2;
- (void)configureForTrackChangeTo:(id)arg1;
- (void)configureForPlayerStateChange;
- (_Bool)canNavigateToSource;
- (_Bool)canNavigateToArtist;
- (void)updateShuffleButton;
- (void)updateButtons;
- (void)updateLikedButtons;
- (void)updateFavoritesButton;
- (_Bool)favoritesButtonEnabled;
- (id)nextTrackDeferred;
- (id)verticalTabBarController;
- (void)playerController:(id)arg1 changedPlayheadPosition:(double)arg2;
- (void)playerController:(id)arg1 changedNextItemTo:(id)arg2;
- (void)playerController:(id)arg1 changedCurrentItemFrom:(id)arg2 toItem:(id)arg3;
- (void)playerController:(id)arg1 changedFromState:(long long)arg2 toState:(long long)arg3;
- (void)completeTrackSourceChangeForProvider:(id)arg1;
- (void)pendingTrackSourceChangeForProvider:(id)arg1;
- (void)updateRepeatButton;
- (void)updateTracks;
- (id)playbackSourceDescriptionForTrack:(id)arg1;
- (void)updateScrubView;
@property(readonly, nonatomic) NSString *defaultArtistAndSourceText;
- (id)artistNameLabelForTrack:(id)arg1;
- (id)connectedGoogleCastDeviceText;
- (void)updateLabels;
- (id)artistNameText;
- (void)updateViews;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (void)showDislikeDisabledTooltip;
- (void)showLikeDisabledTooltip;
- (void)trackRating:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

