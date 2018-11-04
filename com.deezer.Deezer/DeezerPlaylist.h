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
#import "_TtP6Deezer21DZRSortableController_-Protocol.h"

@class DeezerFriend, NSArray, NSDate, NSMutableArray, NSString, NSURL;

@interface DeezerPlaylist : DeezerRadio <DZROfflineSearchIndexable, DZRItemCellAdditions, DZRLibraryObject, DZRProfileDynamicItem, DZRNavigableObject, DZRLibraryItemTableViewDisplayDelegate, DZRShareable, _TtP6Deezer21DZRSortableController_, DZRContentPageHeaderable, DZRItemPeekable, DZRItemViewPeeking, DZRItemWithViewControllerPoping, NSCoding, DeezerBrowsable, DeezerFilterableObject, DZRDeeplinkableObject>
{
    NSString *playlistCoverMD5;
    NSURL *playlistCoverURL;
    NSString *playlistType;
    long long _type;
    long long _status;
    NSString *_creatorName;
    long long _loadingState;
    DeezerFriend *_creator;
    NSString *_creatorDeezerID;
    NSString *_playlistDescription;
    NSArray *_tracksToAdd;
    NSArray *_unsortedTracks;
    long long _estimatedNumberOfTracks;
    NSString *_lastUpdateDateString;
    NSDate *_lastUpdateDate;
    NSString *_addToFavoriteDateString;
    NSDate *_addToFavoriteDate;
    NSString *_creationDateString;
    NSDate *_creationDate;
    NSString *_mostPopularTrackId;
    long long _numberOfFans;
    NSMutableArray *_observationKeepersArray;
}

+ (id)playlistFromDeeplink:(id)arg1;
+ (id)responseTracksListArray:(id)arg1;
+ (id)responseChecksumDictionary:(id)arg1;
+ (id)responseDictionaryWithTracksList:(id)arg1 andChecksum:(id)arg2;
+ (id)cacheKeyForDeezerID:(id)arg1;
+ (void)registerToTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *observationKeepersArray; // @synthesize observationKeepersArray=_observationKeepersArray;
@property(nonatomic) long long numberOfFans; // @synthesize numberOfFans=_numberOfFans;
@property(retain, nonatomic) NSString *mostPopularTrackId; // @synthesize mostPopularTrackId=_mostPopularTrackId;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *creationDateString; // @synthesize creationDateString=_creationDateString;
@property(retain, nonatomic) NSDate *addToFavoriteDate; // @synthesize addToFavoriteDate=_addToFavoriteDate;
@property(retain, nonatomic) NSString *addToFavoriteDateString; // @synthesize addToFavoriteDateString=_addToFavoriteDateString;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSString *lastUpdateDateString; // @synthesize lastUpdateDateString=_lastUpdateDateString;
@property(nonatomic) long long estimatedNumberOfTracks; // @synthesize estimatedNumberOfTracks=_estimatedNumberOfTracks;
@property(retain, nonatomic) NSArray *unsortedTracks; // @synthesize unsortedTracks=_unsortedTracks;
@property(retain, nonatomic) NSArray *tracksToAdd; // @synthesize tracksToAdd=_tracksToAdd;
@property(retain, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(retain, nonatomic) NSString *creatorDeezerID; // @synthesize creatorDeezerID=_creatorDeezerID;
@property(retain, nonatomic) DeezerFriend *creator; // @synthesize creator=_creator;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSURL *playlistCoverURL; // @synthesize playlistCoverURL;
@property(retain, nonatomic) NSString *playlistCoverMD5; // @synthesize playlistCoverMD5;
@property(retain, nonatomic) NSString *playlistType; // @synthesize playlistType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)sortableProperties;
- (id)deeplink;
- (id)filterKeyPath;
- (_Bool)canSynchronize;
- (void)moveTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTracks:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTracksResponse:(id)arg1;
- (void)addTracks:(id)arg1 inContext:(id)arg2;
- (void)applyReceivedTracks:(id)arg1;
- (void)handlePlaylistTracksResponse:(id)arg1;
- (void)downloadTracksFromSource:(unsigned long long)arg1;
- (void)refreshOnlineTracks;
- (id)onlineTracks;
- (id)downloadedTracks;
- (id)tracks;
@property(retain, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
- (void)setNewTracksSeen;
- (void)setCustomTracks:(id)arg1;
@property(readonly, nonatomic) long long numberOfNewTopTracks;
- (_Bool)isLovedTracksPlaylist;
- (_Bool)hasPlayableContent;
@property(readonly, nonatomic) double duration;
- (id)numberOfTracksString;
@property(readonly, nonatomic) long long numberOfTracks;
- (id)extraInfos;
- (void)downloadCoverImageForOffline;
- (id)name;
- (unsigned long long)collectionType;
- (id)displayType;
- (_Bool)isQueueListEditable;
- (_Bool)canBeQueued;
- (id)domain;
- (id)illustration;
- (unsigned long long)coverType;
- (id)coverUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
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
- (long long)dzrDynamicPageInformationContextMenuItemType;
- (unsigned long long)dzrDynamicPageInformationlisteningContextOrigin;
- (void)removeItem;
- (void)indexItem;
- (Class)contentDisplayViewControllerClass;
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
- (_Bool)ascending;
- (long long)splitMode;
- (id)propertiesToFilter;
- (id)propertiesToSort;
- (void)sortReceivedTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)backgroundHeaderView;
- (id)headerView;
- (long long)illustratonDisplayMode;
- (id)detailLabelString;
- (_Bool)isPlayButtonShown;
- (void)goToRelatedViewController;
- (id)peekViewControllerWithFrame:(struct CGRect)arg1;
- (id)buildMastheadViewModel;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

