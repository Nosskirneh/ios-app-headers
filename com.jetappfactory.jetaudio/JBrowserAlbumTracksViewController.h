//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBrowserViewController_Base.h"

#import "MGSwipeTableCellDelegate-Protocol.h"

@class MPMediaItemCollection, NSArray, NSString, UIImage;

@interface JBrowserAlbumTracksViewController : JBrowserViewController_Base <MGSwipeTableCellDelegate>
{
    NSArray *mTracks;
    struct vector<int, std::__1::allocator<int>> mSectionTrackCounters;
    MPMediaItemCollection *mQueryForAlbum;
    _Bool mQueryForIsPodcast;
    NSArray *mQueryForAlbums;
    NSString *mQueryForArtist;
    UIImage *mDefArtwork;
    NSArray *mAlbums;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)toggleFavorite:(id)arg1 track:(int)arg2;
- (void)addToPlaylist:(id)arg1;
- (void)swipeTableCellWillBeginSwiping:(id)arg1;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (void)onShowMultiSelectOptionsMenu:(id)arg1;
- (void)onHoldAlbum:(id)arg1;
- (void)handleOptionsMenuForTrack:(long long)arg1 track:(int)arg2;
- (void)handleOptionsMenuForView:(long long)arg1;
- (void)handleSort;
- (void)showOptionsMenuForTrack:(int)arg1 location:(struct CGPoint)arg2;
- (void)onShowOptionsMenu:(id)arg1;
- (void)onClickArtwork:(id)arg1;
- (void)updateCellStatusForList:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 trackItem:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 flag:(_Bool)arg2;
- (void)applyThemeForHeader:(id)arg1;
- (void)applyThemeForCell:(id)arg1;
- (void)applyTheme;
- (void)applyThemeForBackgroundColor;
- (void)updateUI_TrackInfo:(_Bool)arg1;
- (id)getIndexPathFromMediaPos:(int)arg1;
- (id)getMediaItemFromIndexPath:(id)arg1 pIndexOffset:(int *)arg2;
- (int)getMediaPosFromIndexPath:(id)arg1 pIndexOffset:(int *)arg2;
- (id)gotoCurrent;
- (id)findCurrent;
- (void)queryMediaLibrary;
- (void)doSort;
- (id)getSelectedSongs;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initControls;
- (void)initVarsWithOrientation:(_Bool)arg1;
- (void)initVars;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setQueryForArtist:(id)arg1 artist:(id)arg2 showArtworkKey:(id)arg3;
- (void)setQueryForAlbum:(id)arg1 isPodcast:(_Bool)arg2 showArtworkKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

