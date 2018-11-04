//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionFavoriteMixModelDelegate.h"
#import "SPTFreeTierCollectionHiddenContentModelDelegate.h"
#import "SPTFreeTierCollectionPlaylistsModel.h"

@class NSArray, NSString, NSURL, SPTFreeTierCollectionFilterSortManager, SPTPlaylistPlatformFolderResponse;

@interface SPTFreeTierCollectionPlaylistsModelImplementation : NSObject <SPTFreeTierCollectionFavoriteMixModelDelegate, SPTFreeTierCollectionHiddenContentModelDelegate, SPTFreeTierCollectionPlaylistsModel>
{
    _Bool _loaded;
    _Bool _hasMore;
    _Bool _needsReload;
    NSString *_textFilter;
    NSArray *_activeFilters;
    NSArray *_availableFilters;
    id <SPTSortingFilteringSortRule> _selectedSortRule;
    NSArray *_availableSortRules;
    NSString *_title;
    id <SPTFreeTierCollectionPlaylistsModelDelegate> delegate;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTFreeTierCollectionFavoriteMixModel> _favoriteMixModel;
    id <SPTFreeTierCollectionHiddenContentModel> _hiddenContentModel;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistsSubscription;
    id <SPTFreeTierCollectionFavoriteMixModelEntity> _favoriteMixEntity;
    SPTPlaylistPlatformFolderResponse *_lastPlaylistResponse;
    id <SPTFreeTierCollectionTestManager> _testManager;
    SPTFreeTierCollectionFilterSortManager *_filterSortManager;
    NSURL *_uri;
    struct _NSRange _currentWindow;
}

@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) SPTFreeTierCollectionFilterSortManager *filterSortManager; // @synthesize filterSortManager=_filterSortManager;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) struct _NSRange currentWindow; // @synthesize currentWindow=_currentWindow;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) SPTPlaylistPlatformFolderResponse *lastPlaylistResponse; // @synthesize lastPlaylistResponse=_lastPlaylistResponse;
@property(retain, nonatomic) id <SPTFreeTierCollectionFavoriteMixModelEntity> favoriteMixEntity; // @synthesize favoriteMixEntity=_favoriteMixEntity;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistsSubscription; // @synthesize playlistsSubscription=_playlistsSubscription;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTFreeTierCollectionHiddenContentModel> hiddenContentModel; // @synthesize hiddenContentModel=_hiddenContentModel;
@property(retain, nonatomic) id <SPTFreeTierCollectionFavoriteMixModel> favoriteMixModel; // @synthesize favoriteMixModel=_favoriteMixModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <SPTFreeTierCollectionPlaylistsModelDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *availableSortRules; // @synthesize availableSortRules=_availableSortRules;
@property(copy, nonatomic) id <SPTSortingFilteringSortRule> selectedSortRule; // @synthesize selectedSortRule=_selectedSortRule;
@property(readonly, nonatomic) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
@property(copy, nonatomic) NSArray *activeFilters; // @synthesize activeFilters=_activeFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
- (void).cxx_destruct;
- (_Bool)isPlaylistFolder;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)hiddenContentModel:(id)arg1 didFailWithError:(id)arg2;
- (void)hiddenContentModelDidUpdate:(id)arg1;
- (void)favoriteMixModel:(id)arg1 didUpdateFavoriteMixEntity:(id)arg2;
- (void)favoriteMixModel:(id)arg1 didFailWithError:(id)arg2;
- (void)resetFilters;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (void)filterAndSortSetCosmosOptions:(id)arg1;
- (void)setNeedsReload;
- (void)reload;
- (void)updateWithPlaylistResponse:(id)arg1 favoriteMixEntity:(id)arg2;
- (void)subscribeToPlaylist;
- (void)loadMore;
- (void)loadModel;
- (id)initWithPlaylistDataLoader:(id)arg1 favoriteMixModel:(id)arg2 hiddenContentModel:(id)arg3 folderURI:(id)arg4 onDemandSet:(id)arg5 testManager:(id)arg6 filterSortManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
