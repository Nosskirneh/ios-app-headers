//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHBaseHomeViewController.h"

@class FBKVOController, RHButton, RHCarHomeButton, RHCarHomeViewModel, RHCarRecentPlaybackViewController, RHCarTaggedContentPlaybackViewController, RHNavigationService, UIButton, UILabel, UIView, _TtC7Napster15RHDeferredImage;
@protocol _TtP7Napster17ImageProviderOBJC_;

@interface RHCarHomeViewController : RHBaseHomeViewController
{
    RHCarRecentPlaybackViewController *_recentViewController;
    RHCarTaggedContentPlaybackViewController *_taggedContentViewController;
    RHCarHomeViewModel *_viewModel;
    RHNavigationService *_navigationService;
    id <_TtP7Napster17ImageProviderOBJC_> _imageProvider;
    _TtC7Napster15RHDeferredImage *_artworkDeferredImage;
    FBKVOController *_artworkImageKVO;
    UIButton *_closeButton;
    UIButton *_voiceControlButton;
    UIView *_favoritesButtonPlaceholder;
    UIView *_topTracksButtonPlaceholder;
    UIView *_topGenreButtonPlaceholder;
    UIView *_featuredButtonPlaceholder;
    UIView *_contentView;
    UIView *_contentPickerView;
    RHButton *_bookmarksButton;
    RHButton *_recentButton;
    RHButton *_nowPlayingButton;
    UIButton *_nowPlayingButtonTapArea;
    RHCarHomeButton *_favoritesButton;
    RHCarHomeButton *_topTracksButton;
    RHCarHomeButton *_topGenreButton;
    RHCarHomeButton *_featuredButton;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak RHCarHomeButton *featuredButton; // @synthesize featuredButton=_featuredButton;
@property(nonatomic) __weak RHCarHomeButton *topGenreButton; // @synthesize topGenreButton=_topGenreButton;
@property(nonatomic) __weak RHCarHomeButton *topTracksButton; // @synthesize topTracksButton=_topTracksButton;
@property(nonatomic) __weak RHCarHomeButton *favoritesButton; // @synthesize favoritesButton=_favoritesButton;
@property(nonatomic) __weak UIButton *nowPlayingButtonTapArea; // @synthesize nowPlayingButtonTapArea=_nowPlayingButtonTapArea;
@property(nonatomic) __weak RHButton *nowPlayingButton; // @synthesize nowPlayingButton=_nowPlayingButton;
@property(nonatomic) __weak RHButton *recentButton; // @synthesize recentButton=_recentButton;
@property(nonatomic) __weak RHButton *bookmarksButton; // @synthesize bookmarksButton=_bookmarksButton;
@property(nonatomic) __weak UIView *contentPickerView; // @synthesize contentPickerView=_contentPickerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *featuredButtonPlaceholder; // @synthesize featuredButtonPlaceholder=_featuredButtonPlaceholder;
@property(nonatomic) __weak UIView *topGenreButtonPlaceholder; // @synthesize topGenreButtonPlaceholder=_topGenreButtonPlaceholder;
@property(nonatomic) __weak UIView *topTracksButtonPlaceholder; // @synthesize topTracksButtonPlaceholder=_topTracksButtonPlaceholder;
@property(nonatomic) __weak UIView *favoritesButtonPlaceholder; // @synthesize favoritesButtonPlaceholder=_favoritesButtonPlaceholder;
@property(nonatomic) __weak UIButton *voiceControlButton; // @synthesize voiceControlButton=_voiceControlButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) FBKVOController *artworkImageKVO; // @synthesize artworkImageKVO=_artworkImageKVO;
@property(retain, nonatomic) _TtC7Napster15RHDeferredImage *artworkDeferredImage; // @synthesize artworkDeferredImage=_artworkDeferredImage;
@property(readonly, nonatomic) id <_TtP7Napster17ImageProviderOBJC_> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) RHNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) RHCarHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) RHCarTaggedContentPlaybackViewController *taggedContentViewController; // @synthesize taggedContentViewController=_taggedContentViewController;
@property(readonly, nonatomic) RHCarRecentPlaybackViewController *recentViewController; // @synthesize recentViewController=_recentViewController;
- (id)metricsScreenName;
- (void)updateNowPlayingButton;
- (void)updateNowPlayingArtworkImage;
- (void)showRecent:(id)arg1;
- (void)showBookmarks:(id)arg1;
- (void)openFSP:(id)arg1;
- (void)playFeatured;
- (void)playTopGenre;
- (void)playTopTracks;
- (void)playFavorites;
- (void)exitAction:(id)arg1;
- (double)navigationAlpha;
- (_Bool)showNavigationBar;
- (void)updatePlaybackButtons;
- (void)updateContentViewsAnimated:(_Bool)arg1;
- (void)updateContentButtons;
- (void)setupButtons;
- (void)setupObservers;
- (void)viewDidLayoutSubviewsAfterSizeChanged;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end
