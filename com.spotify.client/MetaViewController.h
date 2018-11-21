//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewController-Protocol.h"
#import "SPTNavigationRouter-Protocol.h"

@class MessageBarController, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString, NSURL, NSUserDefaults, SPBarViewController, SPTMenuController, SPTNavigationManager, SPTObserverManager, SPTStartupTracer, StateController, UIViewController;
@protocol MetaViewControllerDelegate, SPTBarInteractiveTransitionParticipant, SPTBarOverlayViewController, SPTFullscreenPlaybackPresentationManager, SPTLinkDispatcher, SPTLogCenter, SPTModalPresentationController, SPTNavigationItemsDataSource, SPTPageRegistry, SPTTabBarControllerProtocol;

@interface MetaViewController : NSObject <SPTMetaViewController, SPTNavigationRouter>
{
    _Bool _loadingUIComplete;
    _Bool _presentingMainViewControllerComplete;
    id <SPTNavigationItemsDataSource> _dataSource;
    id <MetaViewControllerDelegate> _delegate;
    SPBarViewController *_barViewController;
    SPTMenuController *_menuController;
    UIViewController<SPTBarOverlayViewController> *_nowPlaying;
    UIViewController<SPTBarInteractiveTransitionParticipant> *_nowPlayingBar;
    UIViewController *_contentViewController;
    id <SPTFullscreenPlaybackPresentationManager> _fullscreenPlaybackPresentationManager;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_rootUI;
    NSMutableArray *_rootViewPresenters;
    SPTObserverManager *_observerManager;
    id <SPTModalPresentationController> _modalPresentationController;
    NSOrderedSet *_defaultTabPriorityList;
    id <SPTPageRegistry> _pageRegistry;
    SPTStartupTracer *_startupTracer;
    id <SPTLogCenter> _logCenter;
    StateController *_stateController;
    MessageBarController *_messageBarController;
    NSURL *_welcomeViewControllerURL;
    id <SPTLinkDispatcher> _defaultLinkDispatcher;
    SPTNavigationManager *_navigationManager;
}

@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> defaultLinkDispatcher; // @synthesize defaultLinkDispatcher=_defaultLinkDispatcher;
@property(retain, nonatomic) NSURL *welcomeViewControllerURL; // @synthesize welcomeViewControllerURL=_welcomeViewControllerURL;
@property(retain, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(retain, nonatomic) StateController *stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(retain, nonatomic) NSOrderedSet *defaultTabPriorityList; // @synthesize defaultTabPriorityList=_defaultTabPriorityList;
@property(nonatomic) __weak id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSMutableArray *rootViewPresenters; // @synthesize rootViewPresenters=_rootViewPresenters;
@property(retain, nonatomic) NSMutableDictionary *rootUI; // @synthesize rootUI=_rootUI;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <SPTFullscreenPlaybackPresentationManager> fullscreenPlaybackPresentationManager; // @synthesize fullscreenPlaybackPresentationManager=_fullscreenPlaybackPresentationManager;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIViewController<SPTBarInteractiveTransitionParticipant> *nowPlayingBar; // @synthesize nowPlayingBar=_nowPlayingBar;
@property(readonly, nonatomic) _Bool presentingMainViewControllerComplete; // @synthesize presentingMainViewControllerComplete=_presentingMainViewControllerComplete;
@property(nonatomic, getter=isLoadingUIComplete) _Bool loadingUIComplete; // @synthesize loadingUIComplete=_loadingUIComplete;
@property(retain, nonatomic) UIViewController<SPTBarOverlayViewController> *nowPlaying; // @synthesize nowPlaying=_nowPlaying;
@property(retain, nonatomic) SPTMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) SPBarViewController *barViewController; // @synthesize barViewController=_barViewController;
@property(nonatomic) __weak id <MetaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTNavigationItemsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)findExistingViewControllerForViewURI:(id)arg1;
- (_Bool)nowPlayingBarHidden;
- (void)closeNowPlayingViewAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)popToViewController:(id)arg1 onNavigationViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushViewController:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invokePageCompletionHandlerForViewController:(id)arg1 URI:(id)arg2;
- (id)pushViewControllerForLink:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)selectTabAndPushViewControllerForLink:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)equivalentForViewController:(id)arg1 inViewControllerNavigationStack:(id)arg2 useURIEquivalence:(_Bool)arg3 options:(long long)arg4;
- (_Bool)doesViewController:(id)arg1 haveSameURIAs:(id)arg2;
- (_Bool)isViewController:(id)arg1 validForURL:(id)arg2;
- (id)findRootViewControllerInNavigationStack:(id)arg1 onViewController:(id)arg2;
- (id)topMostViewControllerOnViewController:(id)arg1;
- (id)vcForLink:(id)arg1 useCurrentStack:(_Bool)arg2 referrer:(id)arg3;
- (CDUnknownBlockType)completionForLink:(id)arg1;
- (id)vcForLink:(id)arg1 useCurrentStack:(_Bool)arg2;
- (id)vcForLink:(id)arg1;
- (id)impliedReferrerIdentifier;
@property(readonly, nonatomic) UIViewController *defaultTab;
- (_Bool)viewControllerIsRelatedToLogin:(id)arg1;
@property(readonly, nonatomic, getter=isShowingLoginView) _Bool showingLoginView;
@property(readonly, nonatomic, getter=isShowingMainView) _Bool showingMainView;
@property(readonly, nonatomic) __weak UIViewController *rootContainer;
- (void)toggleNowPlayingViewControllerAnimated:(_Bool)arg1 visible:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchToLoginViewAnimated:(_Bool)arg1 showError:(id)arg2 logout:(_Bool)arg3 forgetUser:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)switchToLoginViewForLogoutShowError:(id)arg1 forgetUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToLoginViewAnimated:(_Bool)arg1 showError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToMainViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchFromLoginAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeRootViewPresenter:(id)arg1;
- (void)addRootViewPresenter:(id)arg1;
- (void)didReceiveMemoryWarningNotification:(id)arg1;
- (void)selectTab:(id)arg1;
- (id)popAllAnimated:(_Bool)arg1;
- (void)dealloc;
- (void)teardownUI;
- (void)setupRootUIFromNavigationItems:(id)arg1 defaultList:(id)arg2;
- (void)setupNowPlayingBar;
- (void)setupNowPlayingView;
- (void)injectVisibleStateCallbackIntoViewController:(id)arg1;
- (void)notifyObserversRootViewDidChange;
- (void)notifyObserversRootViewWillChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupRootUI;
- (id)initWithWelcomeURL:(id)arg1 userDefaults:(id)arg2 logCenter:(id)arg3 startupTracer:(id)arg4 pageRegistry:(id)arg5 stateController:(id)arg6 messageBarController:(id)arg7 defaultLinkDispatcher:(id)arg8 navigationManager:(id)arg9 notificationCenter:(id)arg10;
@property(readonly, nonatomic) UIViewController *top;
@property(readonly, nonatomic) UIViewController<SPTTabBarControllerProtocol> *tabs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

