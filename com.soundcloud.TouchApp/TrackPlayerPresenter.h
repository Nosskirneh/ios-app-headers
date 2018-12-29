//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AdOverlayLauncherDelegate-Protocol.h"
#import "ArtworkViewSnapshotObserving-Protocol.h"
#import "PlayerPresenter-Protocol.h"
#import "_TtP8Playback24PlayerTransitionDefining_-Protocol.h"

@class Accessibility, AdOverlayLauncher, AdOverlayLauncherFactory, EngagementFormatter, NSString, PlayerContextFormatter, PlayerTransitionScaler, TrackAuthorizationHelper, TrackPlayerAnimator, TrackPlayerContextLabelPresenter, TrackPlayerViewModel, UpsellBarPlayerPresenter, UpsellBarPlayerPresenterFactory, UpsellManager;

@interface TrackPlayerPresenter : NSObject <AdOverlayLauncherDelegate, ArtworkViewSnapshotObserving, PlayerPresenter, _TtP8Playback24PlayerTransitionDefining_>
{
    _Bool _isTransitioning;
    TrackPlayerViewModel *_viewModel;
    TrackPlayerAnimator *_animator;
    AdOverlayLauncherFactory *_launcherFactory;
    Accessibility *_accessibility;
    PlayerContextFormatter *_playerContextFormatter;
    UpsellBarPlayerPresenterFactory *_upsellBarPlayerPresenterFactory;
    TrackAuthorizationHelper *_trackAuthorization;
    TrackPlayerContextLabelPresenter *_contextLabelPresenter;
    UpsellManager *_upsellManager;
    UpsellBarPlayerPresenter *_upsellBarPlayerPresenter;
    AdOverlayLauncher *_adOverlayLauncher;
    PlayerTransitionScaler *_scaler;
    EngagementFormatter *_engagementFormatter;
}

@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) EngagementFormatter *engagementFormatter; // @synthesize engagementFormatter=_engagementFormatter;
@property(retain, nonatomic) PlayerTransitionScaler *scaler; // @synthesize scaler=_scaler;
@property(retain, nonatomic) AdOverlayLauncher *adOverlayLauncher; // @synthesize adOverlayLauncher=_adOverlayLauncher;
@property(retain, nonatomic) UpsellBarPlayerPresenter *upsellBarPlayerPresenter; // @synthesize upsellBarPlayerPresenter=_upsellBarPlayerPresenter;
@property(readonly, nonatomic) UpsellManager *upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) TrackPlayerContextLabelPresenter *contextLabelPresenter; // @synthesize contextLabelPresenter=_contextLabelPresenter;
@property(readonly, nonatomic) TrackAuthorizationHelper *trackAuthorization; // @synthesize trackAuthorization=_trackAuthorization;
@property(readonly, nonatomic) UpsellBarPlayerPresenterFactory *upsellBarPlayerPresenterFactory; // @synthesize upsellBarPlayerPresenterFactory=_upsellBarPlayerPresenterFactory;
@property(readonly, nonatomic) PlayerContextFormatter *playerContextFormatter; // @synthesize playerContextFormatter=_playerContextFormatter;
@property(readonly, nonatomic) Accessibility *accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) AdOverlayLauncherFactory *launcherFactory; // @synthesize launcherFactory=_launcherFactory;
@property(readonly, nonatomic) TrackPlayerAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak TrackPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didCreateSnapshotForArtworkImage:(id)arg1;
- (void)showUpsellBar;
- (void)hideUpsellBar;
- (void)updateUpsellBar;
- (void)setUpsellBarVisibilityForItem:(id)arg1;
- (void)updateConstraintsForGoogleCast:(_Bool)arg1;
- (void)adjustButtonInsets:(id)arg1;
- (void)showCommentsCount:(long long)arg1;
- (void)showDefaultLikeCount;
- (void)showLikeCount:(long long)arg1;
- (void)showLikedState:(_Bool)arg1;
- (id)animationState;
- (_Bool)commentsButtonVisible;
- (_Bool)adOverlayVisible;
- (id)centerButtonPageModelForPlayState:(unsigned long long)arg1;
- (void)updateCenterButtonImage;
- (void)updateCenterLabelState;
- (void)updateStationButtonTitle;
- (void)updateGradientBackgroundHiddenState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateCenterContentState:(unsigned long long)arg1;
- (void)setFooterButtonAlpha:(double)arg1;
- (void)setArtworkBlurred:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setViewsToPlayState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setWaveformToPlayingState:(_Bool)arg1;
- (void)startPlayAnimations;
- (void)updateArtworkWithPlayQueueItem:(id)arg1;
- (void)updateArtistButtonWithName:(id)arg1;
- (id)privateSymbolAttributes;
- (void)updateTitleForPrivateTrack:(id)arg1;
- (void)updateTitleForTrack:(id)arg1;
- (_Bool)shouldUpdateWaveform;
- (unsigned long long)stateDurationAnimated:(_Bool)arg1;
- (void)showErrorStateAnimated:(_Bool)arg1;
- (void)showGeoBlockedStateAnimated:(_Bool)arg1;
- (void)showScrubbingStateAnimated:(_Bool)arg1;
- (void)showPausedStateAnimated:(_Bool)arg1;
- (void)showPlayingStateAnimated:(_Bool)arg1;
- (void)showLoadingStateAnimated:(_Bool)arg1;
- (_Bool)shouldDisableInteractiveTransition;
- (void)completeForPlayerVisible:(_Bool)arg1;
- (void)updateForPlayerVisibleWithProgress:(double)arg1;
- (void)startForPlayerVisible:(_Bool)arg1;
- (void)overlayAdDidDismiss;
- (void)overlayAdWillBePresented;
- (void)updateBottomMenuBottomConstraintsWithSafeAreaHeight:(double)arg1;
- (void)updateUpsellBarButtonConstraintsWithSafeAreaHeight:(double)arg1;
- (_Bool)upsellBarVisible;
- (void)dismissAdOverlay;
- (void)presentAdOverlay:(id)arg1 onTrack:(id)arg2 fromController:(id)arg3;
- (_Bool)didPresentAdOverlay;
- (void)stopAllAnimations;
- (void)updateViewsAfterLayout;
- (void)updateGoogleCastViews:(_Bool)arg1;
- (void)updateTrackTitleWithItem:(id)arg1 isPrivate:(_Bool)arg2;
- (void)updateEngagement:(id)arg1;
- (void)updateSamplesWithWaveform:(id)arg1;
- (void)updateProgress:(double)arg1 time:(double)arg2;
- (void)cleanupAfterTransition;
- (void)definePlayerOpenState;
- (void)definePlayerClosedState;
- (void)setupTransition;
- (void)updateVisualStateAnimated:(_Bool)arg1;
- (void)updateButtonsWithPlayerTrackService:(id)arg1;
- (void)updateWithPlayerTrackService:(id)arg1;
- (void)setupVisualStyle;
- (id)initWithAnimator:(id)arg1 launcherFactory:(id)arg2 accessibility:(id)arg3 playerContextFormatter:(id)arg4 upsellBarPlayerPresenterFactory:(id)arg5 trackAuthorization:(id)arg6 contextLabelPresenter:(id)arg7 upsellManager:(id)arg8 engagementFormatter:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
