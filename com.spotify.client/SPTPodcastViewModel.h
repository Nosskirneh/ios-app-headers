//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionFiltering-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPodcastEpisodeProgressPolling-Protocol.h"
#import "SPTPodcastPlayerDelegate-Protocol.h"

@class NSArray, NSCache, NSPredicate, NSSortDescriptor, NSString, NSURL, SPTPodcastSortingService;
@protocol SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTFreeTierEntityFeedbackButtonViewModel, SPTPodcast, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastFactory, SPTPodcastLogger, SPTPodcastPlayer, SPTPodcastTestManager, SPTPodcastUITestManager, SPTPodcastViewModelDelegate;

@interface SPTPodcastViewModel : NSObject <SPTExplicitContentEnabledStateObserver, SPTPodcastPlayerDelegate, SPTCollectionSorting, SPTCollectionFiltering, SPTPodcastEpisodeProgressPolling>
{
    _Bool contentFiltered;
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _filtered;
    _Bool _ascendingSortOrder;
    _Bool _initialLoadComplete;
    NSString *textFilter;
    NSCache *_progressCache;
    id <SPTPodcastViewModelDelegate> _delegate;
    NSURL *_URL;
    NSString *_appliedFilterText;
    id <SPTPodcast> _podcast;
    id <SPTFreeTierEntityFeedbackButtonViewModel> _feedbackButtonViewModel;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastUITestManager> _uiTestManager;
    SPTPodcastSortingService *_sortingService;
    id <SPTPodcastLogger> _logger;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    unsigned long long _sortColumn;
    NSSortDescriptor *_sortDescriptor;
    NSString *_filter;
    NSString *_filterOnLastUpdate;
    NSPredicate *_filterPredicate;
    id <SPTPodcastDataLoaderRequestToken> _podcastRequestToken;
}

@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> podcastRequestToken; // @synthesize podcastRequestToken=_podcastRequestToken;
@property(nonatomic, getter=isInitialLoadComplete) _Bool initialLoadComplete; // @synthesize initialLoadComplete=_initialLoadComplete;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(copy, nonatomic) NSString *filterOnLastUpdate; // @synthesize filterOnLastUpdate=_filterOnLastUpdate;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPodcastLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak SPTPodcastSortingService *sortingService; // @synthesize sortingService=_sortingService;
@property(retain, nonatomic) id <SPTPodcastUITestManager> uiTestManager; // @synthesize uiTestManager=_uiTestManager;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(readonly, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
@property(retain) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) NSString *appliedFilterText; // @synthesize appliedFilterText=_appliedFilterText;
@property(nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSCache *progressCache; // @synthesize progressCache=_progressCache;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered; // @synthesize contentFiltered;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (id)additionalFilters;
- (id)filterDataWithTitle:(id)arg1 filter:(id)arg2 position:(long long)arg3;
- (void)applyFilter:(id)arg1;
- (void)loadAppliedFilter;
- (void)updateFilterState;
- (void)resetFilters;
@property(nonatomic) _Bool showsOnlyOfflinedContent;
- (void)setSortProperties;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
- (void)updateProgressWithPlayer:(id)arg1;
- (void)podcastPlayer:(id)arg1 didUpdateProgressForTrackURL:(id)arg2;
- (double)podcastPlayer:(id)arg1 updateProgressIntervalForTrackURL:(id)arg2;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)unfollowPodcast;
- (void)followPodcast;
- (id)cachedProgressForEpisode:(id)arg1;
- (void)updateCurrentProgress:(double)arg1 position:(double)arg2 duration:(double)arg3 forEpisode:(id)arg4;
- (_Bool)shouldAutoplayEpisode;
- (void)handleLatestPlayedEpisode;
- (id)indexPathOfEpisodeURL:(id)arg1;
- (id)allEpisodes;
- (void)pauseEpisodeAtIndexPath:(id)arg1;
- (void)playEpisodeWithURI:(id)arg1;
- (_Bool)canPlayEpisode:(id)arg1;
- (void)loadMoreEpisodes;
- (id)indexPathOfActiveEpisode;
- (_Bool)isActiveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isPlayingAnyEpisode;
- (_Bool)isPlayingEpisodeAtIndexPath:(id)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(id)arg1;
- (void)handleFirstLoadUpdates;
- (void)unsubscribe;
- (void)loadAndSubscribe;
- (id)deserializationQueue;
- (id)episodeForIndexPath:(id)arg1;
- (void)playEpisodeAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic, getter=isAllEpisodesLoaded) _Bool allEpisodesLoaded;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool isFollowedByCurrentUser;
@property(readonly, nonatomic) long long numberOfFollowers;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *latestPlayedEpisodeURL;
@property(readonly, nonatomic) NSString *publisher;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithPodcastURL:(id)arg1 dataLoader:(id)arg2 player:(id)arg3 sortingService:(id)arg4 logger:(id)arg5 collectionPlatform:(id)arg6 explicitContentAccessManager:(id)arg7 testManager:(id)arg8 uiTestManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

