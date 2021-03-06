//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareLauncherDelegate-Protocol.h"

@class AddToPlaylistLauncher, AddToPlaylistLauncherFactory, AlertConfigurationFactory, AlertPresenterFactory, AnalyticsEngagementEventTagger, AnalyticsUpsellEventTagger, AnonymousController, Engagement, LegacyPlayerLauncher, LegacyPlayerLauncherFactory, NSString, OfflineSync, PlayQueueDataSourceFactory, PlayableShareLauncher, PlayableShareLauncherFactory, PlaylistPresenter, PlaylistServiceFactory, RelatedTracksService, UpsellLauncher, UserFeaturesService, _TtC10SoundCloud16CommentsLauncher, _TtC10SoundCloud21StationsActionHandler, _TtC10SoundCloud26TrackPrivacyServiceFactory;
@protocol ActionSheetActionHandlerDataSource, ActionSheetActionHandlerDelegate, EngagementDelegate, PlaylistServicing, _TtP10SCMetadata19TrackPrivacyServing_, _TtP10SoundCloud31PlaylistOfflineSyncLikeHandling_, _TtP12SCEngagement18InstagramShareable_, _TtP12SCEngagement33InstagramStorySharerManufacturing_, _TtP2UI14AlertPresenter_;

@interface ActionSheetActionHandler : NSObject <ShareLauncherDelegate>
{
    id <ActionSheetActionHandlerDelegate> _delegate;
    id <ActionSheetActionHandlerDataSource> _dataSource;
    id <EngagementDelegate> _engagementDelegate;
    Engagement *_engagement;
    PlayableShareLauncherFactory *_shareLauncherFactory;
    AnalyticsEngagementEventTagger *_analyticsEngagementEventTagger;
    AddToPlaylistLauncherFactory *_addToPlaylistLauncherFactory;
    RelatedTracksService *_relatedTracksService;
    AlertConfigurationFactory *_alertConfigurationFactory;
    AlertPresenterFactory *_alertPresenterFactory;
    PlaylistServiceFactory *_playlistServiceFactory;
    AnalyticsUpsellEventTagger *_analyticsUpsellEventTagger;
    PlaylistPresenter *_playlistPresenter;
    PlayQueueDataSourceFactory *_dataSourceFactory;
    LegacyPlayerLauncherFactory *_playerLauncherFactory;
    _TtC10SoundCloud21StationsActionHandler *_stationsHandler;
    PlayableShareLauncher *_shareLauncher;
    AddToPlaylistLauncher *_addToPlaylistLauncher;
    id <_TtP2UI14AlertPresenter_> _alertPresenter;
    LegacyPlayerLauncher *_currentLauncher;
    id <PlaylistServicing> _playlistService;
    AnonymousController *_anonymousController;
    id <_TtP10SoundCloud31PlaylistOfflineSyncLikeHandling_> _playlistOfflineSyncLikeHandler;
    OfflineSync *_offlineSync;
    UserFeaturesService *_userFeaturesService;
    UpsellLauncher *_upsellLauncher;
    id <_TtP12SCEngagement33InstagramStorySharerManufacturing_> _instagramStorySharerFactory;
    id <_TtP12SCEngagement18InstagramShareable_> _instagramStorySharer;
    _TtC10SoundCloud16CommentsLauncher *_commentsLauncher;
    _TtC10SoundCloud26TrackPrivacyServiceFactory *_trackPrivacyServiceFactory;
    id <_TtP10SCMetadata19TrackPrivacyServing_> _trackPrivacyService;
}

@property(retain, nonatomic) id <_TtP10SCMetadata19TrackPrivacyServing_> trackPrivacyService; // @synthesize trackPrivacyService=_trackPrivacyService;
@property(readonly, nonatomic) _TtC10SoundCloud26TrackPrivacyServiceFactory *trackPrivacyServiceFactory; // @synthesize trackPrivacyServiceFactory=_trackPrivacyServiceFactory;
@property(readonly, nonatomic) _TtC10SoundCloud16CommentsLauncher *commentsLauncher; // @synthesize commentsLauncher=_commentsLauncher;
@property(retain, nonatomic) id <_TtP12SCEngagement18InstagramShareable_> instagramStorySharer; // @synthesize instagramStorySharer=_instagramStorySharer;
@property(readonly, nonatomic) id <_TtP12SCEngagement33InstagramStorySharerManufacturing_> instagramStorySharerFactory; // @synthesize instagramStorySharerFactory=_instagramStorySharerFactory;
@property(readonly, nonatomic) UpsellLauncher *upsellLauncher; // @synthesize upsellLauncher=_upsellLauncher;
@property(readonly, nonatomic) UserFeaturesService *userFeaturesService; // @synthesize userFeaturesService=_userFeaturesService;
@property(readonly, nonatomic) OfflineSync *offlineSync; // @synthesize offlineSync=_offlineSync;
@property(readonly, nonatomic) id <_TtP10SoundCloud31PlaylistOfflineSyncLikeHandling_> playlistOfflineSyncLikeHandler; // @synthesize playlistOfflineSyncLikeHandler=_playlistOfflineSyncLikeHandler;
@property(readonly, nonatomic) AnonymousController *anonymousController; // @synthesize anonymousController=_anonymousController;
@property(retain, nonatomic) id <PlaylistServicing> playlistService; // @synthesize playlistService=_playlistService;
@property(retain, nonatomic) LegacyPlayerLauncher *currentLauncher; // @synthesize currentLauncher=_currentLauncher;
@property(retain, nonatomic) id <_TtP2UI14AlertPresenter_> alertPresenter; // @synthesize alertPresenter=_alertPresenter;
@property(retain, nonatomic) AddToPlaylistLauncher *addToPlaylistLauncher; // @synthesize addToPlaylistLauncher=_addToPlaylistLauncher;
@property(retain, nonatomic) PlayableShareLauncher *shareLauncher; // @synthesize shareLauncher=_shareLauncher;
@property(readonly, nonatomic) _TtC10SoundCloud21StationsActionHandler *stationsHandler; // @synthesize stationsHandler=_stationsHandler;
@property(readonly, nonatomic) LegacyPlayerLauncherFactory *playerLauncherFactory; // @synthesize playerLauncherFactory=_playerLauncherFactory;
@property(readonly, nonatomic) PlayQueueDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
@property(readonly, nonatomic) PlaylistPresenter *playlistPresenter; // @synthesize playlistPresenter=_playlistPresenter;
@property(readonly, nonatomic) AnalyticsUpsellEventTagger *analyticsUpsellEventTagger; // @synthesize analyticsUpsellEventTagger=_analyticsUpsellEventTagger;
@property(readonly, nonatomic) PlaylistServiceFactory *playlistServiceFactory; // @synthesize playlistServiceFactory=_playlistServiceFactory;
@property(readonly, nonatomic) AlertPresenterFactory *alertPresenterFactory; // @synthesize alertPresenterFactory=_alertPresenterFactory;
@property(readonly, nonatomic) AlertConfigurationFactory *alertConfigurationFactory; // @synthesize alertConfigurationFactory=_alertConfigurationFactory;
@property(readonly, nonatomic) RelatedTracksService *relatedTracksService; // @synthesize relatedTracksService=_relatedTracksService;
@property(readonly, nonatomic) AddToPlaylistLauncherFactory *addToPlaylistLauncherFactory; // @synthesize addToPlaylistLauncherFactory=_addToPlaylistLauncherFactory;
@property(readonly, nonatomic) AnalyticsEngagementEventTagger *analyticsEngagementEventTagger; // @synthesize analyticsEngagementEventTagger=_analyticsEngagementEventTagger;
@property(readonly, nonatomic) PlayableShareLauncherFactory *shareLauncherFactory; // @synthesize shareLauncherFactory=_shareLauncherFactory;
@property(readonly, nonatomic) Engagement *engagement; // @synthesize engagement=_engagement;
@property(readonly, nonatomic) __weak id <EngagementDelegate> engagementDelegate; // @synthesize engagementDelegate=_engagementDelegate;
@property(readonly, nonatomic) __weak id <ActionSheetActionHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ActionSheetActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)contextFromDelegate;
- (id)contextFromDelegateWithEngagementDelegate:(id)arg1;
- (long long)screenFromDelegate;
- (void)dismissActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)offlineSyncPlaylist:(id)arg1 analyticsPromotedPlayableState:(id)arg2;
- (void)editPlaylist:(id)arg1;
- (void)shufflePlaylist:(id)arg1 promotedState:(id)arg2;
- (void)removePlaylist:(id)arg1;
- (id)playlistServiceWithPlaylistUrn:(id)arg1;
- (void)openCommentsWithPresentable:(id)arg1;
- (void)openProfile:(id)arg1;
- (void)startStation:(id)arg1;
- (void)showRelatedTracksError;
- (void)launchPlayerWithInitialItem:(id)arg1 seedTrackUrn:(id)arg2;
- (void)playRelatedTracks:(id)arg1;
- (void)addToPlaylist:(id)arg1;
- (id)universalLinkWithReferalForPresentable:(id)arg1;
- (void)shareInstagramStoryWithPresentable:(id)arg1;
- (void)sharePresentable:(id)arg1 promotedState:(id)arg2;
- (id)shareLauncherSourceView:(id)arg1;
- (void)playlist:(id)arg1 engagementAction:(unsigned long long)arg2 promotedState:(id)arg3;
- (void)performPlaylistAction:(unsigned long long)arg1 actionSheetPresentable:(id)arg2 promotedState:(id)arg3;
- (void)performPlaylistAction:(unsigned long long)arg1 actionSheetPresentable:(id)arg2 promotedState:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)performTrackAction:(unsigned long long)arg1 actionSheetPresentable:(id)arg2 promotedState:(id)arg3;
- (void)setEngagementActionsDelegate:(id)arg1;
- (void)setEngagementTrackingDelegate:(id)arg1;
- (id)initWithDataSource:(id)arg1 engagementDelegate:(id)arg2 engagement:(id)arg3 shareLauncherFactory:(id)arg4 analyticsEngagementEventTagger:(id)arg5 addToPlaylistLauncherFactory:(id)arg6 relatedTracksService:(id)arg7 alertConfigurationFactory:(id)arg8 alertPresenterFactory:(id)arg9 playlistServiceFactory:(id)arg10 analyticsUpsellEventTagger:(id)arg11 playlistPresenter:(id)arg12 playQueueDataSourceFactory:(id)arg13 playerLauncherFactory:(id)arg14 anonymousController:(id)arg15 stationsHandler:(id)arg16 playlistOfflineSyncLikeHandler:(id)arg17 offlineSync:(id)arg18 userFeaturesService:(id)arg19 upsellLauncher:(id)arg20 commentsLauncher:(id)arg21 instagramStorySharerFactory:(id)arg22 trackPrivacyServiceFactory:(id)arg23;
- (id)initWithDataSource:(id)arg1 engagementDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

