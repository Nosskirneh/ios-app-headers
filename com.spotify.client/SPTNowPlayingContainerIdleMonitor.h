//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTNowPlayingContainerIdleMonitorObservable-Protocol.h"
#import "SPTNowPlayingIgnoringGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTNowPlayingIgnoringGestureRecognizer, SPTObserverManager;
@protocol SPTNowPlayingContainerIdleMonitorDelegate, SPTNowPlayingContainerIdleMonitorLoggingDelegate;

@interface SPTNowPlayingContainerIdleMonitor : NSObject <SPTNowPlayingIgnoringGestureRecognizerDelegate, SPTNowPlayingContainerIdleMonitorObservable>
{
    _Bool _countdownEnabled;
    id <SPTNowPlayingContainerIdleMonitorDelegate> _delegate;
    id <SPTNowPlayingContainerIdleMonitorLoggingDelegate> _loggingDelegate;
    SPTNowPlayingIgnoringGestureRecognizer *_gestureRecognizer;
    double _waitInterval;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) double waitInterval; // @synthesize waitInterval=_waitInterval;
@property(retain, nonatomic) SPTNowPlayingIgnoringGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) _Bool countdownEnabled; // @synthesize countdownEnabled=_countdownEnabled;
@property(nonatomic) __weak id <SPTNowPlayingContainerIdleMonitorLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <SPTNowPlayingContainerIdleMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)idleWaitInterval;
- (void)notifyIdlePeriodDidEnd:(_Bool)arg1;
- (void)notifyIdlePeriodDidBegin:(_Bool)arg1;
- (void)notifyCurrentStateToObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)forceIdle:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)updateForVoiceOverStatus;
- (_Bool)isIdleMonitoringEnabled;
- (void)resetMonitoring;
- (void)pauseMonitoring;
- (_Bool)startMonitoring;
- (void)dealloc;
- (id)initWithIdleWaitInterval:(double)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

