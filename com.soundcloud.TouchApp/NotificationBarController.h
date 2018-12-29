//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NotificationBarView, OfflineSync, PlaybackService, RACScopedDisposable, _TtC8Payments15UIKitDispatcher;
@protocol _TtP4Core9Reachable_;

@interface NotificationBarController : UIViewController
{
    _Bool _throttleOfflineProgress;
    _Bool _pausedByStreamLimitingNotification;
    _Bool _reachable;
    id <_TtP4Core9Reachable_> _reachability;
    RACScopedDisposable *_combinedDisposable;
    OfflineSync *_offlineSync;
    PlaybackService *_playbackService;
    NotificationBarView *_notificationBarView;
    _TtC8Payments15UIKitDispatcher *_uiDispatcher;
    id _reachabilityObservationToken;
}

@property(retain, nonatomic) id reachabilityObservationToken; // @synthesize reachabilityObservationToken=_reachabilityObservationToken;
@property _Bool reachable; // @synthesize reachable=_reachable;
@property _Bool pausedByStreamLimitingNotification; // @synthesize pausedByStreamLimitingNotification=_pausedByStreamLimitingNotification;
@property(readonly, nonatomic) _Bool throttleOfflineProgress; // @synthesize throttleOfflineProgress=_throttleOfflineProgress;
@property(readonly, nonatomic) _TtC8Payments15UIKitDispatcher *uiDispatcher; // @synthesize uiDispatcher=_uiDispatcher;
@property(readonly, nonatomic) NotificationBarView *notificationBarView; // @synthesize notificationBarView=_notificationBarView;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) OfflineSync *offlineSync; // @synthesize offlineSync=_offlineSync;
@property(retain, nonatomic) RACScopedDisposable *combinedDisposable; // @synthesize combinedDisposable=_combinedDisposable;
@property(retain, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (void)logOfflineSyncProgress:(id)arg1;
- (unsigned long long)notificationBarActionForItem:(id)arg1;
- (double)delayForNotificationBarItemAction:(unsigned long long)arg1;
- (unsigned long long)gradientForProgress:(id)arg1;
- (void)expandNotificationBarWithProgress:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithOfflineSync:(id)arg1 reachability:(id)arg2 view:(id)arg3 playbackService:(id)arg4 uiDispatcher:(id)arg5 shouldThrottleOfflineProgressMessages:(_Bool)arg6;
- (id)initWithAnimationContext:(unsigned long long)arg1;

@end
