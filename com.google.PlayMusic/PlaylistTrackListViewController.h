//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackListViewController.h"

#import "GPMStatusBarStyleProvider-Protocol.h"

@class MDCAppBar, NSString, Playlist, PlaylistTrackListTableViewController, UIBarButtonItem;

@interface PlaylistTrackListViewController : TrackListViewController <GPMStatusBarStyleProvider>
{
    Playlist *_playlist;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_backButton;
    PlaylistTrackListTableViewController *_playlistTrackListTableVC;
    MDCAppBar *_appBar;
    _Bool _isEditing;
}

- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)downloadedOnlyModeChanged;
- (void)addInfoBanner;
- (void)resetAppBarHeight;
- (double)appBarHeight;
- (void)didTapBackButton:(id)arg1;
- (void)donePressed;
- (void)playlistEditModeDisabled:(id)arg1;
- (void)playlistEditModeEnabled:(id)arg1;
- (void)refreshNavigationItems;
- (long long)statusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPlaylist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
