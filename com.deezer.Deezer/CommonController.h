//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZRCommonControllerStackable-Protocol.h"
#import "DZRNavigationLoggable-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DZRNavigationItem, DZRNavigationRightBarButtonsManager, DZRRefreshTrigger, LoadingView, NSArray, NSDictionary, NSString, NoDataView, UIAlertController, UIBarButtonItem, UIColor, UILabel, UIRefreshControl, UIView;
@protocol DZRNavigationLoggerProtocol;

@interface CommonController : UIViewController <DZRCommonControllerStackable, UISearchBarDelegate, DZRNavigationLoggable, UIScrollViewDelegate>
{
    _Bool _firstAppearing;
    _Bool _hidesNavBarBackgroundDefault;
    _Bool _titleShouldBeAlwaysVisible;
    _Bool _shouldReverseTitleAndSubtitle;
    _Bool _dissociateNavigationBarTitleAlpha;
    _Bool _navigationBarShadowBasedOnScroll;
    _Bool _shouldDisplayRefreshControl;
    _Bool _viewAppearing;
    _Bool _viewDisappearing;
    _Bool _shouldDisplayShadow;
    double _navigationBarTitleAlpha;
    long long _titleAlignment;
    unsigned long long _navigationBarShadowStyle;
    DZRNavigationRightBarButtonsManager *_navigationRightBarButtonsManager;
    UIRefreshControl *_refreshControl;
    NoDataView *_noDataView;
    NSDictionary *_parameters;
    NSString *_subtitle;
    UIView *_titleView;
    UILabel *_controllerTitleLabel;
    UILabel *_controllerSubtitleLabel;
    UIColor *_controllerTitleColor;
    UIColor *_controllerSubtitleColor;
    DZRNavigationItem *_dzrNavigationItem;
    LoadingView *_loadingView;
    NSString *_savedTitle;
    NSString *_savedSubtitle;
    unsigned long long _savedNavigationBarState;
    NSArray *_pendingRightBarButtonItems;
    id _networkObserver;
    UIBarButtonItem *_dismissButton;
    UIAlertController *_errorAlert;
    DZRRefreshTrigger *_refreshTrigger;
    id <DZRNavigationLoggerProtocol> _logger;
}

+ (void)dzrGoToSampledCollection:(id)arg1;
+ (void)dzrGoToCarModeLegal;
+ (void)dzrGoToCarMode;
+ (void)dzrGoToSettingsWithRootPage:(unsigned long long)arg1;
+ (void)dzrGoToSettingsAtPage:(unsigned long long)arg1;
+ (void)dzrGoToSettings;
+ (void)dzrGoToFamily;
+ (void)dzrGoToURL:(id)arg1 withTitle:(id)arg2 andSubTitle:(id)arg3;
+ (void)dzrGoToURL:(id)arg1;
+ (void)dzrGoToApp:(id)arg1;
+ (void)dzrGoToFriends:(id)arg1;
+ (void)dzrGoToTalkShowDetails:(id)arg1;
+ (void)dzrGoToProfileTalkDownloadedEpisodesPlaylist:(id)arg1;
+ (void)dzrGoToTalkShowLatestEpisodes:(id)arg1;
+ (void)dzrGoToTalkShow:(id)arg1;
+ (void)dzrGoToMix:(id)arg1 withListeningOrigin:(unsigned long long)arg2 shouldAutoPlay:(_Bool)arg3;
+ (void)dzrGoToPlaylist:(id)arg1 fromFriend:(id)arg2 autoPlay:(_Bool)arg3 showLyrics:(_Bool)arg4;
+ (void)dzrGoToPlaylist:(id)arg1 fromFriend:(id)arg2;
+ (void)dzrGoToPlaylist:(id)arg1;
+ (void)dzrGoToPlaylists;
+ (void)dzrGoToArtistBiography:(id)arg1;
+ (void)dzrGoToArtistSimilarArtists:(id)arg1;
+ (void)dzrGoToArtistRelatedPlaylists:(id)arg1;
+ (void)dzrGoToArtistTopTracks:(id)arg1;
+ (void)dzrGoToArtistDiscography:(id)arg1 withAlbumType:(unsigned long long)arg2;
+ (void)dzrGoToArtistFeaturedDiscography:(id)arg1;
+ (void)dzrGoToArtistDiscography:(id)arg1;
+ (void)dzrGoToArtist:(id)arg1 autoPlay:(_Bool)arg2;
+ (void)dzrGoToArtist:(id)arg1;
+ (void)dzrGoToAlbum:(id)arg1 autoPlay:(_Bool)arg2 showLyrics:(_Bool)arg3 download:(_Bool)arg4;
+ (void)dzrGoToAlbum:(id)arg1;
+ (void)dzrGoToSearch:(id)arg1 withResultType:(long long)arg2 andOfflineResults:(id)arg3;
+ (void)dzrGoToSuggest:(id)arg1;
+ (void)dzrGoToNotifications;
+ (void)dzrGoToSmartTracklist:(id)arg1;
+ (void)dzrGoToFlowTab;
+ (void)dzrGoToFlow;
+ (_Bool)dzrPlayerIsDisplayed;
+ (void)dzrDismissPlayerIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dzrGoToLyrics;
+ (void)dzrGoToPlayerDisplayingSubscriptionMessage:(id)arg1 listeningOrigin:(unsigned long long)arg2;
+ (void)dzrGoToPlayer;
+ (void)dzrGoToAudiobook:(id)arg1 shouldAutoPlay:(_Bool)arg2;
+ (void)dzrGoToAudiobook:(id)arg1;
+ (void)dzrGoToAudiobookFavorites;
+ (void)dzrGoToAppStudio;
+ (void)dzrGoToFollowingsForFriend:(id)arg1;
+ (void)dzrGoToFollowersForFriend:(id)arg1;
+ (void)dzrGoToUploadedTracks;
+ (void)dzrGoToProfileTopTracksForFriend:(id)arg1;
+ (void)dzrGoToProfileHistoryForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoriteWebApplicationsForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoriteTalksForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoriteMixesForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoritePlaylistsForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoriteArtistsForFriend:(id)arg1;
+ (void)dzrGoToProfileFavoriteAlbumsForFriend:(id)arg1;
+ (void)dzrGoToDownloadedMusic;
+ (void)dzrGoToUserProfile:(id)arg1;
+ (void)dzrGoToViewControllerClass:(Class)arg1;
+ (void)dzrGoToTalkShows;
+ (void)dzrGoHome;
+ (id)sanitizedDynamicPageName:(id)arg1;
+ (void)dzrGoToDynamicPageWithName:(id)arg1 andParameters:(id)arg2;
+ (void)dzrGoToDynamicPageWithName:(id)arg1;
+ (id)topMostController;
+ (long long)preferredTabIndexWithParameters:(id)arg1;
+ (void)setAppDelegate:(id)arg1;
+ (id)dzrAppDelegate;
@property(retain, nonatomic) id <DZRNavigationLoggerProtocol> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) DZRRefreshTrigger *refreshTrigger; // @synthesize refreshTrigger=_refreshTrigger;
@property(retain, nonatomic) UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
@property(retain, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) id networkObserver; // @synthesize networkObserver=_networkObserver;
@property(retain, nonatomic) NSArray *pendingRightBarButtonItems; // @synthesize pendingRightBarButtonItems=_pendingRightBarButtonItems;
@property(nonatomic) _Bool shouldDisplayShadow; // @synthesize shouldDisplayShadow=_shouldDisplayShadow;
@property(nonatomic) unsigned long long savedNavigationBarState; // @synthesize savedNavigationBarState=_savedNavigationBarState;
@property(retain, nonatomic) NSString *savedSubtitle; // @synthesize savedSubtitle=_savedSubtitle;
@property(retain, nonatomic) NSString *savedTitle; // @synthesize savedTitle=_savedTitle;
@property(retain, nonatomic) LoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) DZRNavigationItem *dzrNavigationItem; // @synthesize dzrNavigationItem=_dzrNavigationItem;
@property(retain, nonatomic) UIColor *controllerSubtitleColor; // @synthesize controllerSubtitleColor=_controllerSubtitleColor;
@property(retain, nonatomic) UIColor *controllerTitleColor; // @synthesize controllerTitleColor=_controllerTitleColor;
@property(retain, nonatomic) UILabel *controllerSubtitleLabel; // @synthesize controllerSubtitleLabel=_controllerSubtitleLabel;
@property(retain, nonatomic) UILabel *controllerTitleLabel; // @synthesize controllerTitleLabel=_controllerTitleLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic, getter=isViewDisappearing) _Bool viewDisappearing; // @synthesize viewDisappearing=_viewDisappearing;
@property(nonatomic, getter=isViewAppearing) _Bool viewAppearing; // @synthesize viewAppearing=_viewAppearing;
@property(retain, nonatomic) NoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) _Bool shouldDisplayRefreshControl; // @synthesize shouldDisplayRefreshControl=_shouldDisplayRefreshControl;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) DZRNavigationRightBarButtonsManager *navigationRightBarButtonsManager; // @synthesize navigationRightBarButtonsManager=_navigationRightBarButtonsManager;
@property(nonatomic) unsigned long long navigationBarShadowStyle; // @synthesize navigationBarShadowStyle=_navigationBarShadowStyle;
@property(nonatomic) _Bool navigationBarShadowBasedOnScroll; // @synthesize navigationBarShadowBasedOnScroll=_navigationBarShadowBasedOnScroll;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double navigationBarTitleAlpha; // @synthesize navigationBarTitleAlpha=_navigationBarTitleAlpha;
@property(nonatomic) _Bool dissociateNavigationBarTitleAlpha; // @synthesize dissociateNavigationBarTitleAlpha=_dissociateNavigationBarTitleAlpha;
@property(nonatomic) _Bool shouldReverseTitleAndSubtitle; // @synthesize shouldReverseTitleAndSubtitle=_shouldReverseTitleAndSubtitle;
@property(nonatomic) _Bool titleShouldBeAlwaysVisible; // @synthesize titleShouldBeAlwaysVisible=_titleShouldBeAlwaysVisible;
@property(nonatomic) _Bool hidesNavBarBackgroundDefault; // @synthesize hidesNavBarBackgroundDefault=_hidesNavBarBackgroundDefault;
@property(readonly, nonatomic, getter=isFirstAppearing) _Bool firstAppearing; // @synthesize firstAppearing=_firstAppearing;
- (void).cxx_destruct;
- (void)presentError:(id)arg1;
- (id)navigationPath;
- (void)scrollViewDidScroll:(id)arg1;
- (void)goBack:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)updateTitleAlpha;
- (void)applyTitleColor;
- (void)updateNavigationBarShadow;
@property(nonatomic, getter=isNavigationBarDark) _Bool navigationBarDark;
- (void)updateNavigationBarAlpha;
- (void)updateRightBarButtonItems;
- (void)removeRightNavigationButton:(id)arg1;
- (void)addRightNavigationButton:(id)arg1 withPriority:(long long)arg2;
- (id)rightNavigationItems;
- (void)updateTopBarButtons;
- (void)showNoDataView:(_Bool)arg1;
- (void)refreshNoDataView;
- (struct CGRect)noDataViewFrame;
- (id)noDataText;
- (long long)dataType;
- (id)noDataDictionary;
- (void)showLoadingView:(_Bool)arg1;
- (struct CGRect)loadingViewFrame;
- (void)stopUpdatingView;
- (void)startUpdatingView;
- (void)displayOrHideRefreshControl;
- (void)scrollToTop;
- (void)updateUI;
- (void)refreshData;
- (_Bool)hasData;
- (_Bool)isLoading;
- (id)defaultBackgroundColor;
- (id)dataView;
- (_Bool)shouldObserveNetworkChanges;
- (id)navigationItem;
- (void)didTapTitleView;
- (_Bool)shouldEnableTitleViewAction;
- (double)titleFontSize;
- (void)setTitleColor:(id)arg1 subtitleColor:(id)arg2;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)applicationDidBecomeActive;
- (id)closeButtonImageName;
- (double)customBottomLayoutGuideLength;
- (double)customTopLayoutGuideLength;
- (id)dzrContentScrollView;
- (_Bool)shouldHideNavigationBar;
- (_Bool)shouldDisplayWhiteNavigationIcons;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateScrollViewInsets;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commonInit;
- (void)gateKeeperModuleDesactivated:(id)arg1;
- (_Bool)isAllowedToCastToReceivers;
- (long long)googleCastIconPriority;
- (void)presentReceivers:(id)arg1;
- (id)castButtonItem;
- (id)initializeCastButtonWithOrigin:(struct CGPoint)arg1;
- (_Bool)googleCastIsConnected;
- (_Bool)googleCastIsAvailable;
- (_Bool)shouldDisplayGoogleCastIcon;
- (_Bool)supportsGoogleCast;
- (void)dzrGoToSampledCollection:(id)arg1;
- (void)dzrGoToSettingsWithRootPage:(unsigned long long)arg1;
- (void)dzrGoToSettingsAtPage:(unsigned long long)arg1;
- (void)dzrGoToSettings;
- (void)dzrGoToFamily;
- (void)dzrGoToURL:(id)arg1 withTitle:(id)arg2 andSubTitle:(id)arg3;
- (void)dzrGoToURL:(id)arg1;
- (void)dzrGoToApp:(id)arg1;
- (void)dzrGoToFriends:(id)arg1;
- (void)dzrGoToTalkShowDetails:(id)arg1;
- (void)dzrGoToTalkShowLatestEpisodes:(id)arg1;
- (void)dzrGoToTalkShow:(id)arg1;
- (void)dzrGoToMix:(id)arg1 withListeningOrigin:(unsigned long long)arg2 shouldAutoPlay:(_Bool)arg3;
- (void)dzrGoToMix:(id)arg1 withListeningOrigin:(unsigned long long)arg2;
- (void)dzrGoToPlaylist:(id)arg1 fromFriend:(id)arg2;
- (void)dzrGoToPlaylist:(id)arg1;
- (void)dzrGoToPlaylists;
- (void)dzrGoToArtistBiography:(id)arg1;
- (void)dzrGoToArtistSimilarArtists:(id)arg1;
- (void)dzrGoToArtistRelatedPlaylists:(id)arg1;
- (void)dzrGoToArtistTopTracks:(id)arg1;
- (void)dzrGoToArtistFeaturedDiscography:(id)arg1;
- (void)dzrGoToArtistDiscography:(id)arg1;
- (void)dzrGoToArtist:(id)arg1;
- (void)dzrGoToAlbum:(id)arg1;
- (void)dzrGoToSearch:(id)arg1 withResultType:(long long)arg2 andOfflineResults:(id)arg3;
- (void)dzrGoToSearch:(id)arg1 withResultType:(long long)arg2;
- (void)dzrGoToSuggest:(id)arg1;
- (void)dzrGoToNotifications;
- (void)dzrGoToSmartTracklist:(id)arg1;
- (void)dzrGoToFlowTab;
- (void)dzrGoToFlow;
- (_Bool)dzrPlayerIsDisplayed;
- (void)dzrDismissPlayerIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dzrGoToLyrics;
- (void)dzrGoToPlayer;
- (void)dzrGoToAudiobook:(id)arg1 shouldAutoPlay:(_Bool)arg2;
- (void)dzrGoToAudiobook:(id)arg1;
- (void)dzrGoToAudiobookFavorites;
- (void)dzrGoToAppStudio;
- (void)dzrGoToFollowingsForFriend:(id)arg1;
- (void)dzrGoToFollowersForFriend:(id)arg1;
- (void)dzrGoToUploadedTracks;
- (void)dzrGoToProfileTopTracksForFriend:(id)arg1;
- (void)dzrGoToProfileFavoriteWebApplicationsForFriend:(id)arg1;
- (void)dzrGoToProfileFavoriteTalksForFriend:(id)arg1;
- (void)dzrGoToProfileFavoriteMixesForFriend:(id)arg1;
- (void)dzrGoToProfileFavoritePlaylistsForFriend:(id)arg1;
- (void)dzrGoToProfileFavoriteArtistsForFriend:(id)arg1;
- (void)dzrGoToProfileFavoriteAlbumsForFriend:(id)arg1;
- (void)dzrGoToProfileHistoryForFriend:(id)arg1;
- (void)dzrGoToDownloadedMusic;
- (void)dzrGoToUserProfile:(id)arg1;
- (void)dzrGoToTalkShows;
- (void)dzrGoHome;
- (void)dzrGoToDynamicPageWithName:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)dzrAppDelegate;
- (long long)carModeIconPriority;
- (id)carModeButtonItem;
- (_Bool)shouldDisplayCarModeButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

