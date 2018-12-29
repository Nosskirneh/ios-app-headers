//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class NSDictionary, NSLayoutConstraint, NSTimer, UIImageView, UIPanGestureRecognizer, UIScrollView, UIView, WMPMiniPlayerModule, _TtC4WiMP11PlayerScene, _TtC4WiMP14PlayQueueScene, _TtC4WiMP17SpinningImageView, _TtC4WiMP19SuggestedItemsScene, _TtC4WiMP22NowPlayingHeaderModule;

@interface _TtC4WiMP15NowPlayingScene : WMPAbstractScene
{
    // Error parsing type: , name: kBasicSubscriptionMaxSkipsPerHour
    // Error parsing type: , name: nowPlayingState
    // Error parsing type: , name: nowPlayingCurrentPage
    // Error parsing type: , name: playerOffset
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: blurryImageView
    // Error parsing type: , name: miniPlayerContainer
    // Error parsing type: , name: suggestedMediaContainer
    // Error parsing type: , name: playerContainer
    // Error parsing type: , name: queueContainer
    // Error parsing type: , name: gradientContainer
    // Error parsing type: , name: backgroundImageTopView
    // Error parsing type: , name: panGestureRecognizer
    // Error parsing type: , name: playerViewTopConstraint
    // Error parsing type: , name: miniPlayerHeightConstraint
    // Error parsing type: , name: minimizedVideoConstraint
    // Error parsing type: , name: headerModule
    // Error parsing type: , name: miniPlayerModule
    // Error parsing type: , name: suggestedItemsScene
    // Error parsing type: , name: playerScene
    // Error parsing type: , name: queueController
    // Error parsing type: , name: currentMediaItemInfo
    // Error parsing type: , name: timerToHideControls
    // Error parsing type: , name: trackDefaultImageTimer
    // Error parsing type: , name: placeHolderImageView
}

+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)hideNowPlayingContentIfNeededWithIsPlayerMinimized:(_Bool)arg1;
- (void)playbackChangedWithIsPlaying:(_Bool)arg1;
- (void)updateCurrentPlayingWith:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic, readonly) UIImageView *placeHolderImageView; // @synthesize placeHolderImageView;
@property(nonatomic, retain) NSTimer *trackDefaultImageTimer; // @synthesize trackDefaultImageTimer;
@property(nonatomic, retain) NSTimer *timerToHideControls; // @synthesize timerToHideControls;
@property(nonatomic, retain) NSDictionary *currentMediaItemInfo; // @synthesize currentMediaItemInfo;
@property(nonatomic, retain) _TtC4WiMP14PlayQueueScene *queueController; // @synthesize queueController;
@property(nonatomic, retain) _TtC4WiMP11PlayerScene *playerScene; // @synthesize playerScene;
@property(nonatomic, retain) _TtC4WiMP19SuggestedItemsScene *suggestedItemsScene; // @synthesize suggestedItemsScene;
@property(nonatomic, retain) WMPMiniPlayerModule *miniPlayerModule; // @synthesize miniPlayerModule;
@property(nonatomic, retain) _TtC4WiMP22NowPlayingHeaderModule *headerModule; // @synthesize headerModule;
@property(nonatomic, retain) NSLayoutConstraint *minimizedVideoConstraint; // @synthesize minimizedVideoConstraint;
@property(nonatomic) __weak NSLayoutConstraint *miniPlayerHeightConstraint; // @synthesize miniPlayerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *playerViewTopConstraint; // @synthesize playerViewTopConstraint;
@property(nonatomic) __weak UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer;
@property(nonatomic) __weak UIView *backgroundImageTopView; // @synthesize backgroundImageTopView;
@property(nonatomic) __weak UIView *gradientContainer; // @synthesize gradientContainer;
@property(nonatomic) __weak UIView *queueContainer; // @synthesize queueContainer;
@property(nonatomic) __weak UIView *playerContainer; // @synthesize playerContainer;
@property(nonatomic) __weak UIView *suggestedMediaContainer; // @synthesize suggestedMediaContainer;
@property(nonatomic) __weak UIView *miniPlayerContainer; // @synthesize miniPlayerContainer;
@property(nonatomic) __weak _TtC4WiMP17SpinningImageView *blurryImageView; // @synthesize blurryImageView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) double playerOffset; // @synthesize playerOffset;
@property(nonatomic) long long nowPlayingState; // @synthesize nowPlayingState;
@property(nonatomic, readonly) long long kBasicSubscriptionMaxSkipsPerHour; // @synthesize kBasicSubscriptionMaxSkipsPerHour;
- (void)setTabbarLayout:(double)arg1;
- (void)setPlayerLayout:(double)arg1;
- (void)adjustVideoLayerWhileMovingPlayerWithOffset:(double)arg1;
- (void)animatePlayerAndTabbarToOffset:(double)arg1 with:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToOffset:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)adjustViewsPositionToScrollOffset;
- (void)openPlayerWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openPlayerOnQueueView;
- (void)openPlayer;
- (void)showPlayer;
- (void)hidePlayer;
- (void)closePlayerWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closePlayer;
- (void)animateWithVelocity:(double)arg1 offset:(double)arg2;
- (void)swipeMiniPlayerAndHeaderWithOffset:(double)arg1;
- (void)moveEntirePlayer:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tapPlayer:(id)arg1;
- (void)movePlayer:(id)arg1;

@end

