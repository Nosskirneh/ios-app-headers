//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRMessagingDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"
#import "YTInAppNotificationControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopicController-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"
#import "YTVisibleTabObserver-Protocol.h"

@class GIMMe, NSData, NSHashTable, NSMapTable, NSNumber, NSString, SSOService, YTCommandRouter, YTInAppNotificationController, YTNotificationService, YTPushNotificationService, YTStreamzNotificationBackgroundData, YTStreamzNotificationInvalidation, YTStreamzNotificationMessage, YTStreamzNotificationPush, YTUserDefaults;
@protocol YTIdentityProvider, YTNotificationConfig, YTResponder;

@interface YTPushNotificationController : NSObject <YTInAppNotificationControllerDelegate, YTSystemNotificationsObserver, YTUserChangedObserver, FIRMessagingDelegate, UNUserNotificationCenterDelegate, YTResponder, YTTopicController, YTVisibleTabObserver>
{
    YTUserDefaults *_userDefaults;
    YTPushNotificationService *_pushNotificationService;
    YTNotificationService *_notificationService;
    id <YTNotificationConfig> _notificationConfig;
    SSOService *_ssoService;
    YTCommandRouter *_commandRouter;
    id <YTIdentityProvider> _identityProvider;
    _Bool _hasShownApplicationLevelDialog;
    double _appLastAppActivationTimestamp;
    _Bool _wasConversationTabShown;
    _Bool _isManualRegistrationEnabled;
    _Bool _isGCMStarted;
    NSHashTable *_presentationHandlers;
    YTStreamzNotificationBackgroundData *_backgroundDataCounter;
    YTStreamzNotificationPush *_pushCounter;
    YTStreamzNotificationMessage *_messageCounter;
    YTStreamzNotificationInvalidation *_invalidationCounter;
    NSNumber *_pushNotificationsEnabled;
    _Bool _fillNotificationEnabledStateOnBrowse;
    _Bool _debugToastModeEnabled;
    _Bool _GCMOnlyMode;
    _Bool _hasRegisteredThisAppLaunch;
    _Bool _hasRegisteredNotificationActions;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTInAppNotificationController *_inAppNotificationController;
    NSData *_APNSDeviceToken;
    NSString *_GCMRegistrationToken;
    NSMapTable *_topicObservers;
    NSMapTable *_pendingObservers;
}

@property(nonatomic) _Bool hasRegisteredNotificationActions; // @synthesize hasRegisteredNotificationActions=_hasRegisteredNotificationActions;
@property(nonatomic) _Bool hasRegisteredThisAppLaunch; // @synthesize hasRegisteredThisAppLaunch=_hasRegisteredThisAppLaunch;
@property(retain, nonatomic) NSMapTable *pendingObservers; // @synthesize pendingObservers=_pendingObservers;
@property(retain, nonatomic) NSMapTable *topicObservers; // @synthesize topicObservers=_topicObservers;
@property(retain, nonatomic) NSString *GCMRegistrationToken; // @synthesize GCMRegistrationToken=_GCMRegistrationToken;
@property(readonly, nonatomic) NSData *APNSDeviceToken; // @synthesize APNSDeviceToken=_APNSDeviceToken;
@property(nonatomic, getter=isGCMOnlyMode) _Bool GCMOnlyMode; // @synthesize GCMOnlyMode=_GCMOnlyMode;
@property(readonly, nonatomic) YTInAppNotificationController *inAppNotificationController; // @synthesize inAppNotificationController=_inAppNotificationController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)showDebugToastWithMessage:(id)arg1;
- (void)didTapInAppNotification:(id)arg1;
- (id)uiCategoriesFromConfig:(id)arg1;
- (unsigned long long)uiUserNotificationTypeFromProtoArray:(id)arg1;
- (void)handleGetNotificationSettingsResponse:(id)arg1 categories:(id)arg2 application:(id)arg3;
@property(nonatomic) _Bool debugToastModeEnabled; // @synthesize debugToastModeEnabled=_debugToastModeEnabled;
- (void)updateBrowseServiceNotificationState;
- (void)pushNotificationsEnabledStatusDidChange;
- (void)updatePushNotificationsEnabledStatus;
- (void)pushNotificationsEnabledLazyInit;
- (void)makeSetNotificationRegistrationRequestBlankDeviceToken;
- (void)finishRegistrationWithApplication:(id)arg1 types:(unsigned long long)arg2 categories:(id)arg3;
- (id)createUserNotificationActionFromRegistrationAction:(id)arg1;
- (void)removePendingObserver:(id)arg1 forTopicName:(id)arg2;
- (void)addPendingObserver:(id)arg1 forTopicName:(id)arg2;
- (void)finalizeObserversForTopicName:(id)arg1;
- (void)addObserver:(id)arg1 forTopicName:(id)arg2;
- (void)removeObserver:(id)arg1 forTopicName:(id)arg2 withGCM:(_Bool)arg3;
- (_Bool)handleTopicMessageWithPayload:(id)arg1 content:(id)arg2;
- (_Bool)isGCMEnabled;
- (void)handleSnackBarEndpoint:(id)arg1;
- (void)modifyUpdateBrowseTabNewContentAction:(id)arg1;
- (void)handleBackgroundData:(id)arg1;
- (void)handlePushNotification:(id)arg1;
- (void)handleGCMResponse:(id)arg1 error:(id)arg2;
- (void)makeGCMRegistrationRequest;
- (void)refreshGCMToken;
- (void)registerForGCMWithAPNSDeviceToken:(id)arg1;
- (_Bool)shouldHideForegroundBanner:(id)arg1;
- (void)maybeIncrementStreamzForRenderer:(id)arg1;
- (id)FIRMessagingInstance;
- (void)setUpFCM;
- (void)tabShown:(id)arg1;
- (void)onFCMConnectionStateChange;
- (void)messaging:(id)arg1 didReceiveMessage:(id)arg2;
- (void)messaging:(id)arg1 didReceiveRegistrationToken:(id)arg2;
- (void)userDidChange;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)unsubscribeFromAllTopicsWithGcm:(_Bool)arg1 observer:(id)arg2;
- (void)unsubscribeFromTopicWithName:(id)arg1 unsubscribeWithGcm:(_Bool)arg2 observer:(id)arg3;
- (void)subscribeToTopicWithName:(id)arg1 subscribeWithGcm:(_Bool)arg2 observer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)subscribeToTopicWithName:(id)arg1 subscribeWithGcm:(_Bool)arg2 observer:(id)arg3;
@property(readonly, nonatomic) _Bool pushNotificationsEnabled;
- (_Bool)shouldHideUserNotification:(id)arg1;
- (id)didPerformBackgroundFetch;
- (void)removePresentationHandler:(id)arg1;
- (void)addPresentationHandler:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePushNotificationEndpoints:(id)arg1 serviceEndpoint:(id)arg2;
- (void)didReceiveRemoteNotification:(id)arg1 shouldHandleInApp:(_Bool)arg2;
- (void)didReceiveRemoteNotification:(id)arg1;
- (void)didReceiveRemoteNotificationAsync:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)registerForRemoteNotificationsWithApplication:(id)arg1;
- (void)maybeRegisterForPushNotificationsWithApplication:(id)arg1 forceApplicationDialog:(_Bool)arg2;
- (void)maybeRegisterForPushNotificationsWithApplication:(id)arg1;
- (id)initWithManualRegistrationEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
