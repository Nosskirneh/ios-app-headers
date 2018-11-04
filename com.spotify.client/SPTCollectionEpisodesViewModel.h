//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTEpisodeContextMenuControllerDelegate.h"
#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTPodcastPlayerDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL;

@interface SPTCollectionEpisodesViewModel : NSObject <SPTExplicitContentEnabledStateObserver, SPTPodcastPlayerDelegate, SPTEpisodeContextMenuControllerDelegate>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _grouped;
    _Bool _reversePlaybackOrder;
    id <SPTCollectionEpisodesViewModelDelegate> _delegate;
    NSURL *_URL;
    long long _currentMediaType;
    long long _pageType;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTOfflineManager> _offlineManager;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _featureFlags;
    NSMutableArray *_entries;
    NSMutableOrderedSet *_episodes;
    NSDictionary *_rawJSON;
    id <SPTCrashReporter> _crashReporter;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSMutableArray *_playNowEntries;
    NSMutableArray *_unplayedEntries;
    id <SPTPodcastTestManager> _testManager;
    NSMutableDictionary *_allPlayNowDictionary;
    id <SPTPodcastDataLoaderRequestToken> _episodesRequestToken;
    id <SPTPodcastDataLoaderRequestToken> _playnowRequestToken;
}

@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> playnowRequestToken; // @synthesize playnowRequestToken=_playnowRequestToken;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> episodesRequestToken; // @synthesize episodesRequestToken=_episodesRequestToken;
@property(retain, nonatomic) NSMutableDictionary *allPlayNowDictionary; // @synthesize allPlayNowDictionary=_allPlayNowDictionary;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSMutableArray *unplayedEntries; // @synthesize unplayedEntries=_unplayedEntries;
@property(retain, nonatomic) NSMutableArray *playNowEntries; // @synthesize playNowEntries=_playNowEntries;
@property(nonatomic) _Bool reversePlaybackOrder; // @synthesize reversePlaybackOrder=_reversePlaybackOrder;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) NSDictionary *rawJSON; // @synthesize rawJSON=_rawJSON;
@property(retain, nonatomic) NSMutableOrderedSet *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long currentMediaType; // @synthesize currentMediaType=_currentMediaType;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTCollectionEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)offlineEpisode:(id)arg1 offline:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasUnfinishedEpisode;
@property(readonly, nonatomic, getter=isPlayingPodcastEpsiode) _Bool playingPodcastEpsiode;
@property(readonly, nonatomic) double currentEpisodeProgress;
- (void)markAsPlayedEpisode:(id)arg1 markAsPlayed:(_Bool)arg2;
- (id)markAsPlayedAndRemoveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isPlayingEpisodeAtIndexPath:(id)arg1;
- (void)pauseEpisodeAtIndexPath:(id)arg1;
- (void)playEpisodeAtIndexPath:(id)arg1;
- (_Bool)isUnfinishedEpisodeAtIndexPath:(id)arg1;
- (_Bool)isActiveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (id)headerForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntrySections;
- (void)parseData:(id)arg1 intoArray:(id)arg2 withHeaderItem:(id)arg3;
- (id)parseJSONData:(id)arg1;
- (_Bool)isProgressInBounds:(id)arg1;
- (void)parseUnfinishedData:(id)arg1;
- (void)collectUniqueUnfinishedIntoHeaderItem:(id)arg1;
- (id)parseUnfinishedJSONData:(id)arg1;
- (void)composeEntries;
- (void)unsubscribe;
- (void)loadPlayNow;
- (void)loadAndSubscribe;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 player:(id)arg3 offlineManager:(id)arg4 localSettings:(id)arg5 pageType:(long long)arg6 featureFlags:(id)arg7 testManager:(id)arg8 crashReporter:(id)arg9 explicitContentAccessManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
