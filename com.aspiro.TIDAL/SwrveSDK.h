//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SwrveSDK : NSObject
{
}

+ (void)installAction:(id)arg1;
+ (void)handleDeferredDeeplink:(id)arg1;
+ (void)handleDeeplink:(id)arg1;
+ (void)processNotificationResponseWithIdentifier:(id)arg1 andUserInfo:(id)arg2;
+ (void)processNotificationResponse:(id)arg1;
+ (void)sendPushEngagedEvent:(id)arg1;
+ (_Bool)didReceiveRemoteNotification:(id)arg1 withBackgroundCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)pushNotificationReceived:(id)arg1;
+ (id)deviceToken;
+ (void)setDeviceToken:(id)arg1;
+ (void)shutdown;
+ (int)eventWithNoCallback:(id)arg1 payload:(id)arg2;
+ (void)setEventQueuedCallback:(CDUnknownBlockType)arg1;
+ (void)saveEventsToDisk;
+ (void)sendQueuedEvents;
+ (void)userResourcesDiff:(CDUnknownBlockType)arg1;
+ (void)userResources:(CDUnknownBlockType)arg1;
+ (id)resourceManager;
+ (void)refreshCampaignsAndResources;
+ (int)userUpdate:(id)arg1 withDate:(id)arg2;
+ (int)userUpdate:(id)arg1;
+ (int)currencyGiven:(id)arg1 givenAmount:(double)arg2;
+ (int)event:(id)arg1 payload:(id)arg2;
+ (int)event:(id)arg1;
+ (int)unvalidatedIap:(id)arg1 localCost:(double)arg2 localCurrency:(id)arg3 productId:(id)arg4 productIdQuantity:(int)arg5;
+ (int)iap:(id)arg1 product:(id)arg2 rewards:(id)arg3;
+ (int)iap:(id)arg1 product:(id)arg2;
+ (int)purchaseItem:(id)arg1 currency:(id)arg2 cost:(int)arg3 quantity:(int)arg4;
+ (void)checkInstance;
+ (id)createInstance;
+ (void)sharedInstanceWithAppID:(int)arg1 apiKey:(id)arg2 config:(id)arg3 launchOptions:(id)arg4;
+ (void)sharedInstanceWithAppID:(int)arg1 apiKey:(id)arg2 launchOptions:(id)arg3;
+ (void)sharedInstanceWithAppID:(int)arg1 apiKey:(id)arg2 config:(id)arg3;
+ (void)sharedInstanceWithAppID:(int)arg1 apiKey:(id)arg2;
+ (id)sharedInstance;
+ (void)addSharedInstance:(id)arg1;
+ (void)resetSwrveSharedInstance;
+ (id)messaging;
+ (id)userID;
+ (id)apiKey;
+ (long long)appID;
+ (id)config;

@end

