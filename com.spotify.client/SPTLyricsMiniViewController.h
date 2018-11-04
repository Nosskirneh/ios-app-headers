//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTKaraokeManagerObserver.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, GLUEGradientView, NSMutableSet, NSString, NSTimer, SPTImageBlurView, SPTLyricsFullScreenViewController, SPTLyricsLineSet, SPTLyricsLoggingService, SPTLyricsNowPlayingViewMissingSyncView, SPTLyricsNowPlayingViewOfflineView, SPTLyricsService, SPTLyricsTableFooterView, SPTLyricsTheme, SPTPlayerTrack, SPTProgressView, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface SPTLyricsMiniViewController : UIViewController <SPTImageLoaderDelegate, SPTKaraokeManagerObserver, SPTOfflineModeStateObserver, SPTPlayerObserver, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _active;
    _Bool _visible;
    _Bool _showHint;
    _Bool _showLoadingIndicatorIfVisible;
    _Bool _introActive;
    _Bool _pageImpressionLogged;
    SPTPlayerTrack *_track;
    SPTLyricsService *_lyricsService;
    id <SPTPlayer> _player;
    SPTLyricsLoggingService *_loggingService;
    id <SPTImageLoader> _imageLoader;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTKaraokeManager> _karaokeManager;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTLyricsTheme *_theme;
    id <SPTKaraokeTestManager> _karaokeTestManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    UITableView *_tableView;
    SPTLyricsLineSet *_lyricsLineSet;
    NSString *_lastPlaybackID;
    NSTimer *_timer;
    SPTImageBlurView *_backgroundView;
    GLUEGradientView *_backgroundGradientView;
    UIView *_fadeView;
    CAGradientLayer *_fadeMaskLayer;
    UIButton *_fullLyricsButton;
    UIButton *_karaokeButton;
    UIView *_hintView;
    UILabel *_hintLabel;
    UIImageView *_hintArrowImageView;
    NSMutableSet *_lineIndexesLogged;
    SPTLyricsTableFooterView *_footerView;
    SPTLyricsNowPlayingViewMissingSyncView *_missingSyncView;
    SPTLyricsNowPlayingViewOfflineView *_offlineView;
    SPTProgressView *_loadingIndicator;
    long long _selectedLineIndex;
    SPTLyricsFullScreenViewController *_fullScreenController;
}

@property(nonatomic) __weak SPTLyricsFullScreenViewController *fullScreenController; // @synthesize fullScreenController=_fullScreenController;
@property(nonatomic) long long selectedLineIndex; // @synthesize selectedLineIndex=_selectedLineIndex;
@property(retain, nonatomic) SPTProgressView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) SPTLyricsNowPlayingViewOfflineView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTLyricsNowPlayingViewMissingSyncView *missingSyncView; // @synthesize missingSyncView=_missingSyncView;
@property(retain, nonatomic) SPTLyricsTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableSet *lineIndexesLogged; // @synthesize lineIndexesLogged=_lineIndexesLogged;
@property(nonatomic) _Bool pageImpressionLogged; // @synthesize pageImpressionLogged=_pageImpressionLogged;
@property(retain, nonatomic) UIImageView *hintArrowImageView; // @synthesize hintArrowImageView=_hintArrowImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UIButton *karaokeButton; // @synthesize karaokeButton=_karaokeButton;
@property(retain, nonatomic) UIButton *fullLyricsButton; // @synthesize fullLyricsButton=_fullLyricsButton;
@property(retain, nonatomic) CAGradientLayer *fadeMaskLayer; // @synthesize fadeMaskLayer=_fadeMaskLayer;
@property(retain, nonatomic) UIView *fadeView; // @synthesize fadeView=_fadeView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) SPTImageBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *lastPlaybackID; // @synthesize lastPlaybackID=_lastPlaybackID;
@property(retain, nonatomic) SPTLyricsLineSet *lyricsLineSet; // @synthesize lyricsLineSet=_lyricsLineSet;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTKaraokeTestManager> karaokeTestManager; // @synthesize karaokeTestManager=_karaokeTestManager;
@property(readonly, nonatomic) SPTLyricsTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTKaraokeManager> karaokeManager; // @synthesize karaokeManager=_karaokeManager;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTLyricsLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTLyricsService *lyricsService; // @synthesize lyricsService=_lyricsService;
@property(readonly, nonatomic, getter=isIntroActive) _Bool introActive; // @synthesize introActive=_introActive;
@property(nonatomic) _Bool showLoadingIndicatorIfVisible; // @synthesize showLoadingIndicatorIfVisible=_showLoadingIndicatorIfVisible;
@property(nonatomic) _Bool showHint; // @synthesize showHint=_showHint;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)karaokeButtonDidTouchUpInside:(id)arg1;
- (void)karaokeManagerDidChangeSupported:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)displayOfflineView:(_Bool)arg1;
- (void)displayMissingSyncView:(_Bool)arg1;
- (void)showAllContentViews:(_Bool)arg1;
- (void)updateContentView;
- (void)updateBackgroundViewForImageURL:(id)arg1;
- (void)updateState;
- (void)updateWithPlayerState:(id)arg1;
- (void)scheduleNextLineWithPlayerState:(id)arg1;
- (void)showNextCardWithDelay:(double)arg1;
- (void)logCurrentLineImpression;
- (void)scrollAndUpdateSelectedLine;
- (void)seeFullLyrics:(id)arg1;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) _Bool isShowingFullScreenController;
- (void)setLyrics:(id)arg1 forTrack:(id)arg2;
- (id)textLabelColorForSelected:(_Bool)arg1;
- (struct CATransform3D)textLabelTransformForSelected:(_Bool)arg1;
- (id)arrowImageView;
- (void)createHintView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 lyricsService:(id)arg2 player:(id)arg3 loggingService:(id)arg4 imageLoader:(id)arg5 offlineModeState:(id)arg6 karaokeManager:(id)arg7 modalPresentationController:(id)arg8 theme:(id)arg9 karaokeTestManager:(id)arg10 linkDispatcher:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

