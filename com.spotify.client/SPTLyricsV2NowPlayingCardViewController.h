//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLyricsV2LyricsViewControllerDelegate-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSString, NSURL, SPTLyricsLineSet, SPTLyricsV2Configuration, SPTLyricsV2FullscreenViewController, SPTLyricsV2GLUETheme, SPTLyricsV2LyricsViewController, SPTLyricsV2NowPlayingCardView, SPTPlayerTrack, SPTVocalRemovalConfiguration, UITapGestureRecognizer;
@protocol SPTNowPlayingService;

@interface SPTLyricsV2NowPlayingCardViewController : UIViewController <SPTLyricsV2LyricsViewControllerDelegate, SPTNetworkConnectivityControllerObserver>
{
    NSString *_cardTitle;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTLyricsV2GLUETheme *_theme;
    SPTLyricsV2LyricsViewController *_lyricsViewController;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
    NSURL *_imageURL;
    SPTLyricsLineSet *_lyricsLineSet;
    SPTLyricsV2FullscreenViewController *_fullscreenViewController;
    SPTPlayerTrack *_track;
    UITapGestureRecognizer *_tapRecognizer;
    id <SPTNowPlayingService> _nowPlayingService;
}

@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SPTLyricsV2FullscreenViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property(retain, nonatomic) SPTLyricsLineSet *lyricsLineSet; // @synthesize lyricsLineSet=_lyricsLineSet;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTLyricsV2LyricsViewController *lyricsViewController; // @synthesize lyricsViewController=_lyricsViewController;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)lyricsViewControllerDidTapSyncTheseLyricsLink:(id)arg1;
- (void)lyricsViewController:(id)arg1 didShowNumberOfCharacters:(long long)arg2;
- (void)updateStyle;
- (void)handleOnlineStateIfPossible;
- (_Bool)isOffline;
- (void)switchToErrorView;
- (void)switchToLoadingView;
- (void)switchToLyricsView;
- (void)handleSuccessForTrackWithLyricsModel:(id)arg1;
- (void)handleErrorState;
- (void)fetchLyricsModelForTrack;
- (void)prepareForNewTrack;
- (void)closeFullscreenIfNecessary:(CDUnknownBlockType)arg1;
- (void)buildFullscreenLyricsViewController;
- (void)animateFullscreenAppearance;
- (void)closeFullscreenIfNecessary;
- (void)updateWithTrack:(id)arg1 imageURL:(id)arg2;
- (void)didTapCardView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 cardTitle:(id)arg2 lyricsConfiguration:(id)arg3 vocalRemovalConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLyricsV2NowPlayingCardView *view; // @dynamic view;

@end

