//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBrowserViewController_Base.h"

#import "MGSwipeTableCellDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSCountedSet, NSString, UIImage;

@interface JBrowserArtistsViewController : JBrowserViewController_Base <MGSwipeTableCellDelegate, UISearchBarDelegate>
{
    NSArray *mArtists;
    NSCountedSet *mArtistAlbumCounterSet;
    NSCountedSet *mArtistSongCounterSet;
    NSArray *mSearchResults;
    UIImage *mDefArtwork;
    int _browseMode;
}

@property(nonatomic) int browseMode; // @synthesize browseMode=_browseMode;
- (void).cxx_destruct;
- (void)addToPlaylist:(id)arg1;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (void)onShowMultiSelectOptionsMenu:(id)arg1;
- (void)handleOptionsMenuForTrack:(long long)arg1 track:(int)arg2;
- (void)handleSort;
- (void)handleOptionsMenuForView:(long long)arg1;
- (id)getAllTracks;
- (void)showOptionsMenuForTrack:(int)arg1 location:(struct CGPoint)arg2;
- (void)onShowOptionsMenu:(id)arg1;
- (void)onSettingsChanged:(id)arg1;
- (void)updateCellStatusForGrid:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForGrid:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForGrid:(id)arg1 trackItem:(id)arg2;
- (void)updateCellStatusForList:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 indexPath:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 trackItem:(id)arg2;
- (void)updateCurPosColorForList:(id)arg1 flag:(_Bool)arg2;
- (void)applyThemeForCell:(id)arg1;
- (void)applyTheme;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)filterDataUsingPredicate:(id)arg1;
- (id)buildPredicateForWord:(id)arg1;
- (void)updateUI_TrackInfo:(_Bool)arg1;
- (id)findCurrent;
- (void)queryMediaLibrary;
- (void)doSort;
- (id)getTracksForArtists:(id)arg1;
- (void)getAlbumCountForArtists;
- (id)getSelectedArtists;
- (id)getArtists;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)handleSelectedItem:(id)arg1 showMode:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initVarsWithOrientation:(_Bool)arg1;
- (void)initVars;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
