//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppLaunchPresenter, AppLaunchPresenterFactory, AppLauncherNotificationFactory, AppLifecycleCoordinatorFactory, NSDate, NSOperationQueue, RACScopedDisposable, RACSubject, RootSplashLauncher, UIWindow, _TtC4Core14ThreadExecutor;
@protocol StartupOperationsManufacturing, _TtP4Core10TechLogger_, _TtP8Features23AppPerformanceProfiling_;

@interface AppLauncher : NSObject
{
    UIWindow *_window;
    NSOperationQueue *_queue;
    RootSplashLauncher *_rootSplashLauncher;
    id <StartupOperationsManufacturing> _startupOperationFactory;
    AppLifecycleCoordinatorFactory *_appLifecycleCoordinatorFactory;
    AppLaunchPresenterFactory *_appLaunchPresenterFactory;
    id <_TtP4Core10TechLogger_> _techLogger;
    AppLauncherNotificationFactory *_appLauncherNotificationFactory;
    AppLaunchPresenter *_appLaunchPresenter;
    NSDate *_startTime;
    RACSubject *_lifecycleCoordinatorSubject;
    RACScopedDisposable *_applicationShouldPrepareForRestartDisposable;
    RACScopedDisposable *_applicationShouldRestartDisposable;
    id <_TtP8Features23AppPerformanceProfiling_> _performanceProfiler;
    _TtC4Core14ThreadExecutor *_finalOperationThreadExecutor;
}

@property(readonly, nonatomic) _TtC4Core14ThreadExecutor *finalOperationThreadExecutor; // @synthesize finalOperationThreadExecutor=_finalOperationThreadExecutor;
@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> performanceProfiler; // @synthesize performanceProfiler=_performanceProfiler;
@property(retain, nonatomic) RACScopedDisposable *applicationShouldRestartDisposable; // @synthesize applicationShouldRestartDisposable=_applicationShouldRestartDisposable;
@property(retain, nonatomic) RACScopedDisposable *applicationShouldPrepareForRestartDisposable; // @synthesize applicationShouldPrepareForRestartDisposable=_applicationShouldPrepareForRestartDisposable;
@property(readonly, nonatomic) RACSubject *lifecycleCoordinatorSubject; // @synthesize lifecycleCoordinatorSubject=_lifecycleCoordinatorSubject;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AppLaunchPresenter *appLaunchPresenter; // @synthesize appLaunchPresenter=_appLaunchPresenter;
@property(readonly, nonatomic) AppLauncherNotificationFactory *appLauncherNotificationFactory; // @synthesize appLauncherNotificationFactory=_appLauncherNotificationFactory;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) AppLaunchPresenterFactory *appLaunchPresenterFactory; // @synthesize appLaunchPresenterFactory=_appLaunchPresenterFactory;
@property(readonly, nonatomic) AppLifecycleCoordinatorFactory *appLifecycleCoordinatorFactory; // @synthesize appLifecycleCoordinatorFactory=_appLifecycleCoordinatorFactory;
@property(readonly, nonatomic) id <StartupOperationsManufacturing> startupOperationFactory; // @synthesize startupOperationFactory=_startupOperationFactory;
@property(readonly, nonatomic) RootSplashLauncher *rootSplashLauncher; // @synthesize rootSplashLauncher=_rootSplashLauncher;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)observeShouldPrepareForRestart;
- (void)observeShouldRestart;
- (void)beginObservations;
- (void)logStartupFinished;
- (void)launchAppWithOptions:(id)arg1;
- (CDUnknownBlockType)finalOperationWithOptions:(id)arg1;
- (void)executeOperationsDifferentQueues:(id)arg1;
- (void)executeOperationsSingleQueue:(id)arg1;
- (void)executeOperations:(id)arg1;
- (void)beginStartupOperationsWithOptions:(id)arg1;
- (void)launchSplash;
- (void)getLifecycleCoordinator:(CDUnknownBlockType)arg1;
- (void)launchWithOptions:(id)arg1;
- (id)initWithWindow:(id)arg1 operationQueue:(id)arg2 rootSplashLauncher:(id)arg3 startupOperationsFactory:(id)arg4 appLifecycleCoordinatorFactory:(id)arg5 appLaunchPresenterFactory:(id)arg6 techLogger:(id)arg7 appLauncherNotificationFactory:(id)arg8 lifecycleCoordinatorSubject:(id)arg9 performanceProfiler:(id)arg10 finalOperationThreadExecutor:(id)arg11;
- (id)initWithWindow:(id)arg1;

@end
