//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierPlaylistModelDelegate-Protocol.h"
#import "SPTFreeTierPlaylistSponsoredViewModelDelegate-Protocol.h"
#import "SPTFreeTierPlaylistViewModel-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTPlaylistExtenderModelDelegate-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistTrackShuffler, SPTPlayOrigin, SPTPlayerState;
@protocol SPTAssistedCurationUIService, SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistSponsoredViewModel, SPTFreeTierPlaylistTestManager, SPTFreeTierPlaylistViewModelDelegate, SPTLinkDispatcher, SPTOfflineModeState, SPTPlayer, SPTPlaylistExtenderModel;

@interface SPTFreeTierPlaylistViewModelImplementation : NSObject <SPTPlayerObserver, SPTFreeTierPlaylistSponsoredViewModelDelegate, SPTPlaylistExtenderModelDelegate, SPTFreeTierPlaylistViewModel, SPTFreeTierPlaylistModelDelegate>
{
    _Bool _customPlaylistHeaderEnabled;
    _Bool _addSongsDisabled;
    _Bool _ownedBySelf;
    _Bool _followed;
    _Bool _reportAbuseEnabled;
    _Bool _offlineSyncAvailable;
    _Bool _editModeEnabled;
    _Bool _shouldIncludeTrackOwner;
    _Bool _consolidatedViewEnabled;
    _Bool _likeActionPlacedInsideHeader;
    _Bool _playButtonUsedForPlayback;
    _Bool _shuffleBadgeEducationAvailable;
    _Bool _playlistExtenderEnabled;
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistViewModelDelegate> _delegate;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    SPTPlayOrigin *_playOrigin;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    NSURL *_playlistImageURL;
    NSString *_playlistName;
    NSString *_creatorTitle;
    NSString *_playlistOwnerName;
    NSString *_playlistOwnerUsername;
    NSString *_numberOfLikesText;
    NSString *_madeForName;
    unsigned long long _offlineAvailability;
    unsigned long long _type;
    NSDate *_lastModifiedTime;
    double _totalDuration;
    NSString *_playlistDescription;
    NSString *_ownerUsername;
    NSURL *_ownerImageURL;
    NSURL *_ownerLink;
    NSArray *_tracks;
    NSArray *_recommendations;
    NSArray *_shuffledCloudTracks;
    id <SPTPlayer> _player;
    SPTPlayerState *_lastPlayerState;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFreeTierPlaylistSponsoredViewModel> _sponsoredViewModel;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    SPTFreeTierPlaylistTrackShuffler *_trackShuffler;
    id <SPTPlaylistExtenderModel> _playlistExtenderModel;
}

@property(nonatomic, getter=isPlaylistExtenderEnabled) _Bool playlistExtenderEnabled; // @synthesize playlistExtenderEnabled=_playlistExtenderEnabled;
@property(retain, nonatomic) id <SPTPlaylistExtenderModel> playlistExtenderModel; // @synthesize playlistExtenderModel=_playlistExtenderModel;
@property(retain, nonatomic) SPTFreeTierPlaylistTrackShuffler *trackShuffler; // @synthesize trackShuffler=_trackShuffler;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel; // @synthesize sponsoredViewModel=_sponsoredViewModel;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *shuffledCloudTracks; // @synthesize shuffledCloudTracks=_shuffledCloudTracks;
@property(retain, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSURL *ownerLink; // @synthesize ownerLink=_ownerLink;
@property(retain, nonatomic) NSURL *ownerImageURL; // @synthesize ownerImageURL=_ownerImageURL;
@property(retain, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
@property(retain, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable; // @synthesize shuffleBadgeEducationAvailable=_shuffleBadgeEducationAvailable;
@property(nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback; // @synthesize playButtonUsedForPlayback=_playButtonUsedForPlayback;
@property(nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader; // @synthesize likeActionPlacedInsideHeader=_likeActionPlacedInsideHeader;
@property(nonatomic, getter=isConsolidatedViewEnabled) _Bool consolidatedViewEnabled; // @synthesize consolidatedViewEnabled=_consolidatedViewEnabled;
@property(nonatomic, getter=shouldIncludeTrackOwner) _Bool shouldIncludeTrackOwner; // @synthesize shouldIncludeTrackOwner=_shouldIncludeTrackOwner;
@property(nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled; // @synthesize editModeEnabled=_editModeEnabled;
@property(nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable; // @synthesize offlineSyncAvailable=_offlineSyncAvailable;
@property(nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled; // @synthesize reportAbuseEnabled=_reportAbuseEnabled;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf; // @synthesize ownedBySelf=_ownedBySelf;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(retain, nonatomic) NSString *numberOfLikesText; // @synthesize numberOfLikesText=_numberOfLikesText;
@property(retain, nonatomic) NSString *playlistOwnerUsername; // @synthesize playlistOwnerUsername=_playlistOwnerUsername;
@property(retain, nonatomic) NSString *playlistOwnerName; // @synthesize playlistOwnerName=_playlistOwnerName;
@property(retain, nonatomic) NSString *creatorTitle; // @synthesize creatorTitle=_creatorTitle;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(readonly, nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic, getter=isAddSongsDisabled) _Bool addSongsDisabled; // @synthesize addSongsDisabled=_addSongsDisabled;
@property(readonly, nonatomic, getter=isCustomPlaylistHeaderEnabled) _Bool customPlaylistHeaderEnabled; // @synthesize customPlaylistHeaderEnabled=_customPlaylistHeaderEnabled;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (_Bool)isPlaylistExtenderSection:(long long)arg1;
- (_Bool)isRecomendationsLoading;
- (_Bool)shouldDisplayFooterForSection:(unsigned long long)arg1;
- (void)refreshRecommendations;
- (void)addRecommendationAtIndex:(long long)arg1;
- (void)playlistExtenderModelDidUpdate:(id)arg1;
- (void)playlistExtenderModel:(id)arg1 didFailWithError:(id)arg2;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) unsigned long long searchBarType;
@property(readonly, nonatomic) _Bool showSearchBar;
- (void)playlistViewModelSponsorshipDidChange:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)updateFollowCount:(unsigned long long)arg1;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)navigateToAllSongs;
- (_Bool)showBrowseSectionHeaderButton;
- (_Bool)showPreCurationSectionHeaderButton;
- (_Bool)showAddSongsSectionHeaderButton;
- (_Bool)isTracksSection:(unsigned long long)arg1;
- (_Bool)isRecommendedSection:(unsigned long long)arg1;
- (_Bool)isAdditionalControlsSection:(unsigned long long)arg1;
- (_Bool)isSponsoredPlaylistSection:(unsigned long long)arg1;
- (id)trackEntityAtIndexPath:(id)arg1;
- (void)playTrackAtIndex:(unsigned long long)arg1;
- (_Bool)shouldDisplayBrowseRedirectButtonForSection:(unsigned long long)arg1;
- (void)navigateToPlaylistOwnerPage;
- (_Bool)isApproachingEndIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfSections;
@property(readonly, nonatomic) unsigned long long countOfTracks;
- (id)titleOfSectionFooter:(unsigned long long)arg1;
- (id)subTitleOfSectionHeader:(unsigned long long)arg1;
- (id)titleOfSectionHeader:(unsigned long long)arg1;
- (_Bool)shouldDisplayHeaderForSection:(unsigned long long)arg1;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)toggleTrackLikeAtIndexPath:(id)arg1;
- (void)toggleTrackBanAtIndexPath:(id)arg1;
- (void)trackSelectedAtIndexPath:(id)arg1;
- (id)cloudViewModelAtIndexPath:(id)arg1;
- (void)deletePlaylist;
- (id)trackViewModelAtIndexPath:(id)arg1;
- (void)changeOffline:(_Bool)arg1;
- (void)showShuffleBadgeEducationDialog;
- (void)toggleFollow;
- (void)sectionHeaderButtonTapped;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay;
- (void)play;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithPlaylistModel:(id)arg1 playOrigin:(id)arg2 assistedCurationUIService:(id)arg3 player:(id)arg4 linkDispatcher:(id)arg5 sponsoredViewModel:(id)arg6 offlineModeState:(id)arg7 collectionConfiguration:(id)arg8 logger:(id)arg9 testManager:(id)arg10 playlistExtenderModel:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

