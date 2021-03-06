//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UAActionRegistry, UAAnalytics, UAApplicationMetrics, UAAutomation, UAChannelCapture, UAConfig, UADefaultMessageCenter, UAInAppMessaging, UAInbox, UALocation, UANamedUser, UAPreferenceDataStore, UAPush, UAUser, UAWhitelist;
@protocol UAJavaScriptDelegate;

@interface UAirship : NSObject
{
    _Bool _remoteNotificationBackgroundModeEnabled;
    UAConfig *_config;
    UAAnalytics *_analytics;
    UAActionRegistry *_actionRegistry;
    UAApplicationMetrics *_applicationMetrics;
    id <UAJavaScriptDelegate> _jsDelegate;
    UAWhitelist *_whitelist;
    UAChannelCapture *_channelCapture;
    id <UAJavaScriptDelegate> _actionJSDelegate;
    UAPreferenceDataStore *_dataStore;
    UAPush *_sharedPush;
    UAUser *_sharedInboxUser;
    UAInbox *_sharedInbox;
    UAInAppMessaging *_sharedInAppMessaging;
    UADefaultMessageCenter *_sharedDefaultMessageCenter;
    UALocation *_sharedLocation;
    UANamedUser *_sharedNamedUser;
    UAAutomation *_sharedAutomation;
}

+ (id)resources;
+ (id)automation;
+ (id)namedUser;
+ (id)location;
+ (id)defaultMessageCenter;
+ (id)inAppMessaging;
+ (id)inboxUser;
+ (id)inbox;
+ (id)push;
+ (id)shared;
+ (void)setSharedAirship:(id)arg1;
+ (void)land;
+ (void)handleAppTerminationNotification:(id)arg1;
+ (void)handleAppDidFinishLaunchingNotification:(id)arg1;
+ (void)executeUnsafeTakeOff:(id)arg1;
+ (void)takeOff:(id)arg1;
+ (void)takeOff;
+ (void)load;
+ (void)setLoudImpErrorLogging:(_Bool)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (void)setLogging:(_Bool)arg1;
@property(retain, nonatomic) UAAutomation *sharedAutomation; // @synthesize sharedAutomation=_sharedAutomation;
@property(retain, nonatomic) UANamedUser *sharedNamedUser; // @synthesize sharedNamedUser=_sharedNamedUser;
@property(retain, nonatomic) UALocation *sharedLocation; // @synthesize sharedLocation=_sharedLocation;
@property(retain, nonatomic) UADefaultMessageCenter *sharedDefaultMessageCenter; // @synthesize sharedDefaultMessageCenter=_sharedDefaultMessageCenter;
@property(retain, nonatomic) UAInAppMessaging *sharedInAppMessaging; // @synthesize sharedInAppMessaging=_sharedInAppMessaging;
@property(retain, nonatomic) UAInbox *sharedInbox; // @synthesize sharedInbox=_sharedInbox;
@property(retain, nonatomic) UAUser *sharedInboxUser; // @synthesize sharedInboxUser=_sharedInboxUser;
@property(retain, nonatomic) UAPush *sharedPush; // @synthesize sharedPush=_sharedPush;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) id <UAJavaScriptDelegate> actionJSDelegate; // @synthesize actionJSDelegate=_actionJSDelegate;
@property(retain, nonatomic) UAChannelCapture *channelCapture; // @synthesize channelCapture=_channelCapture;
@property(retain, nonatomic) UAWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(nonatomic) __weak id <UAJavaScriptDelegate> jsDelegate; // @synthesize jsDelegate=_jsDelegate;
@property(nonatomic) _Bool remoteNotificationBackgroundModeEnabled; // @synthesize remoteNotificationBackgroundModeEnabled=_remoteNotificationBackgroundModeEnabled;
@property(retain, nonatomic) UAApplicationMetrics *applicationMetrics; // @synthesize applicationMetrics=_applicationMetrics;
@property(retain, nonatomic) UAActionRegistry *actionRegistry; // @synthesize actionRegistry=_actionRegistry;
@property(retain, nonatomic) UAAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) UAConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)validate;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2;

@end

