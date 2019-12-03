//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, RHAccountController, RHMembersForTrackViewModel, RHMetricsController, RHModelObserver, RHNavigationService, RHProfileMO, RHTrackMO, ZDSDeferred, _TtC7Napster12Dependencies, _TtC7Napster13AppboyService, _TtC7Napster15RHDeferredImage, _TtC7Napster19ReachabilityService, _TtC7Napster21CrashAnalyticsService;
@protocol ImageProviderOBJC, RHAlertPresenter, RHInitiatePlaybackService, RHProfileNavigationService, RHProfileSharer, RHProfileViewModelToolTipPresenter, RHProfilesService, RHUserFollowService;

@interface RHProfileViewModel : NSObject
{
    _Bool _isCurrentUserFollowing;
    _TtC7Napster12Dependencies *_dependencies;
    RHProfileMO *_profile;
    unsigned long long _playlistsCount;
    NSArray *_friends;
    NSArray *_suggestedFriends;
    NSArray *_topGenreNames;
    NSString *_metricsSource;
    NSArray *_following;
    NSArray *_followers;
    NSArray *_playlistsViewModels;
    NSArray *_followedPlaylistsViewModels;
    id <RHProfileViewModelToolTipPresenter> _tooltipPresenter;
    id <RHProfileSharer> _profileSharer;
    long long _similarScore;
    NSString *_tasteOverlapDescription;
    NSString *_recommendedTracksArtistNames;
    RHAccountController *_accountController;
    _TtC7Napster21CrashAnalyticsService *_crashAnalyticsService;
    ZDSDeferred *_deferredLoadSignature;
    RHTrackMO *_topTrack;
    RHModelObserver *_recommendedModelObserver;
    NSArray *_playlists;
    NSArray *_followedPlaylists;
    NSArray *_observers;
    id <RHProfilesService> _profilesService;
    id <RHUserFollowService> _userFollowService;
    id <ImageProviderOBJC> _imageProvider;
    _TtC7Napster13AppboyService *_appboyService;
    NSArray *_topAlbums;
    id <RHAlertPresenter> _alertPresenter;
    _TtC7Napster19ReachabilityService *_serverReachability;
    RHNavigationService<RHProfileNavigationService> *_profileNavigationService;
    id <RHInitiatePlaybackService> _playbackService;
    ZDSDeferred *_favoritesDeferred;
    RHMetricsController *_metricsController;
    ZDSDeferred *_deferredPlaylists;
    ZDSDeferred *_deferredFollowedPlaylists;
}

@property(retain, nonatomic) ZDSDeferred *deferredFollowedPlaylists; // @synthesize deferredFollowedPlaylists=_deferredFollowedPlaylists;
@property(retain, nonatomic) ZDSDeferred *deferredPlaylists; // @synthesize deferredPlaylists=_deferredPlaylists;
@property(retain, nonatomic) RHMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) ZDSDeferred *favoritesDeferred; // @synthesize favoritesDeferred=_favoritesDeferred;
@property(retain, nonatomic) id <RHInitiatePlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) RHNavigationService<RHProfileNavigationService> *profileNavigationService; // @synthesize profileNavigationService=_profileNavigationService;
@property(retain, nonatomic) _TtC7Napster19ReachabilityService *serverReachability; // @synthesize serverReachability=_serverReachability;
@property(retain, nonatomic) id <RHAlertPresenter> alertPresenter; // @synthesize alertPresenter=_alertPresenter;
@property(retain, nonatomic) NSArray *topAlbums; // @synthesize topAlbums=_topAlbums;
@property(retain, nonatomic) _TtC7Napster13AppboyService *appboyService; // @synthesize appboyService=_appboyService;
@property(retain, nonatomic) id <ImageProviderOBJC> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) id <RHUserFollowService> userFollowService; // @synthesize userFollowService=_userFollowService;
@property(retain, nonatomic) id <RHProfilesService> profilesService; // @synthesize profilesService=_profilesService;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSArray *followedPlaylists; // @synthesize followedPlaylists=_followedPlaylists;
@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(retain, nonatomic) RHModelObserver *recommendedModelObserver; // @synthesize recommendedModelObserver=_recommendedModelObserver;
@property(retain, nonatomic) RHTrackMO *topTrack; // @synthesize topTrack=_topTrack;
@property(retain, nonatomic) ZDSDeferred *deferredLoadSignature; // @synthesize deferredLoadSignature=_deferredLoadSignature;
@property(retain, nonatomic) _TtC7Napster21CrashAnalyticsService *crashAnalyticsService; // @synthesize crashAnalyticsService=_crashAnalyticsService;
@property(retain, nonatomic) RHAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) NSString *recommendedTracksArtistNames; // @synthesize recommendedTracksArtistNames=_recommendedTracksArtistNames;
@property(retain, nonatomic) NSString *tasteOverlapDescription; // @synthesize tasteOverlapDescription=_tasteOverlapDescription;
@property(nonatomic) long long similarScore; // @synthesize similarScore=_similarScore;
@property(nonatomic) __weak id <RHProfileSharer> profileSharer; // @synthesize profileSharer=_profileSharer;
@property(retain, nonatomic) id <RHProfileViewModelToolTipPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(retain, nonatomic) NSArray *followedPlaylistsViewModels; // @synthesize followedPlaylistsViewModels=_followedPlaylistsViewModels;
@property(retain, nonatomic) NSArray *playlistsViewModels; // @synthesize playlistsViewModels=_playlistsViewModels;
@property(retain, nonatomic) NSArray *followers; // @synthesize followers=_followers;
@property(retain, nonatomic) NSArray *following; // @synthesize following=_following;
@property(readonly, nonatomic) NSString *metricsSource; // @synthesize metricsSource=_metricsSource;
@property(retain, nonatomic) NSArray *topGenreNames; // @synthesize topGenreNames=_topGenreNames;
@property(retain, nonatomic) NSArray *suggestedFriends; // @synthesize suggestedFriends=_suggestedFriends;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(nonatomic) unsigned long long playlistsCount; // @synthesize playlistsCount=_playlistsCount;
@property(nonatomic) _Bool isCurrentUserFollowing; // @synthesize isCurrentUserFollowing=_isCurrentUserFollowing;
@property(retain, nonatomic) RHProfileMO *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
- (void).cxx_destruct;
- (void)trackTapEventWithTapElement:(id)arg1;
@property(readonly, nonatomic) NSString *metricsScreenEvent;
@property(readonly, nonatomic) NSString *metricsScreenName;
- (void)mailAction;
- (void)noPlaylistsButtonAction;
- (void)pushManagePlaylistsPrivacyScreen;
- (void)pushFollowedPlaylists;
- (void)pushPublicPlaylists;
- (void)pushPlaylists;
@property(readonly, nonatomic) NSArray *sections;
- (void)playTasteOverlapPlaylist;
- (void)playTopTracks;
- (id)playCombinedPlaylist;
- (void)showFindFriends;
- (void)showFollowers;
- (void)showFriends;
- (void)showAllFavorites;
- (void)showCurrentProfileDetails;
- (void)pushFollowerProfileAtIndex:(unsigned long long)arg1;
- (void)pushFollowingProfileAtIndex:(unsigned long long)arg1;
- (void)pushProfile:(id)arg1;
- (void)pushFollowingPlaylist;
- (void)pushListenersPlaylist;
- (void)pushCombinedPlaylist;
- (void)pushListenersLikeMe;
- (void)recommendedPlaylistTapped;
- (void)playlistsSectionButtonAction;
@property(readonly, nonatomic) NSString *noPlaylistsSectionText;
@property(readonly, nonatomic) NSString *noPlaylistsSectionTitle;
@property(readonly, nonatomic) NSString *noPlaylistsButtonTitle;
- (void)refreshRecommendedTracksArtistNames:(id)arg1;
- (void)refreshTasteOverlapDescriptionNames:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDisplayPrivateUserSection;
@property(readonly, nonatomic) _Bool shouldDisplayNoPublicPlaylistsSection;
@property(readonly, nonatomic) NSString *followPlaylistsSectionButtonTitle;
@property(readonly, nonatomic) NSString *playlistsSectionButtonTitle;
@property(readonly, nonatomic) NSString *weBothLikeString;
@property(readonly, nonatomic) NSString *bestForMeString;
@property(readonly, nonatomic) NSString *similarScoreString;
- (void)refreshSimilarScoreForTasteOverlap:(id)arg1;
- (id)deferredRecommendedTracks;
- (id)deferredTasteOverlap;
- (void)shareProfile;
- (id)followUnfollow;
- (void)dismissShareProfileTooltip;
- (id)signatureButtonTapped;
- (void)presentingView;
- (id)deferredLoadSuggested;
- (id)loadFollowers;
- (id)loadFollowing;
- (id)deferredLoadFriends;
- (id)deferredTopAlbums;
- (id)followedPlaylistsModelObserver;
- (id)userPlaylistsModelObserver;
@property(readonly, nonatomic) RHMembersForTrackViewModel *suggestedFriendsViewModel;
- (id)artistImageForTopTrackHighlightsWithSize:(struct CGSize)arg1 usePlaceholder:(_Bool)arg2;
- (id)deferredImageForSuggestedFriendAtIndex:(long long)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) _Bool wasProfileEdited;
@property(readonly, nonatomic) _Bool isCurrentUserPrivate;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isCurrentUser;
- (id)deferredTopFavorite;
- (id)favoritesFetchedResultsController;
@property(readonly, nonatomic) unsigned long long friendsCount;
@property(readonly, nonatomic) unsigned long long followersCount;
@property(readonly, nonatomic) unsigned long long followingCount;
@property(readonly, nonatomic) _TtC7Napster15RHDeferredImage *deferredSignatureImage;
- (id)deferredCurrentUserAvatarImageOfSize:(struct CGSize)arg1;
- (id)deferredAvatarImageOfSize:(struct CGSize)arg1;
- (id)deferredImageForFriendAtIndex:(long long)arg1 size:(struct CGSize)arg2;
- (id)viewModelForFollowerUserAtIndex:(long long)arg1;
- (id)viewModelForFollowingUserAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSString *noFriendsMessage;
@property(readonly, nonatomic) NSString *followersCountLabel;
@property(readonly, nonatomic) NSString *followingCountLabel;
@property(readonly, nonatomic) NSString *followingFollowersLabel;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *realName;
@property(readonly, nonatomic) NSString *screenName;
@property(readonly, nonatomic) NSString *userGuid;
- (void)refreshStaticFollowingAndFollowersArray;
- (void)didMoveToParent;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)saveDependencies:(id)arg1;
- (void)configureKVO;
- (id)initWithDependencies:(id)arg1;
- (id)initWithDependencies:(id)arg1 profile:(id)arg2 metricsSource:(id)arg3;

@end
