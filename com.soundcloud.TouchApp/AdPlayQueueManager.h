//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayQueueManager-Protocol.h"

@class AdDownloader, AdSelectionLogic, AdStorage, AnalyticsAdSelectionTagger, AudioAd, NSArray, NSNotificationCenter, NSString, PlayerStateObserver, RACDisposable, Urn, _TtC10SoundCloud9ABManager;
@protocol PlayQueueManagerDelegate, _TtP3Ads21PlayQueueAdsAdTimable_, _TtP3Ads25ErrorAdPlayQueueObserving_, _TtP4Core9Reachable_, _TtP8Features18PlayQueueItemTrack_, _TtP8Playback9PlayQueue_;

@interface AdPlayQueueManager : NSObject <PlayQueueManager>
{
    id <PlayQueueManagerDelegate> delegate;
    AdDownloader *_adDownloader;
    AdSelectionLogic *_adSelectionLogic;
    AnalyticsAdSelectionTagger *_analyticsAdSelectionTagger;
    id <_TtP4Core9Reachable_> _reachability;
    AdStorage *_adStorage;
    PlayerStateObserver *_playerStateObserver;
    NSNotificationCenter *_notificationCenter;
    id <_TtP8Playback9PlayQueue_> _playQueue;
    _TtC10SoundCloud9ABManager *_abManager;
    RACDisposable *_adsDisposable;
    RACDisposable *_interstitialDisposable;
    id <_TtP8Features18PlayQueueItemTrack_> _mostRecentTrack;
    id _reachabilityDisposable;
    Urn *_monetizableTrackUrn;
    AudioAd *_audioAd;
    id <_TtP3Ads21PlayQueueAdsAdTimable_> _adTimer;
    id <_TtP3Ads25ErrorAdPlayQueueObserving_> _errorAdPlayQueueObserver;
}

@property(retain, nonatomic) id <_TtP3Ads25ErrorAdPlayQueueObserving_> errorAdPlayQueueObserver; // @synthesize errorAdPlayQueueObserver=_errorAdPlayQueueObserver;
@property(retain, nonatomic) id <_TtP3Ads21PlayQueueAdsAdTimable_> adTimer; // @synthesize adTimer=_adTimer;
@property(retain, nonatomic) AudioAd *audioAd; // @synthesize audioAd=_audioAd;
@property(retain, nonatomic) Urn *monetizableTrackUrn; // @synthesize monetizableTrackUrn=_monetizableTrackUrn;
@property(retain, nonatomic) id reachabilityDisposable; // @synthesize reachabilityDisposable=_reachabilityDisposable;
@property(retain, nonatomic) id <_TtP8Features18PlayQueueItemTrack_> mostRecentTrack; // @synthesize mostRecentTrack=_mostRecentTrack;
@property(retain, nonatomic) RACDisposable *interstitialDisposable; // @synthesize interstitialDisposable=_interstitialDisposable;
@property(retain, nonatomic) RACDisposable *adsDisposable; // @synthesize adsDisposable=_adsDisposable;
@property(readonly, nonatomic) _TtC10SoundCloud9ABManager *abManager; // @synthesize abManager=_abManager;
@property(retain, nonatomic) id <_TtP8Playback9PlayQueue_> playQueue; // @synthesize playQueue=_playQueue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) PlayerStateObserver *playerStateObserver; // @synthesize playerStateObserver=_playerStateObserver;
@property(readonly, nonatomic) AdStorage *adStorage; // @synthesize adStorage=_adStorage;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) AnalyticsAdSelectionTagger *analyticsAdSelectionTagger; // @synthesize analyticsAdSelectionTagger=_analyticsAdSelectionTagger;
@property(readonly, nonatomic) AdSelectionLogic *adSelectionLogic; // @synthesize adSelectionLogic=_adSelectionLogic;
@property(readonly, nonatomic) AdDownloader *adDownloader; // @synthesize adDownloader=_adDownloader;
@property(nonatomic) __weak id <PlayQueueManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)progressDurationWithinFetchAdThreshold:(double)arg1;
- (_Bool)shouldFetchAdsBasedOnDuration:(double)arg1 progressDuration:(double)arg2;
- (void)queueDidError:(id)arg1;
- (void)queueDidChange:(id)arg1;
- (_Bool)checkIfAd:(id)arg1;
- (id)observeReachabilityChanges;
- (void)fetchInterstitialForFirstTrack:(id)arg1;
- (void)fetchAdsForItemAfter:(id)arg1;
- (id)playableItemForItem:(id)arg1 usingGenerator:(CDUnknownBlockType)arg2;
- (void)storeSkippedToTrack:(id)arg1;
- (void)storeAdTimableTrackIfNeeded:(id)arg1;
- (_Bool)isAdTimerActive;
- (_Bool)isItemMonetizable:(id)arg1;
- (void)currentPlayQueueItemTrack:(id)arg1 willEndAfterDuration:(double)arg2 progressDuration:(double)arg3;
- (id)playablePlayQueueItemBefore:(id)arg1;
- (id)playablePlayQueueItemAfter:(id)arg1;
- (id)playQueueItemBefore:(id)arg1;
- (id)playQueueItemAfter:(id)arg1;
- (_Bool)isForegroundSkipInteraction:(unsigned long long)arg1;
- (void)willSkipToPlayQueueItem:(id)arg1 currentProgressDuration:(double)arg2 withInteraction:(unsigned long long)arg3;
- (void)loadPlayQueueItem:(id)arg1 withInteraction:(unsigned long long)arg2;
- (void)unloadPlayQueue;
- (void)loadPlayQueueWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *items;
- (id)initWithAudioAdDownloader:(id)arg1 adSelectionLogic:(id)arg2 analyticsAdSelectionTagger:(id)arg3 reachability:(id)arg4 adStorage:(id)arg5 playerStateObserver:(id)arg6 notificationCenter:(id)arg7 playQueue:(id)arg8 abManager:(id)arg9 adTimer:(id)arg10 errorAdPlayQueueObserver:(id)arg11;
- (id)initWithPlayQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

