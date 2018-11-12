//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "ABKInAppMessageControllerDelegate-Protocol.h"
#import "AdjustDelegate-Protocol.h"
#import "CustomPopupDelegate-Protocol.h"
#import "DZRURLHandlerDelegate-Protocol.h"
#import "GenericWebViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "WCSessionDelegate-Protocol.h"
#import "_TtP6Deezer23GDPRCoordinatorDelegate_-Protocol.h"

@class DZRCarModeManager, DZRCarPlayManager, DZRFileDownloadLockScreenMediator, DZRPlayerManager, DZRWatchManager, NSMutableArray, NSString, UIAlertController, UIApplicationShortcutItem, UILongPressGestureRecognizer, UINavigationController, UITabBarController, UIViewController, UIWindow, _TtC6Deezer15GDPRCoordinator, _TtC6Deezer15TrialController, _TtC6Deezer18JourneyCoordinator, _TtC6Deezer18RadioStateObserver, _TtC6Deezer20NetworkStateProvider, _TtC6Deezer21StartupBoxCoordinator, _TtC6Deezer23NetworkActivityObserver, _TtC6Deezer29ForceTouchQuickActionsManager;

@interface DZRAppDelegate : UIResponder <UITabBarControllerDelegate, CustomPopupDelegate, GenericWebViewDelegate, _TtP6Deezer23GDPRCoordinatorDelegate_, UIGestureRecognizerDelegate, UIApplicationDelegate, UIActionSheetDelegate, DZRURLHandlerDelegate, AdjustDelegate, ABKInAppMessageControllerDelegate, WCSessionDelegate>
{
    UIAlertController *networkAlertController;
    UIAlertController *messageAlertController;
    UIAlertController *warningConnectionAlertController;
    UIAlertController *operatorOfferAlertController;
    NSMutableArray *custoAlertControllerArray;
    unsigned long long cleanupTaskIdentifier;
    _Bool isOperatorMessageDisplayed;
    _Bool _shouldRotate;
    _Bool _ignorePaymentWebviewDuringInAppPurchase;
    _Bool _isCustomPopUpDisplayed;
    UIWindow *_window;
    UIViewController *mainController;
    NSMutableArray *custoAlertviewArray;
    NSMutableArray *webviewsList;
    UITabBarController *_dzrTabBarController;
    UINavigationController *_modalOnboardingNavController;
    UINavigationController *_modalInAppNavController;
    NSMutableArray *_deeplinkUrlStack;
    DZRCarModeManager *_carModeManager;
    _TtC6Deezer18JourneyCoordinator *_coordinator;
    _TtC6Deezer20NetworkStateProvider *_networkStateProvider;
    _TtC6Deezer18RadioStateObserver *_radioStateObserver;
    _TtC6Deezer23NetworkActivityObserver *_networkActivityObserver;
    _TtC6Deezer21StartupBoxCoordinator *_startupBoxCoordinator;
    _TtC6Deezer15GDPRCoordinator *_gdprCoordinator;
    _TtC6Deezer15TrialController *_trialController;
    NSMutableArray *_bmwDebugObservers;
    DZRFileDownloadLockScreenMediator *_fileDownloadLockScreenMediator;
    UIApplicationShortcutItem *_launchedShortcutItem;
    _TtC6Deezer29ForceTouchQuickActionsManager *_quickActionManager;
    DZRWatchManager *_watchManager;
    DZRPlayerManager *_playerManager;
    id _activityToRestore;
    DZRCarPlayManager *_carPlayManager;
    CDUnknownBlockType _webViewCompletion;
    UILongPressGestureRecognizer *_longPressRecognizer;
    struct CGRect _keyboardFrame;
}

+ (id)sharedDelegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(copy, nonatomic) CDUnknownBlockType webViewCompletion; // @synthesize webViewCompletion=_webViewCompletion;
@property(retain, nonatomic) DZRCarPlayManager *carPlayManager; // @synthesize carPlayManager=_carPlayManager;
@property(retain, nonatomic) id activityToRestore; // @synthesize activityToRestore=_activityToRestore;
@property(retain, nonatomic) DZRPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(retain, nonatomic) DZRWatchManager *watchManager; // @synthesize watchManager=_watchManager;
@property(retain, nonatomic) _TtC6Deezer29ForceTouchQuickActionsManager *quickActionManager; // @synthesize quickActionManager=_quickActionManager;
@property(retain, nonatomic) UIApplicationShortcutItem *launchedShortcutItem; // @synthesize launchedShortcutItem=_launchedShortcutItem;
@property(retain, nonatomic) DZRFileDownloadLockScreenMediator *fileDownloadLockScreenMediator; // @synthesize fileDownloadLockScreenMediator=_fileDownloadLockScreenMediator;
@property(retain, nonatomic) NSMutableArray *bmwDebugObservers; // @synthesize bmwDebugObservers=_bmwDebugObservers;
@property(retain, nonatomic) _TtC6Deezer15TrialController *trialController; // @synthesize trialController=_trialController;
@property(retain, nonatomic) _TtC6Deezer15GDPRCoordinator *gdprCoordinator; // @synthesize gdprCoordinator=_gdprCoordinator;
@property(retain, nonatomic) _TtC6Deezer21StartupBoxCoordinator *startupBoxCoordinator; // @synthesize startupBoxCoordinator=_startupBoxCoordinator;
@property(retain, nonatomic) _TtC6Deezer23NetworkActivityObserver *networkActivityObserver; // @synthesize networkActivityObserver=_networkActivityObserver;
@property(retain, nonatomic) _TtC6Deezer18RadioStateObserver *radioStateObserver; // @synthesize radioStateObserver=_radioStateObserver;
@property(retain, nonatomic) _TtC6Deezer20NetworkStateProvider *networkStateProvider; // @synthesize networkStateProvider=_networkStateProvider;
@property(retain, nonatomic) _TtC6Deezer18JourneyCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) _Bool isCustomPopUpDisplayed; // @synthesize isCustomPopUpDisplayed=_isCustomPopUpDisplayed;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(retain, nonatomic) DZRCarModeManager *carModeManager; // @synthesize carModeManager=_carModeManager;
@property(retain, nonatomic) NSMutableArray *deeplinkUrlStack; // @synthesize deeplinkUrlStack=_deeplinkUrlStack;
@property(nonatomic) _Bool ignorePaymentWebviewDuringInAppPurchase; // @synthesize ignorePaymentWebviewDuringInAppPurchase=_ignorePaymentWebviewDuringInAppPurchase;
@property(nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(retain, nonatomic) UINavigationController *modalInAppNavController; // @synthesize modalInAppNavController=_modalInAppNavController;
@property(retain, nonatomic) UINavigationController *modalOnboardingNavController; // @synthesize modalOnboardingNavController=_modalOnboardingNavController;
@property(retain, nonatomic) UITabBarController *dzrTabBarController; // @synthesize dzrTabBarController=_dzrTabBarController;
@property(retain, nonatomic) NSMutableArray *webviewsList; // @synthesize webviewsList;
@property(retain, nonatomic) NSMutableArray *custoAlertControllerArray; // @synthesize custoAlertControllerArray;
@property(retain, nonatomic) NSMutableArray *custoAlertviewArray; // @synthesize custoAlertviewArray;
@property(retain, nonatomic) UIViewController *mainController; // @synthesize mainController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)didCompleteGDPRJourney;
- (long long)beforeInAppMessageDisplayed:(id)arg1;
- (void)handleUniversalLink:(id)arg1;
- (void)presentError:(id)arg1;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)activateWatchManager;
- (void)configureWatchManager;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)adjustAttributionChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardObservers;
- (void)addKeyboardObservers;
- (void)playerTrackChanged:(id)arg1;
- (void)initializeBMW;
- (void)dealloc;
- (id)init;
- (void)didSwitchToNewDeezerAccount;
- (void)willSwitchToNewDeezerAccount;
- (void)displayForceUpdatePopup;
- (_Bool)canWeUseApplication;
- (void)queryHandlerFailedToHandleQuery:(id)arg1;
- (void)queryHandlerDidHandleQuery:(id)arg1;
- (void)queryHandlerWillHandleQuery:(id)arg1;
- (void)genericWebViewPopupDidClose:(id)arg1;
- (void)closeWebViewPopup;
- (void)customPopupDidFinishLoad:(id)arg1;
- (void)customPopup:(id)arg1 didFailWithError:(id)arg2;
- (void)customPopupDidClose:(id)arg1;
- (void)displayCGUs;
- (void)displayPopupWebViewControllerWithUrl:(id)arg1 showLoadingView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)displayWebViewControllerWithUrl:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)urlHandlerAutologDidFail;
- (void)urlHandlerAutologDidSuccess;
- (void)displayInAppPurchaseWithDelegate:(id)arg1 options:(id)arg2;
- (void)displayScreen:(long long)arg1 withObject:(id)arg2 options:(id)arg3;
- (_Bool)handleUrl:(id)arg1 pushViewController:(_Bool)arg2 authorizedInOffline:(_Bool)arg3;
- (void)handleInternalUrl:(id)arg1;
- (void)handleUrl:(id)arg1;
- (_Bool)isViewControllerBelongToUnloggedMode:(id)arg1;
- (unsigned long long)countDeepLinks;
- (void)handleDeeplinksIfNecessary;
- (void)clearDeepLinks;
- (id)popDeeplink;
- (void)pushDeeplink:(id)arg1;
- (id)pullDeeplink;
- (void)enterApplication;
- (void)handleSuccessAuthentication;
- (void)triggerPostAuthenticationJobs;
- (void)displayServerMessage;
- (void)triggerGDPR;
- (void)doInitializations;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)commonLaunchingForApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)registerGateKeeperModules;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (_Bool)storeLaunchShortcutItem:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleLocalNotification:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)reportAppOpen;
- (void)setupAnalytics;
- (void)setupCrashlytics;
- (void)initializeExceptionManager;
- (void)dzrPresentCarModeBannerView:(id)arg1;
- (id)dzrPlayerViewController;
- (id)dzrSelectedTabBreadcrumb;
- (void)dzrHideInterstitialViewController;
- (void)dzrShowInterstitialViewControllerWithInterstitial:(id)arg1;
- (id)dzrControllerToPresentInterstitial;
- (id)dzrTopViewController;
- (id)dzrEmbedInNavigationControllerViewController:(id)arg1 closable:(_Bool)arg2;
- (void)dzrPresentViewControllerAsPopup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dzrPresentViewControllerAsPopup:(id)arg1 closesOnTapOutside:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)blurredTransitioningDelegate;
- (void)dzrPresentViewControllerOverBlurredBackground:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dzrDismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dzrPresentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dzrPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dzrPushViewController:(id)arg1 animated:(_Bool)arg2 checkHistory:(_Bool)arg3;
- (id)dzrGoToControllerWithClass:(Class)arg1 animated:(_Bool)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)dzrGoToControllerWithClass:(Class)arg1 animated:(_Bool)arg2 withParameters:(id)arg3;
- (id)dzrViewControllerForModalPresentation;
- (id)dzrCurrentNavigationController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)installBugTrackerTrigger;
- (void)displayLicenseExpireAlert;
- (void)backgroundInDownloadWillStop:(id)arg1;
- (void)noSpaceLeft:(id)arg1;
- (void)actionForAlertController:(id)arg1 actionType:(long long)arg2;
- (void)createDynamicComponentForAction:(id)arg1;
- (void)dzrCreateTabBarController;
- (void)dzrResetTabBarController;
- (void)dzrRefreshTabBarControllers;
- (void)dzrGoToTabAt:(long long)arg1;
- (_Bool)tabIsFlowTabAt:(long long)arg1;
- (void)dzrAnchorToFirstViewControllerWithShouldAnchorDetailToo:(_Bool)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (long long)dzrSelectedTabIndex;
- (long long)dzrSearchTabIndex;
- (long long)dzrFlowTabIndex;
- (long long)dzrPlayerTabIndex;
- (long long)dzrProfileTabIndex;
- (long long)dzrHomeTabIndex;
- (id)dzrSelectedTabNavigationPath;
- (id)dzrSelectedTabNavigationController;
- (id)dzrSelectedTabLogId;
- (id)dzrLogIdFor:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
