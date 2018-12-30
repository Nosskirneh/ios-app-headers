//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

#import "HeaderSearchFieldTapDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class ContentSectionLoader, FollowersLoader, Loader, NSArray, NSNumber, NSOrderedSet, NSString, UISearchBar;

@interface ANGObjectsListViewController : ANGSectionedContentViewController <HeaderSearchFieldTapDelegate, UISearchBarDelegate>
{
    NSArray *_allItems;
    NSOrderedSet *_items;
    NSNumber *_hasMoreItems;
    int _oldRequestType;
    _Bool _isSearching;
    UISearchBar *_staticHeaderSearchField;
    Loader *_loader;
    NSString *_customTitle;
    unsigned long long _customDisplayType;
    long long _requestedPlayMode;
}

@property long long requestedPlayMode; // @synthesize requestedPlayMode=_requestedPlayMode;
@property unsigned long long customDisplayType; // @synthesize customDisplayType=_customDisplayType;
@property(copy) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (void).cxx_destruct;
- (id)songs;
- (id)songsSection;
- (void)reportDownloadButtonAnalytics;
- (id)downloadSource;
- (id)listOfSongsToDownload;
- (void)downloadSongs;
- (void)playSongsShuffled:(_Bool)arg1;
- (void)shufflePressed;
- (void)playAction:(id)arg1;
- (_Bool)hideHeaderButtonsTillLoaderFinishes;
- (id)defaultHeaderButtons;
- (void)reloadHeader;
- (void)reloadData;
@property(readonly, nonatomic) FollowersLoader *followersLoader;
@property(readonly, nonatomic) ContentSectionLoader *contentSectionLoader;
- (void)hidePaginationLoadingIndicatorIfShowing;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarEditing:(_Bool)arg1;
- (void)performSearchWithText:(id)arg1;
- (void)layoutStaticHeader:(_Bool)arg1;
- (id)truncatedPlaceHolder;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)didTapHeaderSearchField;
- (_Bool)isTapEnabled;
- (_Bool)shouldShowSearchField;
- (id)searchPlaceholder;
- (double)searchFieldSpace;
- (_Bool)hasSearchfield;
- (_Bool)headerBackgroundGradientViewVisible;
- (_Bool)headerVisible;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)myFollowersChanged;
- (void)viewDidLoad;
- (void)updateItemsFromLoaders;
- (long long)defaultPlayMode;
- (void)generateSectionFromItems;
- (void)loadServerDataAndIsUserRefresh:(_Bool)arg1;
@property(retain) Loader *loader; // @synthesize loader=_loader;
- (_Bool)noMoreItems;
- (id)firstItem;
@property(retain) NSArray *items;
@property(readonly, nonatomic) NSArray *allItems;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1 loader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
