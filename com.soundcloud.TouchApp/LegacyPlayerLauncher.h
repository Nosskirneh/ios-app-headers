//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerLauncher.h"

@class AppNavigation, PlayQueueManagerFactory;
@protocol AudioAdSkipPreventedAlertShowing, GoogleCastStateObserving, PlayQueueDataSource, PlayQueueSkipInteracting, _TtP8Features23AppPerformanceProfiling_;

@interface LegacyPlayerLauncher : PlayerLauncher
{
    AppNavigation *_appNavigation;
    id <PlayQueueDataSource> _dataSource;
    id <AudioAdSkipPreventedAlertShowing> _skipPreventedAlert;
    PlayQueueManagerFactory *_queueManagerFactory;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
    id <PlayQueueSkipInteracting> _playqueueSkippingService;
    id <GoogleCastStateObserving> _googleCastStateObserver;
}

@property(readonly, nonatomic) id <GoogleCastStateObserving> googleCastStateObserver; // @synthesize googleCastStateObserver=_googleCastStateObserver;
@property(readonly, nonatomic) id <PlayQueueSkipInteracting> playqueueSkippingService; // @synthesize playqueueSkippingService=_playqueueSkippingService;
@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(readonly, nonatomic) PlayQueueManagerFactory *queueManagerFactory; // @synthesize queueManagerFactory=_queueManagerFactory;
@property(readonly, nonatomic) id <AudioAdSkipPreventedAlertShowing> skipPreventedAlert; // @synthesize skipPreventedAlert=_skipPreventedAlert;
@property(readonly, nonatomic) id <PlayQueueDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) AppNavigation *appNavigation; // @synthesize appNavigation=_appNavigation;
- (void).cxx_destruct;
- (_Bool)currentItemInPlayerIsEqualToNewItem;
- (void)restartPlayerIfNeeded;
- (void)restartPlayer;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchModalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPlayerFrom:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAppNavigation:(id)arg1 dataSource:(id)arg2 taggingContext:(id)arg3 skipPreventedAlert:(id)arg4 playQueueManagerFactory:(id)arg5 appPerformanceProfiler:(id)arg6 playqueueSkippingService:(id)arg7 googleCastStateObserver:(id)arg8;
- (id)initWithDataSource:(id)arg1 taggingContext:(id)arg2;

@end
