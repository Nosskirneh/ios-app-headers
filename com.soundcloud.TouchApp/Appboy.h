//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABKContentCardsController, ABKFeedController, ABKInAppMessageController, ABKLocationManager, ABKManager, ABKPersistentData, ABKPushNotificationManager, ABKSessionManager, ABKTriggerManager, ABKUser, NSString;
@protocol ABKAppboyEndpointDelegate, ABKIDFADelegate, ABKURLDelegate;

@interface Appboy : NSObject
{
    ABKUser *_user;
    ABKFeedController *_feedController;
    ABKContentCardsController *_contentCardsController;
    id <ABKIDFADelegate> _idfaDelegate;
    ABKInAppMessageController *_inAppMessageController;
    ABKLocationManager *_locationManager;
    id <ABKURLDelegate> _appboyUrlDelegate;
    long long _sdkFlavor;
    ABKManager *_appboyManager;
    ABKPersistentData *_persistentData;
    NSString *_apiKey;
    ABKPushNotificationManager *_pushNotificationManager;
    ABKSessionManager *_sessionManager;
    ABKTriggerManager *_appboyTriggerManager;
}

+ (_Bool)isSDKDisabled;
+ (void)requestEnableSDKOnNextAppRun;
+ (void)disableSDK;
+ (void)wipeDataAndDisableForAppRun;
+ (void)nilSharedAppboyInstanceForTesting;
+ (id)findAPIKeyInPlist:(id)arg1 withLocaleIdentifier:(id)arg2;
+ (id)checkAPIKeyInPlistWithCurrentLocale;
+ (void)startWithApiKey:(id)arg1 inApplication:(id)arg2 withLaunchOptions:(id)arg3;
+ (void)startWithApiKey:(id)arg1 inApplication:(id)arg2 withLaunchOptions:(id)arg3 withAppboyOptions:(id)arg4;
+ (void)initialize;
+ (id)unsafeInstance;
+ (id)sharedInstance;
@property(retain) ABKTriggerManager *appboyTriggerManager; // @synthesize appboyTriggerManager=_appboyTriggerManager;
@property(retain) ABKSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain) ABKPushNotificationManager *pushNotificationManager; // @synthesize pushNotificationManager=_pushNotificationManager;
@property(copy) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain) ABKPersistentData *persistentData; // @synthesize persistentData=_persistentData;
@property(retain) ABKManager *appboyManager; // @synthesize appboyManager=_appboyManager;
@property(nonatomic) long long sdkFlavor; // @synthesize sdkFlavor=_sdkFlavor;
@property(nonatomic) __weak id <ABKURLDelegate> appboyUrlDelegate; // @synthesize appboyUrlDelegate=_appboyUrlDelegate;
@property(readonly, nonatomic) ABKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) ABKInAppMessageController *inAppMessageController; // @synthesize inAppMessageController=_inAppMessageController;
@property(retain, nonatomic) id <ABKIDFADelegate> idfaDelegate; // @synthesize idfaDelegate=_idfaDelegate;
@property(readonly) ABKContentCardsController *contentCardsController; // @synthesize contentCardsController=_contentCardsController;
@property(retain) ABKFeedController *feedController; // @synthesize feedController=_feedController;
@property(retain) ABKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)sdkFlavorValue;
- (_Bool)handleRemotePushNotification:(id)arg1 withIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 applicationState:(long long)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleRemotePushNotification:(id)arg1 withIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)getActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)pushAuthorizationFromUserNotificationCenter:(_Bool)arg1;
- (_Bool)userNotificationDelegatesImplementedAndActive;
- (void)registerApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)registerPushToken:(id)arg1;
- (_Bool)pushNotificationWasSentFromAppboy:(id)arg1;
- (_Bool)userNotificationWasSentFromAppboy:(id)arg1;
- (id)getDeviceId;
- (void)requestContentCardsRefresh;
- (void)requestFeedRefresh;
- (void)logContentCardsDisplayed;
- (void)logFeedDisplayed;
- (void)logFeedbackDisplayed;
- (void)observeHostApplicationStateForSessionEndTime;
- (void)logPurchase:(id)arg1 inCurrency:(id)arg2 atPrice:(id)arg3 withQuantity:(unsigned long long)arg4 andProperties:(id)arg5;
- (void)logPurchase:(id)arg1 inCurrency:(id)arg2 atPrice:(id)arg3 withQuantity:(unsigned long long)arg4;
- (void)logPurchase:(id)arg1 inCurrency:(id)arg2 atPrice:(id)arg3;
- (void)logPurchase:(id)arg1 inCurrency:(id)arg2 atPrice:(id)arg3 withProperties:(id)arg4;
- (void)logCustomEvent:(id)arg1 withProperties:(id)arg2;
- (void)logCustomEvent:(id)arg1;
- (void)submitFeedback:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)submitFeedback:(id)arg1 message:(id)arg2 isReportingABug:(_Bool)arg3;
- (void)shutdownServerCommunication;
- (void)startSession;
- (void)changeUser:(id)arg1;
- (void)flushDataAndProcessRequestQueue;
@property(nonatomic) __weak id <ABKAppboyEndpointDelegate> appboyEndpointDelegate;
@property long long requestProcessingPolicy;
- (void)dealloc;
- (id)initWithApiKey:(id)arg1 withAppboyOptions:(id)arg2;

@end

