//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerRadio.h"

#import "DZRContentPageHeaderable-Protocol.h"
#import "DZRDeeplinkableObject-Protocol.h"
#import "DZRItemCellAdditions-Protocol.h"
#import "DZRItemPeekable-Protocol.h"
#import "DZRItemViewPeeking-Protocol.h"
#import "DZRItemWithViewControllerPoping-Protocol.h"
#import "DZRLibraryItemTableViewDisplayDelegate-Protocol.h"
#import "DZRLibraryObject-Protocol.h"
#import "DZRNavigableObject-Protocol.h"
#import "DZROfflineSearchIndexable-Protocol.h"
#import "DZRProfileDynamicItem-Protocol.h"
#import "DZRShareable-Protocol.h"
#import "DeezerBrowsable-Protocol.h"
#import "DeezerFilterableObject-Protocol.h"
#import "NSCoding-Protocol.h"

@class DeezerAlbumCard, DeezerArtist, DeezerContentWindowing, NSArray, NSDate, NSNumber, NSString;

@interface DeezerAlbum : DeezerRadio <DZROfflineSearchIndexable, DZRItemCellAdditions, DZRLibraryObject, DZRProfileDynamicItem, DZRNavigableObject, DZRLibraryItemTableViewDisplayDelegate, DZRShareable, DZRContentPageHeaderable, DZRItemPeekable, DZRItemViewPeeking, DZRItemWithViewControllerPoping, NSCoding, DeezerBrowsable, DeezerFilterableObject, DZRDeeplinkableObject>
{
    _Bool _cardRequestIsLoading;
    _Bool _cardRequested;
    NSArray *_artists;
    DeezerArtist *_artist;
    NSString *_artistId;
    NSString *_artistName;
    NSString *_mainArtistName;
    long long _loadingState;
    long long _albumType;
    NSString *_urlRewriting;
    long long _numberOfTracks;
    NSDate *_physicalReleaseDate;
    NSString *_addToFavoriteDateString;
    NSDate *_addToFavoriteDate;
    NSNumber *_rank;
    NSString *_mostPopularTrackId;
    long long _numberOfFans;
    DeezerContentWindowing *_windowing;
    DeezerAlbumCard *_card;
}

+ (id)cacheKeyForDeezerID:(id)arg1;
+ (id)dzrDumpableProperties;
+ (void)registerToTableView:(id)arg1;
@property(nonatomic) _Bool cardRequested; // @synthesize cardRequested=_cardRequested;
@property(retain, nonatomic) DeezerAlbumCard *card; // @synthesize card=_card;
@property(retain, nonatomic) DeezerContentWindowing *windowing; // @synthesize windowing=_windowing;
@property(nonatomic) long long numberOfFans; // @synthesize numberOfFans=_numberOfFans;
@property(retain, nonatomic) NSString *mostPopularTrackId; // @synthesize mostPopularTrackId=_mostPopularTrackId;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSDate *addToFavoriteDate; // @synthesize addToFavoriteDate=_addToFavoriteDate;
@property(retain, nonatomic) NSString *addToFavoriteDateString; // @synthesize addToFavoriteDateString=_addToFavoriteDateString;
@property(retain, nonatomic) NSDate *physicalReleaseDate; // @synthesize physicalReleaseDate=_physicalReleaseDate;
@property(nonatomic) long long numberOfTracks; // @synthesize numberOfTracks=_numberOfTracks;
@property(retain, nonatomic) NSString *urlRewriting; // @synthesize urlRewriting=_urlRewriting;
@property(nonatomic) long long albumType; // @synthesize albumType=_albumType;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) _Bool cardRequestIsLoading; // @synthesize cardRequestIsLoading=_cardRequestIsLoading;
@property(retain, nonatomic) NSString *mainArtistName; // @synthesize mainArtistName=_mainArtistName;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) DeezerArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
- (void).cxx_destruct;
- (id)sortableProperties;
- (_Bool)isAmongCurrentUserFavorites;
- (_Bool)canSynchronize;
- (_Bool)isQueueListEditable;
- (_Bool)canBeQueued;
- (id)deeplink;
- (id)filterKeyPath;
- (id)creatorName;
- (id)creator;
- (void)downloadCoverImageForOffline;
- (long long)sort:(id)arg1;
- (void)refreshOnlineTracks;
- (id)onlineTracks;
- (void)tracksReceived:(id)arg1;
- (void)retrieveTracks;
- (id)downloadedTracks;
- (id)tracks;
- (void)downloadTracksFromSource:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isLoadingTracks) _Bool loadingTracks;
- (void)updateInfosFromCardRequestResultDictionary:(id)arg1;
- (void)downloadCardFromSource:(unsigned long long)arg1;
- (void)applyReceivedTracks:(id)arg1;
- (void)cardReceived:(id)arg1;
- (unsigned long long)collectionType;
- (id)displayType;
- (id)domain;
- (unsigned long long)coverType;
- (id)illustration;
- (id)coverUrl;
- (id)extraInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeezerId:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (id)init;
- (CDUnknownBlockType)childrenIndexableItems;
- (id)indexEntries;
- (long long)listeningState;
- (unsigned long long)dzrSearchResultsDirectPlayListeningOrigin;
- (void)removeFromLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)recentlyPlayedItemInSection:(id)arg1 atIndex:(long long)arg2;
- (id)previewItemInSection:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isSynchronized;
- (void)navigateFromViewController:(id)arg1;
- (_Bool)isNavigationAvailable;
- (id)digest;
- (long long)dzrDynamicPageInformationContextMenuItemType;
- (unsigned long long)dzrDynamicPageInformationlisteningContextOrigin;
- (long long)sortByArtistsName:(id)arg1;
- (void)removeItem;
- (void)indexItem;
- (id)cellForTableView:(id)arg1 forIndexPath:(id)arg2 withStyle:(unsigned long long)arg3 delegate:(id)arg4;
- (id)dzrSuggestLogID;
- (unsigned long long)dzrSuggestDirectPlayListeningOrigin;
- (long long)dzrSuggestGetSearchResultType;
- (long long)dzrSuggestGetContextMenuType;
- (void)dzrSuggestCellTouchedAtIndexPath:(id)arg1 forController:(id)arg2;
- (id)dzrSuggestCellForController:(id)arg1 forIndexPath:(id)arg2 withStyle:(unsigned long long)arg3;
- (id)mailSubject;
- (id)messageForActivityType:(id)arg1;
- (id)shareLinkURL;
- (id)backgroundHeaderView;
- (id)headerView;
- (long long)illustratonDisplayMode;
- (id)detailLabelString;
- (_Bool)isPlayButtonShown;
- (void)goToRelatedViewController;
- (id)peekViewControllerWithFrame:(struct CGRect)arg1;
- (id)buildMastheadViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

