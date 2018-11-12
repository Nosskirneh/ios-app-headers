//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDeeplinkableObject-Protocol.h"
#import "DZRItemCellAdditions-Protocol.h"
#import "DZRItemPeekable-Protocol.h"
#import "DZRItemViewPeeking-Protocol.h"
#import "DZRItemWithViewControllerPoping-Protocol.h"
#import "DZRLibraryItemTableViewDisplayDelegate-Protocol.h"
#import "DZRLibraryObject-Protocol.h"
#import "DZRProfileDynamicItem-Protocol.h"
#import "DeezerBrowsable-Protocol.h"
#import "DeezerFilterableObject-Protocol.h"
#import "NSCoding-Protocol.h"
#import "_TtP6Deezer15DZRSortableItem_-Protocol.h"

@class DZRHistoryPlaylist, DZRMyMP3Playlist, DZRTopTracksPlaylist, DeezerPlaylist, NSArray, NSDictionary, NSString;

@interface DeezerFriend : NSObject <DZRItemCellAdditions, DZRLibraryObject, DZRProfileDynamicItem, DZRLibraryItemTableViewDisplayDelegate, DZRItemPeekable, DZRItemViewPeeking, DZRItemWithViewControllerPoping, _TtP6Deezer15DZRSortableItem_, NSCoding, DeezerBrowsable, DeezerFilterableObject, DZRDeeplinkableObject>
{
    _Bool _isFollowing;
    _Bool _isFollower;
    _Bool _isFollowingRequestIsLoading;
    _Bool _profileIsPrivate;
    _Bool _followingsRequestIsLoading;
    _Bool _albumsRequested;
    _Bool _artistsRequested;
    _Bool _audiobooksRequested;
    _Bool _playlistsRequested;
    _Bool _favoritePlaylistsRequested;
    _Bool _mixesRequested;
    _Bool _followersRequested;
    _Bool _followingsRequested;
    _Bool _topTracksRequested;
    _Bool _lastTracksRequested;
    _Bool _userInfosRequested;
    _Bool _isFollowingRequested;
    _Bool _talkShowsRequested;
    _Bool _isFollowingReceived;
    _Bool _albumsRequestIsLoading;
    _Bool _artistsRequestIsLoading;
    _Bool _audiobooksRequestIsLoading;
    _Bool _playlistsRequestIsLoading;
    _Bool _favoritePlaylistsRequestIsLoading;
    _Bool _mixesRequestIsLoading;
    _Bool _followersRequestIsLoading;
    _Bool _topTracksRequestIsLoading;
    _Bool _lastTracksRequestIsLoading;
    _Bool _userInfosRequestIsLoading;
    _Bool _talkShowsRequestIsLoading;
    NSArray *_followings;
    NSString *_deezerId;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_status;
    NSString *_pictureMD5;
    NSString *_age;
    NSString *_gender;
    NSString *_country;
    long long _numberOfUploadedTracks;
    NSArray *_albums;
    NSDictionary *_albumsAddToFavoriteDates;
    NSArray *_artists;
    NSDictionary *_audiobooksAddToFavoriteDates;
    NSArray *_audiobooks;
    NSDictionary *_artistsAddToFavoriteDates;
    NSArray *_playlists;
    NSDictionary *_playlistsCreationDates;
    NSArray *_favoritePlaylists;
    NSDictionary *_favoritePlaylistsAddToFavoriteDates;
    NSArray *_mixes;
    NSDictionary *_mixesAddToFavoriteDates;
    NSArray *_followers;
    NSString *_userInfos;
    NSArray *_talkShows;
    NSString *_previewTopTrackPictureMD5;
    DZRHistoryPlaylist *_historyPlaylist;
    DZRMyMP3Playlist *_myMP3Playlist;
    DZRTopTracksPlaylist *_topTracksPlaylist;
    DeezerPlaylist *_lovedTracksPlaylist;
    NSDictionary *_followingsByIDs;
    long long _numberOfFavoriteAlbums;
    long long _numberOfPlaylists;
    long long _numberOfFavoritePlaylists;
    long long _numberOfFavoriteArtists;
    long long _numberOfFavoriteAudiobooks;
    long long _numberOfFollowers;
    long long _numberOfFollowings;
    long long _numberOfFavoriteTalks;
    long long _numberOfFavoriteMixes;
    long long _numberOfFavoriteWebApplications;
    NSDictionary *_cachedSortableProperty;
}

+ (long long)filtersIntegerFromFiltersArray:(id)arg1;
+ (id)filtersArrayFromFiltersInteger:(long long)arg1;
+ (id)keyPathFromFilter:(id)arg1;
+ (void)registerToTableView:(id)arg1;
@property(retain, nonatomic) NSDictionary *cachedSortableProperty; // @synthesize cachedSortableProperty=_cachedSortableProperty;
@property(nonatomic) long long numberOfFavoriteWebApplications; // @synthesize numberOfFavoriteWebApplications=_numberOfFavoriteWebApplications;
@property(nonatomic) long long numberOfFavoriteMixes; // @synthesize numberOfFavoriteMixes=_numberOfFavoriteMixes;
@property(nonatomic) long long numberOfFavoriteTalks; // @synthesize numberOfFavoriteTalks=_numberOfFavoriteTalks;
@property(nonatomic) long long numberOfFollowings; // @synthesize numberOfFollowings=_numberOfFollowings;
@property(nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property(nonatomic) long long numberOfFavoriteAudiobooks; // @synthesize numberOfFavoriteAudiobooks=_numberOfFavoriteAudiobooks;
@property(nonatomic) long long numberOfFavoriteArtists; // @synthesize numberOfFavoriteArtists=_numberOfFavoriteArtists;
@property(nonatomic) long long numberOfFavoritePlaylists; // @synthesize numberOfFavoritePlaylists=_numberOfFavoritePlaylists;
@property(nonatomic) long long numberOfPlaylists; // @synthesize numberOfPlaylists=_numberOfPlaylists;
@property(nonatomic) long long numberOfFavoriteAlbums; // @synthesize numberOfFavoriteAlbums=_numberOfFavoriteAlbums;
@property(nonatomic) _Bool talkShowsRequestIsLoading; // @synthesize talkShowsRequestIsLoading=_talkShowsRequestIsLoading;
@property(nonatomic) _Bool userInfosRequestIsLoading; // @synthesize userInfosRequestIsLoading=_userInfosRequestIsLoading;
@property(nonatomic) _Bool lastTracksRequestIsLoading; // @synthesize lastTracksRequestIsLoading=_lastTracksRequestIsLoading;
@property(nonatomic) _Bool topTracksRequestIsLoading; // @synthesize topTracksRequestIsLoading=_topTracksRequestIsLoading;
@property(nonatomic) _Bool followersRequestIsLoading; // @synthesize followersRequestIsLoading=_followersRequestIsLoading;
@property(nonatomic) _Bool mixesRequestIsLoading; // @synthesize mixesRequestIsLoading=_mixesRequestIsLoading;
@property(nonatomic) _Bool favoritePlaylistsRequestIsLoading; // @synthesize favoritePlaylistsRequestIsLoading=_favoritePlaylistsRequestIsLoading;
@property(nonatomic) _Bool playlistsRequestIsLoading; // @synthesize playlistsRequestIsLoading=_playlistsRequestIsLoading;
@property(nonatomic) _Bool audiobooksRequestIsLoading; // @synthesize audiobooksRequestIsLoading=_audiobooksRequestIsLoading;
@property(nonatomic) _Bool artistsRequestIsLoading; // @synthesize artistsRequestIsLoading=_artistsRequestIsLoading;
@property(nonatomic) _Bool albumsRequestIsLoading; // @synthesize albumsRequestIsLoading=_albumsRequestIsLoading;
@property(nonatomic) _Bool isFollowingReceived; // @synthesize isFollowingReceived=_isFollowingReceived;
@property(nonatomic) _Bool talkShowsRequested; // @synthesize talkShowsRequested=_talkShowsRequested;
@property(nonatomic) _Bool isFollowingRequested; // @synthesize isFollowingRequested=_isFollowingRequested;
@property(nonatomic) _Bool userInfosRequested; // @synthesize userInfosRequested=_userInfosRequested;
@property(nonatomic) _Bool lastTracksRequested; // @synthesize lastTracksRequested=_lastTracksRequested;
@property(nonatomic) _Bool topTracksRequested; // @synthesize topTracksRequested=_topTracksRequested;
@property(nonatomic) _Bool followingsRequested; // @synthesize followingsRequested=_followingsRequested;
@property(nonatomic) _Bool followersRequested; // @synthesize followersRequested=_followersRequested;
@property(nonatomic) _Bool mixesRequested; // @synthesize mixesRequested=_mixesRequested;
@property(nonatomic) _Bool favoritePlaylistsRequested; // @synthesize favoritePlaylistsRequested=_favoritePlaylistsRequested;
@property(nonatomic) _Bool playlistsRequested; // @synthesize playlistsRequested=_playlistsRequested;
@property(nonatomic) _Bool audiobooksRequested; // @synthesize audiobooksRequested=_audiobooksRequested;
@property(nonatomic) _Bool artistsRequested; // @synthesize artistsRequested=_artistsRequested;
@property(nonatomic) _Bool albumsRequested; // @synthesize albumsRequested=_albumsRequested;
@property(retain, nonatomic) NSDictionary *followingsByIDs; // @synthesize followingsByIDs=_followingsByIDs;
@property(retain, nonatomic) DeezerPlaylist *lovedTracksPlaylist; // @synthesize lovedTracksPlaylist=_lovedTracksPlaylist;
@property(retain, nonatomic) DZRTopTracksPlaylist *topTracksPlaylist; // @synthesize topTracksPlaylist=_topTracksPlaylist;
@property(retain, nonatomic) DZRMyMP3Playlist *myMP3Playlist; // @synthesize myMP3Playlist=_myMP3Playlist;
@property(retain, nonatomic) DZRHistoryPlaylist *historyPlaylist; // @synthesize historyPlaylist=_historyPlaylist;
@property(retain, nonatomic) NSString *previewTopTrackPictureMD5; // @synthesize previewTopTrackPictureMD5=_previewTopTrackPictureMD5;
@property(retain, nonatomic) NSArray *talkShows; // @synthesize talkShows=_talkShows;
@property(copy, nonatomic) NSString *userInfos; // @synthesize userInfos=_userInfos;
@property(nonatomic) _Bool followingsRequestIsLoading; // @synthesize followingsRequestIsLoading=_followingsRequestIsLoading;
@property(retain, nonatomic) NSArray *followers; // @synthesize followers=_followers;
@property(retain, nonatomic) NSDictionary *mixesAddToFavoriteDates; // @synthesize mixesAddToFavoriteDates=_mixesAddToFavoriteDates;
@property(retain, nonatomic) NSArray *mixes; // @synthesize mixes=_mixes;
@property(retain, nonatomic) NSDictionary *favoritePlaylistsAddToFavoriteDates; // @synthesize favoritePlaylistsAddToFavoriteDates=_favoritePlaylistsAddToFavoriteDates;
@property(retain, nonatomic) NSArray *favoritePlaylists; // @synthesize favoritePlaylists=_favoritePlaylists;
@property(retain, nonatomic) NSDictionary *playlistsCreationDates; // @synthesize playlistsCreationDates=_playlistsCreationDates;
@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(retain, nonatomic) NSDictionary *artistsAddToFavoriteDates; // @synthesize artistsAddToFavoriteDates=_artistsAddToFavoriteDates;
@property(retain, nonatomic) NSArray *audiobooks; // @synthesize audiobooks=_audiobooks;
@property(retain, nonatomic) NSDictionary *audiobooksAddToFavoriteDates; // @synthesize audiobooksAddToFavoriteDates=_audiobooksAddToFavoriteDates;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSDictionary *albumsAddToFavoriteDates; // @synthesize albumsAddToFavoriteDates=_albumsAddToFavoriteDates;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(nonatomic) _Bool profileIsPrivate; // @synthesize profileIsPrivate=_profileIsPrivate;
@property(nonatomic) _Bool isFollowingRequestIsLoading; // @synthesize isFollowingRequestIsLoading=_isFollowingRequestIsLoading;
@property(nonatomic) _Bool isFollower; // @synthesize isFollower=_isFollower;
@property(nonatomic) long long numberOfUploadedTracks; // @synthesize numberOfUploadedTracks=_numberOfUploadedTracks;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *pictureMD5; // @synthesize pictureMD5=_pictureMD5;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *deezerId; // @synthesize deezerId=_deezerId;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
- (void).cxx_destruct;
- (id)sortableProperties;
- (id)deeplink;
- (id)filterKeyPath;
- (id)illustrations;
- (id)uniqueID;
- (id)domain;
- (unsigned long long)coverType;
- (id)extraInfos;
- (id)coverURLStringWithDimensions:(id)arg1;
- (id)coverURL:(id)arg1;
- (id)coverURL90_90;
- (id)coverURL40_40;
- (id)coverURL20_20;
- (id)coverUrl;
- (id)backgroundURL;
- (id)coverURLWithDimensionString:(id)arg1;
- (_Bool)shouldStoreImagesInCache;
- (long long)noDataTypeForKeyPath:(id)arg1;
- (id)noDataTextForKeyPath:(id)arg1;
- (id)titleForKeyPath:(id)arg1;
- (void)refreshIsFollowing:(id)arg1;
- (void)refreshFollowers:(id)arg1;
- (_Bool)friendDeezerIDIsAmongFollowings:(id)arg1;
- (void)removeFollower:(id)arg1;
- (void)addFollower:(id)arg1;
- (void)removeFollowing:(id)arg1;
- (void)addFollowing:(id)arg1;
- (id)reloadKeyPath:(id)arg1;
- (_Bool)hasReceivedKeyPath:(id)arg1;
- (_Bool)hasRequestedKeyPath:(id)arg1;
- (_Bool)isLoadingKeyPath:(id)arg1;
- (_Bool)hasMP3Playlist;
- (_Bool)hasPlayableContent;
- (id)numberOfFollowersString;
- (void)setNumberOfFollowersNumber:(id)arg1;
@property(retain, nonatomic) NSArray *followings; // @synthesize followings=_followings;
@property(readonly, nonatomic) _Bool isCurrentUser;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeezerId:(id)arg1;
- (long long)listeningState;
- (void)removeFromLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)recentlyPlayedItemInSection:(id)arg1 atIndex:(long long)arg2;
- (id)itemForMastheadSection:(id)arg1;
- (id)itemIDForBrowsableWithId:(id)arg1 type:(id)arg2 inSection:(id)arg3 atIndex:(long long)arg4;
- (long long)dzrDynamicPageInformationContextMenuItemType;
- (unsigned long long)dzrDynamicPageInformationlisteningContextOrigin;
- (id)cellForTableView:(id)arg1 forIndexPath:(id)arg2 withStyle:(unsigned long long)arg3 delegate:(id)arg4;
- (id)dzrSuggestLogID;
- (long long)dzrSuggestGetSearchResultType;
- (long long)dzrSuggestGetContextMenuType;
- (void)dzrSuggestCellTouchedAtIndexPath:(id)arg1 forController:(id)arg2;
- (id)dzrSuggestCellForController:(id)arg1 forIndexPath:(id)arg2 withStyle:(unsigned long long)arg3;
- (long long)illustratonDisplayMode;
- (_Bool)isPlayButtonShown;
- (id)backgroundImage;
- (void)goToRelatedViewController;
- (id)detailLabelString;
- (id)peekViewControllerWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
