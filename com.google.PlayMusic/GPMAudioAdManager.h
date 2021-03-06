//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMAAdsLoaderDelegate-Protocol.h"
#import "IMAAdsManagerDelegate-Protocol.h"
#import "IMACompanionDelegate-Protocol.h"

@class GPMAdController, GPMAudioSessionManager, GPMEventLogger, GPMIMAAdsLoaderWrapper, GPMIMAAdsManagerWrapper, IMAAdDisplayContainer, IMAAdsRenderingSettings, IMAAdsRequest, IMACompanionAdSlot, IMASettings, NSDate, NSNumber, NSString, NSTimer, NetworkMonitor, UIView;
@protocol GPMAudioAdDelegate;

@interface GPMAudioAdManager : NSObject <IMAAdsLoaderDelegate, IMAAdsManagerDelegate, IMACompanionDelegate>
{
    IMAAdDisplayContainer *_adDisplayContainer;
    IMAAdsRequest *_adsRequest;
    GPMIMAAdsLoaderWrapper *_adsLoaderWrapper;
    GPMIMAAdsManagerWrapper *_adsManagerWrapper;
    IMAAdsRenderingSettings *_adsRenderingSettings;
    IMASettings *_adSettings;
    NSTimer *_adBufferedTimer;
    NSDate *_timerInitialFireDate;
    NSNumber *_adRequestStartTime;
    long long _adRequestLatency;
    _Bool _playbackErrorOnLastPlay;
    _Bool _shouldInitalizeAdsLoader;
    IMACompanionAdSlot *_companionAdSlot;
    UIView *_companionAdView;
    UIView *_defaultCompanionAdView;
    UIView *_dummyAudioAdView;
    _Bool _companionAdSlotFilled;
    GPMAdController *_adController;
    NetworkMonitor *_networkMonitor;
    GPMEventLogger *_eventLogger;
    GPMAudioSessionManager *_audioSessionManager;
    unsigned long long _audioAdState;
    id <GPMAudioAdDelegate> _delegate;
    UIView *_audioAdContainerView;
    double _currentTime;
    double _totalTime;
}

+ (id)makeCompanionAdSlotWithAdView:(id)arg1;
+ (id)makeDefaultCompanionAdView;
+ (id)makeAudioAdContainerViewWithCompanionAdView:(id)arg1 defaultCompanionAdView:(id)arg2;
@property(readonly, nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) UIView *audioAdContainerView; // @synthesize audioAdContainerView=_audioAdContainerView;
@property(nonatomic) __weak id <GPMAudioAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long audioAdState; // @synthesize audioAdState=_audioAdState;
- (void).cxx_destruct;
- (void)initializeAdsLoader;
- (void)stopAudioAd;
- (void)handleRadioStationChanged:(id)arg1;
- (void)handleVideoAdStart:(id)arg1;
- (void)handleTrackChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)notifyAdResume;
- (void)notifyAdPause;
- (void)notifyAdStop;
- (void)notifyAdStart;
- (void)clearAudioAdCache;
- (void)unloadAdsManager;
- (void)logAdPlayed;
- (void)logAdLoaded;
- (void)logAdLoadTimeout;
- (void)logFailedAdPlaybackWithError:(id)arg1;
- (void)logFailedAdLoadWithError:(id)arg1;
- (void)destroyTimer;
- (void)checkIfAdIsBuffered;
- (_Bool)setAudioAdState:(unsigned long long)arg1;
- (void)companionSlot:(id)arg1 filled:(_Bool)arg2;
- (void)adsManager:(id)arg1 adDidProgressToTime:(double)arg2 totalTime:(double)arg3;
- (void)adsManagerAdDidStartBuffering:(id)arg1;
- (void)adsManagerDidRequestContentResume:(id)arg1;
- (void)adsManager:(id)arg1 didReceiveAdError:(id)arg2;
- (void)adsManagerDidRequestContentPause:(id)arg1;
- (void)updateNowPlayingInfoWithDuration:(double)arg1 isPlaying:(_Bool)arg2;
- (void)adsManager:(id)arg1 didReceiveAdEvent:(id)arg2;
- (void)adsLoader:(id)arg1 adsLoadedWithData:(id)arg2;
- (void)adsLoader:(id)arg1 failedWithErrorData:(id)arg2;
- (id)createDummyAudioAdView;
- (id)createAudioAdContainerView;
- (_Bool)shouldPlayAudioAd;
- (_Bool)shouldLoadAudioAd;
- (_Bool)isAudioAdStarted;
- (void)pauseAd;
- (void)resumeAd;
- (void)startAd;
- (void)loadAd;
- (void)setupObservers;
- (void)dealloc;
- (id)initWithAdController:(id)arg1 networkMonitor:(id)arg2 eventLogger:(id)arg3 audioSessionManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

