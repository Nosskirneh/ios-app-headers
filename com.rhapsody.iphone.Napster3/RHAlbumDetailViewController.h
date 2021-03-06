//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlayableTableViewController.h"

@class NSArray, NSLayoutConstraint, NSString, RHActionSheet, RHAlbumCollectionViewController, RHAlbumMO, RHMetricsController, RHNavigationService, RHPermissionsController, RHSharingService, RHTrackMO, UIBarButtonItem, UIButton, UIImageView, UILabel, UIView, ZDSPromise, _TtC7Napster13AppboyService, _TtC7Napster14DataController, _TtC7Napster15BookmarkService, _TtC7Napster23NotificationsOptService;

@interface RHAlbumDetailViewController : RHPlayableTableViewController
{
    RHAlbumMO *_album;
    unsigned long long _albumDetailMode;
    RHAlbumCollectionViewController *_albumsCollectionViewController;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewTop;
    UIView *_albumFooterView;
    UILabel *_footerTitleLabel;
    UIView *_subheaderView;
    UILabel *_albumName;
    UIButton *_artistNameButton;
    UIBarButtonItem *_artistBarButtonItem;
    UIImageView *_albumImage;
    UIImageView *_bgImageView;
    UIButton *_albumInfoButton;
    UIButton *_shareButton;
    UIView *_customPlaybar;
    UIButton *_albumDetailsButton;
    UILabel *_releaseYearLabel;
    UIImageView *_releaseYearIcon;
    UIView *_overlayView;
    NSArray *_separators;
    NSLayoutConstraint *_contentViewHeight;
    double _fittingHeight;
    ZDSPromise *_imagePromise;
    RHTrackMO *_initialTrack;
    RHActionSheet *_albumDetailActionSheet;
    NSString *_albumDetailObserverContext;
    ZDSPromise *_refreshPromise;
    UIView *_bookmarksView;
    UILabel *_bookmarksLabel;
    UIButton *_playAllButton;
}

@property(nonatomic) __weak UIButton *playAllButton; // @synthesize playAllButton=_playAllButton;
@property(nonatomic) __weak UILabel *bookmarksLabel; // @synthesize bookmarksLabel=_bookmarksLabel;
@property(nonatomic) __weak UIView *bookmarksView; // @synthesize bookmarksView=_bookmarksView;
@property(retain, nonatomic) ZDSPromise *refreshPromise; // @synthesize refreshPromise=_refreshPromise;
@property(retain, nonatomic) NSString *albumDetailObserverContext; // @synthesize albumDetailObserverContext=_albumDetailObserverContext;
@property(nonatomic) __weak RHActionSheet *albumDetailActionSheet; // @synthesize albumDetailActionSheet=_albumDetailActionSheet;
@property(retain, nonatomic) RHTrackMO *initialTrack; // @synthesize initialTrack=_initialTrack;
@property(retain, nonatomic) ZDSPromise *imagePromise; // @synthesize imagePromise=_imagePromise;
@property(nonatomic) double fittingHeight; // @synthesize fittingHeight=_fittingHeight;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(nonatomic) __weak UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak UIImageView *releaseYearIcon; // @synthesize releaseYearIcon=_releaseYearIcon;
@property(nonatomic) __weak UILabel *releaseYearLabel; // @synthesize releaseYearLabel=_releaseYearLabel;
@property(nonatomic) __weak UIButton *albumDetailsButton; // @synthesize albumDetailsButton=_albumDetailsButton;
@property(nonatomic) __weak UIView *customPlaybar; // @synthesize customPlaybar=_customPlaybar;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak UIButton *albumInfoButton; // @synthesize albumInfoButton=_albumInfoButton;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *albumImage; // @synthesize albumImage=_albumImage;
@property(retain, nonatomic) UIBarButtonItem *artistBarButtonItem; // @synthesize artistBarButtonItem=_artistBarButtonItem;
@property(nonatomic) __weak UIButton *artistNameButton; // @synthesize artistNameButton=_artistNameButton;
@property(nonatomic) __weak UILabel *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) UIView *subheaderView; // @synthesize subheaderView=_subheaderView;
@property(nonatomic) __weak UILabel *footerTitleLabel; // @synthesize footerTitleLabel=_footerTitleLabel;
@property(retain, nonatomic) UIView *albumFooterView; // @synthesize albumFooterView=_albumFooterView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewTop; // @synthesize contentViewTop=_contentViewTop;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) RHAlbumCollectionViewController *albumsCollectionViewController; // @synthesize albumsCollectionViewController=_albumsCollectionViewController;
@property(nonatomic) unsigned long long albumDetailMode; // @synthesize albumDetailMode=_albumDetailMode;
@property(retain, nonatomic) RHAlbumMO *album; // @synthesize album=_album;
- (void).cxx_destruct;
@property(readonly, nonatomic) RHMetricsController *metricsController;
@property(readonly, nonatomic) _TtC7Napster15BookmarkService *bookmarkService;
@property(readonly, nonatomic) _TtC7Napster13AppboyService *appboyService;
- (id)imageProvider;
@property(readonly, nonatomic) RHPermissionsController *permissionsController;
- (id)alertPresenter;
@property(readonly, nonatomic) RHSharingService *sharingService;
- (id)reachabilityService;
- (id)dependencies;
@property(readonly, nonatomic) _TtC7Napster23NotificationsOptService *notificationsOptService;
@property(readonly, nonatomic) RHNavigationService *navigationService;
@property(readonly, nonatomic) _TtC7Napster14DataController *dataController;
- (id)metricsProperties;
- (void)showDownloadQueueToastIfNeeded;
- (id)reusablePlayableRowCell;
@property(readonly, nonatomic) _Bool isBookmarkingAvailable;
- (void)showBookmarkTooltipIfNeeded;
- (_Bool)hideArtOverlayPlayAllButton;
- (_Bool)isCurrentlyPlayingAlbum;
- (void)handleNetworkStatusChangedNotification:(id)arg1;
- (void)refreshViews;
- (void)cancelDownloadLease:(id)arg1;
- (void)removeAlbumFromDownloads;
- (void)askForConfirmationToRemoveAlbumFromDownloads;
- (void)downloadAlbum;
- (void)askForConfirmationToRemoveAlbumFromLibrary;
- (void)choosePlaylistForAlbum:(id)arg1;
- (void)removeAlbumFromLibrary:(id)arg1;
- (void)addAlbumToLibrary:(id)arg1;
- (void)queueAlbum:(id)arg1;
- (void)configureForInitialTrack;
- (_Bool)canAddToMyMusic;
- (_Bool)shouldConsiderAlbumDownloaded;
- (_Bool)shouldConsiderAlbumDownloading;
- (void)configureHeaderView;
- (void)pushBookmarks:(id)arg1;
- (void)artistNameAction:(id)arg1;
- (void)showReviewsAction:(id)arg1;
- (void)albumDetailsAction:(id)arg1;
- (id)createActionSheetWithTrack:(id)arg1 indexPath:(id)arg2 sender:(id)arg3;
- (void)addMoreFromAlbumButtonToActionSheet:(id)arg1;
- (void)addMoreFromArtistButtonToActionSheet:(id)arg1;
- (void)allTracksOptionsButtonTapped:(id)arg1;
- (void)shareButtonAction:(id)arg1;
- (void)shuffleAllButtonTapped:(id)arg1;
- (void)playAllWithShuffle:(_Bool)arg1;
- (void)playAllButtonTapped:(id)arg1;
- (void)downloadButtonTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewUnloading;
- (void)updateView:(_Bool)arg1;
- (void)setStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)navigationAlpha;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setZoomOffset:(double)arg1;
- (void)updateHeaderView;
- (void)viewDidLayoutSubviews;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (id)initWithTrack:(id)arg1;
- (id)initWithDownloadedAlbum:(id)arg1;
- (id)initWithAlbumInLibrary:(id)arg1;
- (id)initWithAlbum:(id)arg1;

@end

