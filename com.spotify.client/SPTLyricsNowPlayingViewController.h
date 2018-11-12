//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTKaraokeManagerObserver-Protocol.h"
#import "SPTLyricsOnboardingManagerObserver-Protocol.h"
#import "SPTNowPlayingCarouselContentProvider-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, NSURL, SPTLyricsLoggingService, SPTLyricsMiniViewController, SPTLyricsNowPlayingViewCoverArtView, SPTLyricsService, SPTLyricsTheme, SPTPlayerTrack, UIGestureRecognizer;
@protocol SPTAutoLockOverrideToken, SPTImageLoaderFactory, SPTKaraokeManager, SPTKaraokeTestManager, SPTLinkDispatcher, SPTLyricsOnboardingManager, SPTModalPresentationController, SPTNowPlayingCarouselContentProviderFactory, SPTNowPlayingCarouselContentProviderRegistry, SPTOfflineModeState, SPTPlayer, SPTProductState;

@interface SPTLyricsNowPlayingViewController : UIViewController <UIGestureRecognizerDelegate, SPTLyricsOnboardingManagerObserver, SPTKaraokeManagerObserver, SPTNowPlayingCarouselContentProvider>
{
    _Bool _lyricsFeatureEnabled;
    _Bool _lyricsViewHidden;
    _Bool _appBackgrounded;
    _Bool _trackHasLyrics;
    _Bool _showLyricsViewOnTop;
    _Bool _active;
    SPTLyricsService *_lyricsService;
    id <SPTNowPlayingCarouselContentProviderRegistry> _providerRegistry;
    id <SPTNowPlayingCarouselContentProviderFactory> _providerFactory;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTLyricsLoggingService *_loggingService;
    id <SPTPlayer> _player;
    id <SPTLyricsOnboardingManager> _onboardingManager;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTKaraokeManager> _karaokeManager;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTLyricsTheme *_theme;
    id <SPTKaraokeTestManager> _karaokeTestManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_trackURI;
    NSString *_trackId;
    SPTPlayerTrack *_track;
    NSURL *_trackImageURL;
    UIGestureRecognizer *_gestureRecognizer;
    SPTLyricsNowPlayingViewCoverArtView *_coverArtView;
    id <SPTProductState> _productState;
    id <SPTAutoLockOverrideToken> _autoLockOverride;
    NSTimer *_animationTimer;
    SPTLyricsMiniViewController *_lyricsController;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool showLyricsViewOnTop; // @synthesize showLyricsViewOnTop=_showLyricsViewOnTop;
@property(nonatomic) _Bool trackHasLyrics; // @synthesize trackHasLyrics=_trackHasLyrics;
@property(retain, nonatomic) SPTLyricsMiniViewController *lyricsController; // @synthesize lyricsController=_lyricsController;
@property(nonatomic, getter=isAppBackgrounded) _Bool appBackgrounded; // @synthesize appBackgrounded=_appBackgrounded;
@property(nonatomic, getter=isLyricsViewHidden) _Bool lyricsViewHidden; // @synthesize lyricsViewHidden=_lyricsViewHidden;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) id <SPTAutoLockOverrideToken> autoLockOverride; // @synthesize autoLockOverride=_autoLockOverride;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTLyricsNowPlayingViewCoverArtView *coverArtView; // @synthesize coverArtView=_coverArtView;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) NSURL *trackImageURL; // @synthesize trackImageURL=_trackImageURL;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(nonatomic, getter=isLyricsFeatureEnabled) _Bool lyricsFeatureEnabled; // @synthesize lyricsFeatureEnabled=_lyricsFeatureEnabled;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTKaraokeTestManager> karaokeTestManager; // @synthesize karaokeTestManager=_karaokeTestManager;
@property(readonly, nonatomic) SPTLyricsTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTKaraokeManager> karaokeManager; // @synthesize karaokeManager=_karaokeManager;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTLyricsOnboardingManager> onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTLyricsLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderFactory> providerFactory; // @synthesize providerFactory=_providerFactory;
@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderRegistry> providerRegistry; // @synthesize providerRegistry=_providerRegistry;
@property(readonly, nonatomic) SPTLyricsService *lyricsService; // @synthesize lyricsService=_lyricsService;
- (void).cxx_destruct;
- (void)karaokeManagerDidChangeKaraoke:(id)arg1;
- (_Bool)screenLockingDisabled;
- (void)setScreenLockingDisabled:(_Bool)arg1;
- (void)updateScreenLocking;
- (void)lyricsOnboardingManager:(id)arg1 shouldDisplayLyrics:(_Bool)arg2;
- (void)logUserWillShowLyrics:(_Bool)arg1 trackURI:(id)arg2 isTap:(_Bool)arg3;
- (void)gestureRecognizerDidReceiveEvent:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWasTapped:(id)arg1;
- (id)backView;
- (id)topView;
- (void)setLyricsViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setshowLyricsViewOnTop:(_Bool)arg1;
- (void)showLyricsViewOnTop:(_Bool)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (void)bringLyricsViewToFront;
- (void)bringLyricsViewToFrontDelayed;
- (void)bounceCoverArt;
- (void)bounceCoverArtDelayed;
- (void)carouselWillDismissCellWithTrack:(id)arg1 atRelativePosition:(long long)arg2;
- (void)carouselDidShowCellWithTrack:(id)arg1 atRelativePosition:(long long)arg2;
- (void)updateTrackImageURL:(id)arg1;
- (void)updateTrack:(id)arg1;
- (void)updateWithTrack:(id)arg1 imageURL:(id)arg2;
- (_Bool)shouldReplaceCoverArt;
- (_Bool)shouldRenderContent;
- (id)provideContent;
- (void)appWillChangeOrientation:(id)arg1;
- (void)appWillEnterBackground:(id)arg1;
- (void)appWillBecomeActive:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLyricsService:(id)arg1 providerRegistry:(id)arg2 providerFactory:(id)arg3 imageLoaderFactory:(id)arg4 loggingService:(id)arg5 player:(id)arg6 onboardingManager:(id)arg7 offlineModeState:(id)arg8 karaokeManager:(id)arg9 modalPresentationController:(id)arg10 theme:(id)arg11 karaokeTestManager:(id)arg12 linkDispatcher:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

