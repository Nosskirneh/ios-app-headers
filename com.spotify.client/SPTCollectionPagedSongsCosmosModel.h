//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSongItemPlaying-Protocol.h"
#import "SPTCollectionSongsModel-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SPTPlayOrigin;
@protocol SPTClientSettings, SPTCollectionPlatform, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTCollectionSongsModelDelegate, SPTOfflineModeState, SPTPlayer, SPTProductState;

@interface SPTCollectionPagedSongsCosmosModel : NSObject <SPTPlayerObserver, SPTOfflineModeStateObserver, SPTCollectionSongItemPlaying, SPTCollectionSongsModel>
{
    _Bool _showOnlyLocalFiles;
    _Bool _ascendingSortOrder;
    _Bool _showsOnlyOfflinedContent;
    _Bool _offline;
    _Bool _pause;
    _Bool _loaded;
    _Bool _sessionOffline;
    id <SPTCollectionSongsModelDelegate> _delegate;
    NSString *_textFilter;
    NSArray *_sectionIndices;
    NSDictionary *_songItems;
    id <SPTPlayer> _player;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _subscription;
    SPTPlayOrigin *_playOrigin;
    long long _unfilteredLength;
    unsigned long long _sortColumn;
    unsigned long long _offlineAvailability;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTClientSettings> _clientSettings;
    id <SPTProductState> _productState;
    NSURL *_currentlyPlayingURL;
    struct _NSRange _currentWindow;
}

@property(retain, nonatomic) NSURL *currentlyPlayingURL; // @synthesize currentlyPlayingURL=_currentlyPlayingURL;
@property(nonatomic) struct _NSRange currentWindow; // @synthesize currentWindow=_currentWindow;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(nonatomic) long long unfilteredLength; // @synthesize unfilteredLength=_unfilteredLength;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) __weak id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSDictionary *songItems; // @synthesize songItems=_songItems;
@property(retain, nonatomic) NSArray *sectionIndices; // @synthesize sectionIndices=_sectionIndices;
@property(nonatomic, getter=isSessionOffline) _Bool sessionOffline; // @synthesize sessionOffline=_sessionOffline;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic, getter=isPaused) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) _Bool showOnlyLocalFiles; // @synthesize showOnlyLocalFiles=_showOnlyLocalFiles;
@property(nonatomic) __weak id <SPTCollectionSongsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)resetFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) _Bool showsOnlyOfflinedContent; // @synthesize showsOnlyOfflinedContent=_showsOnlyOfflinedContent;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (void)updateTracks;
- (void)load;
- (void)updateTracksWithResponse:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1 window:(struct _NSRange)arg2;
- (id)indexPathInWindow:(struct _NSRange)arg1 itemIndex:(long long)arg2;
- (id)optionsForCurrentViewWithRange:(_Bool)arg1;
- (_Bool)checkPlayabilityOfCollectionSongTrackItem:(id)arg1;
- (void)playCollectionSongTrackItem:(id)arg1;
- (unsigned long long)flatIndexForIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)canServeItemFromCurrentWindow:(id)arg1;
- (id)cosmosItemAtIndexPath:(id)arg1;
- (void)playShuffled:(_Bool)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)updateCurrentlyPlayingTrack:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (unsigned long long)offlineSyncStateForTrackAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (long long)totalCountOfItems;
- (id)initWithCollectionPlatformDataLoader:(id)arg1 collectionPlatform:(id)arg2 player:(id)arg3 offlineNotifier:(id)arg4 clientSettings:(id)arg5 productState:(id)arg6 playOrigin:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

