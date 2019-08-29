//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBVideoAdContentView.h"

#import "FBAdChoicesViewDelegate-Protocol.h"
#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBInstreamAdVideoViewDelegate-Protocol.h"

@class FBAdChoicesView, FBAdCommandProcessor, FBInstreamAdVideoView, FBInstreamCallToActionView, FBInstreamSkipButtonView, FBVideoAdLabel, NSString, UIViewController;

@interface FBInstreamAdContentView : FBVideoAdContentView <FBInstreamAdVideoViewDelegate, FBAdChoicesViewDelegate, FBAdCommandProcessorDelegate>
{
    _Bool _imagesLoaded;
    _Bool _paused;
    _Bool _rootViewControllerPresenting;
    _Bool _videoLoaded;
    FBAdChoicesView *_adChoicesView;
    FBInstreamCallToActionView *_callToActionView;
    FBAdCommandProcessor *_commandProcessor;
    FBVideoAdLabel *_countdownView;
    unsigned long long _lastRemainingTimeSeconds;
    UIViewController *_rootViewController;
    FBInstreamSkipButtonView *_skipButtonView;
    FBInstreamAdVideoView *_videoView;
    CDStruct_1b6d18a9 _skippableTime;
}

@property(retain, nonatomic) FBInstreamAdVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool videoLoaded; // @synthesize videoLoaded=_videoLoaded;
@property(retain, nonatomic) FBInstreamSkipButtonView *skipButtonView; // @synthesize skipButtonView=_skipButtonView;
@property(nonatomic) CDStruct_1b6d18a9 skippableTime; // @synthesize skippableTime=_skippableTime;
@property(nonatomic) _Bool rootViewControllerPresenting; // @synthesize rootViewControllerPresenting=_rootViewControllerPresenting;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned long long lastRemainingTimeSeconds; // @synthesize lastRemainingTimeSeconds=_lastRemainingTimeSeconds;
@property(nonatomic) _Bool imagesLoaded; // @synthesize imagesLoaded=_imagesLoaded;
@property(retain, nonatomic) FBVideoAdLabel *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) FBInstreamCallToActionView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(retain, nonatomic) FBAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
- (void).cxx_destruct;
- (void)videoView:(id)arg1 didFailWithError:(id)arg2;
- (void)videoViewDidEnd:(id)arg1;
- (void)videoViewDidProgress:(id)arg1;
- (void)videoViewTapped:(id)arg1;
- (void)videoViewDidLoad:(id)arg1;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adChoicesView:(id)arg1 viewControllerDismissed:(id)arg2;
- (void)adChoicesView:(id)arg1 willPresentViewController:(id)arg2;
- (void)updateSkipButtonRemainingTime;
- (void)updateCountdownText;
- (unsigned long long)skipRemainingSeconds;
- (void)skipButtonViewTapped:(id)arg1;
- (void)removeObservers;
- (void)cleanLayout;
- (void)processCommand:(id)arg1;
- (void)callToActionViewTapped:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)addSkipButton;
- (void)addObservers;
- (void)addCallToActionView;
- (void)addCountdownView;
- (void)addAdChoicesView;
- (CDStruct_1b6d18a9)skipRemainingTime;
- (_Bool)skippable;
- (void)layoutSubviews;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)playAndTellDelegate;
- (void)pauseAndTellDelegate;
- (void)play;
- (void)pause;
- (void)startFromRootViewController:(id)arg1;
- (void)registerLoaded;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (_Bool)isAutoplay;
- (float)volume;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

