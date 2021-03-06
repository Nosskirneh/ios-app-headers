//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVPlayerItemOutputPullDelegate-Protocol.h"
#import "SASNativeVideoInterfaceDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, CIContext, NSMutableArray, NSString, SASNoCycleTimer, SASViewabilityManager, UIColor, UIImageView, UIView, UIViewController;
@protocol OS_dispatch_queue, SASNativeVideoContainerView, SASNativeVideoToIntegrationInterfaceBridge, SASNativeVideoViewControllerDelegate, SASVideoAdObject;

@interface SASNativeVideoViewController : NSObject <AVPlayerItemOutputPullDelegate, SASNativeVideoInterfaceDelegate>
{
    int _skippedFrameCount;
    double _sizeDivider;
    _Bool _automaticDisplay;
    _Bool _isVideoLoaded;
    _Bool _isVideoStarted;
    _Bool _isMuted;
    _Bool _isVisible;
    _Bool _isVideoWaitingToStart;
    _Bool _didVideoCompleteOnce;
    _Bool _isResumed;
    _Bool _isStatusKVORegistered;
    _Bool _isRateKVORegistered;
    _Bool _isPlayerLikelyToKeepUpKVORegistered;
    _Bool _isPosterViewVisible;
    _Bool _playerWillQuit;
    _Bool _playerHasBeenSuspended;
    _Bool _shouldRestartWhenEnteringFullscreen;
    float _blurRadius;
    UIView *_targetDisplayView;
    id <SASNativeVideoViewControllerDelegate> _delegate;
    id <SASNativeVideoToIntegrationInterfaceBridge> _integrationInterfaceBridge;
    SASViewabilityManager *_viewabilityManager;
    UIViewController *_presentationController;
    AVPlayer *_player;
    UIView<SASNativeVideoContainerView> *_videoContainerView;
    id <SASVideoAdObject> _adObject;
    AVPlayerItem *_playerItem;
    SASNoCycleTimer *_progressTimer;
    NSMutableArray *_trackEventTable;
    NSObject<OS_dispatch_queue> *_videoOutputQueue;
    UIImageView *_outputBufferView;
    long long _outputCounter;
    CADisplayLink *_displayLink;
    AVPlayerItemVideoOutput *_videoOutput;
    CIContext *_coreImageContext;
    UIColor *_blurTintColor;
    struct CGSize _originalVideoSize;
    CDStruct_1b6d18a9 _suspensionTime;
}

@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
@property(nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
@property(retain, nonatomic) CIContext *coreImageContext; // @synthesize coreImageContext=_coreImageContext;
@property(nonatomic) struct CGSize originalVideoSize; // @synthesize originalVideoSize=_originalVideoSize;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long outputCounter; // @synthesize outputCounter=_outputCounter;
@property(nonatomic) __weak UIImageView *outputBufferView; // @synthesize outputBufferView=_outputBufferView;
@property(retain) NSObject<OS_dispatch_queue> *videoOutputQueue; // @synthesize videoOutputQueue=_videoOutputQueue;
@property(nonatomic) CDStruct_1b6d18a9 suspensionTime; // @synthesize suspensionTime=_suspensionTime;
@property(nonatomic) _Bool shouldRestartWhenEnteringFullscreen; // @synthesize shouldRestartWhenEnteringFullscreen=_shouldRestartWhenEnteringFullscreen;
@property(nonatomic) _Bool playerHasBeenSuspended; // @synthesize playerHasBeenSuspended=_playerHasBeenSuspended;
@property(nonatomic) _Bool playerWillQuit; // @synthesize playerWillQuit=_playerWillQuit;
@property(nonatomic) _Bool isPosterViewVisible; // @synthesize isPosterViewVisible=_isPosterViewVisible;
@property(nonatomic) _Bool isPlayerLikelyToKeepUpKVORegistered; // @synthesize isPlayerLikelyToKeepUpKVORegistered=_isPlayerLikelyToKeepUpKVORegistered;
@property(nonatomic) _Bool isRateKVORegistered; // @synthesize isRateKVORegistered=_isRateKVORegistered;
@property(nonatomic) _Bool isStatusKVORegistered; // @synthesize isStatusKVORegistered=_isStatusKVORegistered;
@property(nonatomic) _Bool isResumed; // @synthesize isResumed=_isResumed;
@property(nonatomic) _Bool didVideoCompleteOnce; // @synthesize didVideoCompleteOnce=_didVideoCompleteOnce;
@property(nonatomic) _Bool isVideoWaitingToStart; // @synthesize isVideoWaitingToStart=_isVideoWaitingToStart;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isVideoStarted; // @synthesize isVideoStarted=_isVideoStarted;
@property(nonatomic) _Bool isVideoLoaded; // @synthesize isVideoLoaded=_isVideoLoaded;
@property(retain, nonatomic) NSMutableArray *trackEventTable; // @synthesize trackEventTable=_trackEventTable;
@property(retain, nonatomic) SASNoCycleTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) id <SASVideoAdObject> adObject; // @synthesize adObject=_adObject;
@property(retain, nonatomic) UIView<SASNativeVideoContainerView> *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool automaticDisplay; // @synthesize automaticDisplay=_automaticDisplay;
@property(nonatomic) __weak UIViewController *presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) __weak SASViewabilityManager *viewabilityManager; // @synthesize viewabilityManager=_viewabilityManager;
@property(nonatomic) __weak id <SASNativeVideoToIntegrationInterfaceBridge> integrationInterfaceBridge; // @synthesize integrationInterfaceBridge=_integrationInterfaceBridge;
@property(nonatomic) __weak id <SASNativeVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *targetDisplayView; // @synthesize targetDisplayView=_targetDisplayView;
- (void).cxx_destruct;
- (void)postClickAskedForClickPixelCalling;
- (_Bool)askBannerViewCanStickToTop;
- (void)dispatchStickyView:(id)arg1 didStick:(_Bool)arg2 withFrame:(struct CGRect)arg3;
- (_Bool)askCanHandleAudioSessionToDelegate;
- (void)dispatchVideoDidCloseToDelegate;
- (void)dispatchVideoWillCloseToDelegate;
- (void)dispatchVideoDidExpandToDelegate;
- (void)dispatchVideoWillExpandToDelegate;
- (void)dispatchAudioWillStartToDelegate;
- (void)dispatchAudioDidFinishToDelegate;
- (void)dispatchVideoLoaded;
- (_Bool)nativeVideoUIElementNeedsToIgnoreVerticalLayout:(id)arg1;
- (void)nativeVideoUIElement:(id)arg1 didChangeCurrentPlaybackTime:(double)arg2;
- (void)nativeVideoUIElementAskForPauseAction:(id)arg1;
- (void)nativeVideoUIElementAskForPlayAction:(id)arg1;
- (void)nativeVideoUIElement:(id)arg1 didRequestVideoStop:(_Bool)arg2;
- (void)nativeVideoUIElement:(id)arg1 didRequestMute:(_Bool)arg2;
- (void)nativeVideoUIElementAskForSwipeToCloseAction:(id)arg1;
- (void)nativeVideoUIElementBackgroundLoaded:(id)arg1;
- (void)nativeVideoUIElementBackgroundWasTapped:(id)arg1;
- (void)nativeVideoUIElementPlaybackViewWasTapped:(id)arg1;
- (void)nativeVideoUIElementAskForClickAction:(id)arg1;
- (void)nativeVideoUIElementAskForCloseAction:(id)arg1;
- (void)nativeVideoUIElementPlayButtonTapped:(id)arg1;
- (void)nativeVideoUIElementAskForInfoAction:(id)arg1;
- (void)nativeVideoUIElementAskToRewind:(id)arg1;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 withOriginalSize:(struct CGSize)arg2;
- (void)forwardOutputImageToView:(id)arg1;
- (_Bool)shoudProcessPixelBuffer;
- (void)displayLinkCallback:(id)arg1;
- (void)startDisplayLink;
- (void)pauseDisplayLink;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)removeOutputBuffer;
- (void)createOutputBuffer;
- (void)removeDisplayLink;
- (void)createDisplayLink;
- (_Bool)canHandleAudioSession;
- (id)adView;
- (void)requestPause;
- (void)requestPlay;
- (CDStruct_1b6d18a9)multiplyTimeByRatio:(CDStruct_1b6d18a9)arg1 multiplier:(int)arg2 divider:(int)arg3;
- (void)initializeTrackEventTable;
- (void)trackEventReached:(id)arg1;
- (void)dispatchTrackEvents;
- (double)playableDuration;
- (void)progressTimerFired;
- (void)playerItemPlaybackLikelyToKeepUpDidChange:(_Bool)arg1;
- (void)playerIsReadyToPlaySetup;
- (void)preparePlayingUIAfterItemReady;
- (void)playerItemStatusDidChange:(long long)arg1;
- (void)setPlaying:(_Bool)arg1;
- (_Bool)isPlayerInPlayMode;
- (void)endAudioSessionAndNotifyOthers;
- (void)performEndAudioSessionAndNotifyOthers;
- (void)playerRateDidChange:(float)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemNewErrorLogEntryNotification:(id)arg1;
- (void)playerItemNewAccessLogEntryNotification:(id)arg1;
- (void)playerItemPlaybackStalledNotification:(id)arg1;
- (void)playerItemTimeJumpedNotification:(id)arg1;
- (void)playerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)playerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)processVideoReward;
- (void)mute:(_Bool)arg1 forceAudioOn:(_Bool)arg2 withEvent:(_Bool)arg3;
- (void)mute:(_Bool)arg1 withEvent:(_Bool)arg2;
- (void)eventControllerWillPlay;
- (void)startPlayer;
- (void)loadPosterImage:(id)arg1;
- (void)initializeContainerView;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (void)doPostLoadingSetupForAsset:(id)arg1;
- (void)loadAssetAndPlay;
- (void)unregisterPlayerLikelyToKeepUpKVO;
- (void)unregisterRateKVO;
- (void)unregisterStatusKVO;
- (void)registerPlayerLikelyToKeepUpKVO;
- (void)registerRateKVO;
- (void)registerStatusKVO;
- (void)unregisterPlayerEvents;
- (void)registerPlayerEvents;
- (void)unregisterPlayerItemEvents;
- (void)registerPlayerItemEvents;
- (void)initializeVideoOutputIfNeeded;
- (void)initializePlayerItem:(id)arg1;
- (void)initializePlayer;
- (void)loadVideoAdObject:(id)arg1;
- (void)playerEnteredForeground;
- (void)playerEnteredBackground;
- (void)targetDisplayViewFrameChanged;
- (_Bool)adNeedsTransparentPlaybackBackground;
- (_Bool)adIsInterstitial;
- (id)initWithTargetDisplayView:(id)arg1 delegate:(id)arg2 presentationController:(id)arg3 integrationInterfaceBridge:(id)arg4;
- (void)resetPlayback;
- (void)reset;
- (void)videoLoadingFailed;
- (void)clearVideoContainerView;
- (void)dealloc;
- (id)currentVideoInterfaceView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

