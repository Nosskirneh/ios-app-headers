//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerLauncher.h"

#import "PlayerUltraLaunching-Protocol.h"

@class AppNavigation, AudioAdSkipPreventedAlert, NSString, PlayQueueManagerFactory, Urn;
@protocol GoogleCastStateObserving, _TtP8Features23AppPerformanceProfiling_, _TtP8Playback15PlayQueueSource_;

@interface PlayerUltraLauncher : PlayerLauncher <PlayerUltraLaunching>
{
    AppNavigation *_appNavigation;
    id <_TtP8Playback15PlayQueueSource_> _playQueueSource;
    Urn *_origin;
    AudioAdSkipPreventedAlert *_skipPreventedAlert;
    PlayQueueManagerFactory *_queueManagerFactory;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
    id <GoogleCastStateObserving> _googleCastStateObserver;
}

@property(readonly, nonatomic) id <GoogleCastStateObserving> googleCastStateObserver; // @synthesize googleCastStateObserver=_googleCastStateObserver;
@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(readonly, nonatomic) PlayQueueManagerFactory *queueManagerFactory; // @synthesize queueManagerFactory=_queueManagerFactory;
@property(readonly, nonatomic) AudioAdSkipPreventedAlert *skipPreventedAlert; // @synthesize skipPreventedAlert=_skipPreventedAlert;
@property(readonly, nonatomic) Urn *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) id <_TtP8Playback15PlayQueueSource_> playQueueSource; // @synthesize playQueueSource=_playQueueSource;
@property(readonly, nonatomic) AppNavigation *appNavigation; // @synthesize appNavigation=_appNavigation;
- (void).cxx_destruct;
- (_Bool)currentItemInPlayerIsEqualToNewItem;
- (void)restartPlayerIfNeeded;
- (void)restartPlayer;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchModalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueueSource:(id)arg1 origin:(id)arg2 taggingContext:(id)arg3 appNavigation:(id)arg4 skipPreventedAlert:(id)arg5 playQueueManagerFactory:(id)arg6 appPerformanceProfiler:(id)arg7 googleCastStateObserver:(id)arg8;
- (id)initWithQueueSource:(id)arg1 origin:(id)arg2 taggingContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
