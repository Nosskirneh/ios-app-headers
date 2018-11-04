//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSNotificationCenter, NSString, NSTimer, NSURL, SPTAutoLockController, SPTGeniusCardManager, SPTGeniusCardsViewController, SPTGeniusLoggingService, SPTGeniusNowPlayingViewCoverArtView, SPTGeniusService, SPTPlayerTrack, SPTTheme, UIGestureRecognizer;

@interface SPTGeniusNowPlayingViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _geniusEnabled;
    _Bool _active;
    _Bool _coverArtEnabled;
    _Bool _contextEnabled;
    _Bool _contextChecked;
    _Bool _showCardsViewOnTop;
    _Bool _screenLockingPending;
    _Bool _hasInteracted;
    _Bool _userWantsGenius;
    id <SPTGeniusNowPlayingViewControllerDelegate> _delegate;
    SPTGeniusService *_geniusService;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTGeniusLoggingService *_loggingService;
    id <SPTPlayer> _player;
    SPTTheme *_theme;
    SPTGeniusCardManager *_cardManager;
    SPTAutoLockController *_autoLockController;
    NSNotificationCenter *_notificationCenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPlayerTrack *_track;
    NSURL *_trackImageURL;
    long long _contextType;
    UIGestureRecognizer *_gestureRecognizer;
    SPTGeniusNowPlayingViewCoverArtView *_coverArtView;
    SPTGeniusCardsViewController *_cardsViewController;
    id <SPTAutoLockOverrideToken> _autoLockOverride;
    NSTimer *_animationTimer;
}

@property(nonatomic) _Bool userWantsGenius; // @synthesize userWantsGenius=_userWantsGenius;
@property(nonatomic) _Bool hasInteracted; // @synthesize hasInteracted=_hasInteracted;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) _Bool screenLockingPending; // @synthesize screenLockingPending=_screenLockingPending;
@property(retain, nonatomic) id <SPTAutoLockOverrideToken> autoLockOverride; // @synthesize autoLockOverride=_autoLockOverride;
@property(retain, nonatomic) SPTGeniusCardsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
@property(retain, nonatomic) SPTGeniusNowPlayingViewCoverArtView *coverArtView; // @synthesize coverArtView=_coverArtView;
@property(nonatomic) _Bool showCardsViewOnTop; // @synthesize showCardsViewOnTop=_showCardsViewOnTop;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(nonatomic) _Bool contextChecked; // @synthesize contextChecked=_contextChecked;
@property(nonatomic) _Bool contextEnabled; // @synthesize contextEnabled=_contextEnabled;
@property(retain, nonatomic) NSURL *trackImageURL; // @synthesize trackImageURL=_trackImageURL;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTAutoLockController *autoLockController; // @synthesize autoLockController=_autoLockController;
@property(readonly, nonatomic) SPTGeniusCardManager *cardManager; // @synthesize cardManager=_cardManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTGeniusLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
@property(nonatomic) __weak id <SPTGeniusNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCoverArtEnabled) _Bool coverArtEnabled; // @synthesize coverArtEnabled=_coverArtEnabled;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isGeniusEnabled) _Bool geniusEnabled; // @synthesize geniusEnabled=_geniusEnabled;
- (void).cxx_destruct;
- (void)logSwipeForContextEnabled:(_Bool)arg1 showGenius:(_Bool)arg2 trackURI:(id)arg3;
- (void)didEndDragging;
- (void)didBeginDragging;
- (void)gestureRecognizerDidReceiveEvent:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) _Bool screenLockingDisabled;
- (void)userWillLogout;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)backView;
- (id)topView;
- (void)showCardsViewOnTop:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateScreenLocking;
- (void)annotationsDidLoad:(id)arg1 track:(id)arg2;
- (void)updateTrackImageURL:(id)arg1;
- (void)updateTrack:(id)arg1;
- (void)resetWithTrack:(id)arg1 imageURL:(id)arg2;
- (void)bringCoverArtViewToFront;
- (void)bringCardsViewToFront;
- (void)bringCardsViewToFrontDelayed;
- (void)bounceCoverArt;
- (void)bounceCoverArtDelayed;
- (void)handleGeniusEnabledActiveCard;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGeniusService:(id)arg1 imageLoaderFactory:(id)arg2 loggingService:(id)arg3 player:(id)arg4 theme:(id)arg5 cardManager:(id)arg6 autoLockController:(id)arg7 notificationCenter:(id)arg8 linkDispatcher:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

