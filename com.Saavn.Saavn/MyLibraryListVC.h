//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVC_n.h"

#import "DataProviderDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DataProvider, LibraryEmptyState, NSArray, NSMutableArray, NSObject, NSString, SearchField, UIActivityIndicatorView, UIButton, UISwitch, UIView;
@protocol OS_dispatch_queue;

@interface MyLibraryListVC : SaavnVC_n <UISearchBarDelegate, DataProviderDelegate>
{
    NSMutableArray *filteredData;
    NSMutableArray *tableData;
    NSMutableArray *sectionIndexes;
    _Bool isFiltered;
    _Bool refreshOkay;
    _Bool refreshPending;
    int currentSort;
    _Bool isFetchingLibrary;
    int downloadAllSection;
    UIButton *sortBtn;
    UIView *searchBarWrap;
    SearchField *searchBar;
    UISwitch *downloadSwitch;
    NSArray *cachedResults;
    NSString *lastSongName;
    double paginationOffset;
    _Bool endReached;
    _Bool isDownloadsView;
    UIActivityIndicatorView *tableSpinner;
    LibraryEmptyState *emptyState;
    LibraryEmptyState *emptySearch;
    NSObject<OS_dispatch_queue> *playlistQueue;
    NSMutableArray *_originalData;
    DataProvider *_dataProvider;
}

@property(retain, nonatomic) DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSMutableArray *originalData; // @synthesize originalData=_originalData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dataProvider:(id)arg1 didLoadDataAtIndexes:(id)arg2;
- (void)dataProvider:(id)arg1 willLoadDataAtIndexes:(id)arg2;
- (void)sortTapped;
- (void)removeMediaFromDownloads:(id)arg1;
- (void)removeMediaFromLibrary:(id)arg1;
- (void)removeFromMyLibrary:(id)arg1 atIndexPath:(id)arg2;
- (void)goOnline;
- (void)downloadSwitchTapped;
- (void)loadPlaylist:(id)arg1;
- (void)loadShow:(id)arg1;
- (void)loadArtist:(id)arg1;
- (void)loadAlbum:(id)arg1;
- (void)clearSearchFilter;
- (void)hideKeyboard;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)followUpdate:(id)arg1;
- (void)nowPlayingUpdate:(id)arg1;
- (void)downloadUpdate:(id)arg1;
- (void)mylibraryUpdated:(id)arg1;
- (void)updateOfflineMode;
- (void)updateProMode;
- (void)updateUIMode;
- (void)fetchAndDisplayShowsFromDB;
- (void)fetchAndDisplayArtistsFromDB;
- (void)fetchAndDisplayAlbumsFromDB;
- (void)fetchAndDisplaySongsFromDB;
- (void)initTabs;
- (void)updateFilterStyles;
- (void)initFilters;
- (void)hideEmptySearch;
- (void)showEmptySearch:(id)arg1;
- (void)hideEmptyState;
- (void)showEmptyState;
- (id)getFilteredListForSearchText:(id)arg1;
- (id)getPlaylistData;
- (id)sortData:(id)arg1;
- (void)fetchMoreSongs;
- (void)createSectionData;
- (void)initData;
- (void)initOriginalData;
- (void)setLoadingSpinner;
- (void)initMainTable;
- (void)initNavBar;
- (void)setTitleAndTracking;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

