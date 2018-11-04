//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierPlaylistHeader.h"
#import "SPTImageLoaderDelegate.h"

@class GLUEButton, NSString, SPTEntityTableHeaderView, SPTTableView, UIView;

@interface SPTFreeTierPlaylistLegacyHeaderViewController : UIViewController <SPTImageLoaderDelegate, SPTFreeTierPlaylistHeader>
{
    _Bool _hasUserScrolled;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <SPTImageLoader> _imageLoader;
    SPTTableView *_tableView;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    UIView *_accessoryTopView;
    SPTEntityTableHeaderView *_headerView;
    GLUEButton *_playButton;
    GLUEButton *_followButton;
    id <SPTGaiaUserInterfaceContextObserver> _gaiaObserverService;
}

@property(readonly, nonatomic) id <SPTGaiaUserInterfaceContextObserver> gaiaObserverService; // @synthesize gaiaObserverService=_gaiaObserverService;
@property(nonatomic) _Bool hasUserScrolled; // @synthesize hasUserScrolled=_hasUserScrolled;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *accessoryTopView; // @synthesize accessoryTopView=_accessoryTopView;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
- (void).cxx_destruct;
- (void)notifyGaiaThatHeaderIsPresented;
- (void)followButtonTapped:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
@property(readonly, nonatomic) UIView *filterSearchBar;
- (void)tableViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)update;
- (void)updateForLikeActionPlacedInsideHeader;
- (void)updateHeaderForPlaylistEmptyState;
- (void)updateShuffleBadge;
- (void)updateHeaderPlayButton;
- (void)updateHeaderImage;
- (void)initializeInterface;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPlaylistViewModel:(id)arg1 imageLoader:(id)arg2 tableView:(id)arg3 collectionConfiguration:(id)arg4 filterSearchBar:(id)arg5 gaiaObserverService:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

