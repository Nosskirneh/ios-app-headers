//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class ARNavigationControllerDelegateProxy, NSMutableDictionary, NSSet, NSString;

@interface ARAnalytics : NSObject <UINavigationControllerDelegate>
{
    ARNavigationControllerDelegateProxy *_proxyDelegate;
    NSMutableDictionary *_superProperties;
    NSMutableDictionary *_eventsDictionary;
    NSSet *_providers;
}

+ (void)finishTimingEvent:(id)arg1 withProperties:(id)arg2;
+ (void)finishTimingEvent:(id)arg1;
+ (void)startTimingEvent:(id)arg1;
+ (void)monitorNavigationController:(id)arg1;
+ (void)monitorNavigationViewController:(id)arg1;
+ (void)pageView:(id)arg1 withProperties:(id)arg2;
+ (void)pageView:(id)arg1;
+ (void)error:(id)arg1 withMessage:(id)arg2;
+ (void)error:(id)arg1;
+ (void)removeEventSuperProperties:(id)arg1;
+ (void)removeEventSuperProperty:(id)arg1;
+ (void)addEventSuperProperties:(id)arg1;
+ (void)event:(id)arg1 withProperties:(id)arg2;
+ (void)event:(id)arg1;
+ (void)incrementUserProperty:(id)arg1 byInt:(long long)arg2;
+ (void)setUserProperty:(id)arg1 toValue:(id)arg2;
+ (void)identifyUserWithID:(id)arg1 anonymousID:(id)arg2 andEmailAddress:(id)arg3;
+ (void)identifyUserWithID:(id)arg1 andEmailAddress:(id)arg2;
+ (void)setupAppboy;
+ (void)setupLeanplumWithAppId:(id)arg1 developmentKey:(id)arg2 productionKey:(id)arg3;
+ (void)setupLaunchKitWithAPIToken:(id)arg1;
+ (void)setupMobileAppTrackerWithAdvertiserID:(id)arg1 conversionKey:(id)arg2 allowedEvents:(id)arg3;
+ (void)setupAppseeWithAPIKey:(id)arg1;
+ (void)setupInstallTrackerWithApplicationID:(id)arg1;
+ (void)setupAdobeWithData:(id)arg1 otherSettings:(id)arg2;
+ (void)setupKeenWithProjectID:(id)arg1 andWriteKey:(id)arg2 andReadKey:(id)arg3;
+ (void)setupIntercomWithAppID:(id)arg1 apiKey:(id)arg2;
+ (void)setupSentryWithID:(id)arg1;
+ (void)setupSnowplowWithAddress:(id)arg1;
+ (void)setupBranchWithAPIKey:(id)arg1;
+ (void)setupAppsFlyerWithAppID:(id)arg1 devKey:(id)arg2;
+ (void)setupAdjustWithAppToken:(id)arg1 andConfigurationDelegate:(id)arg2;
+ (void)setupYandexMobileMetricaWithAPIKey:(id)arg1;
+ (void)setupSwrveWithAppID:(id)arg1 apiKey:(id)arg2;
+ (void)setupSegmentioWithWriteKey:(id)arg1 integrations:(id)arg2;
+ (void)setupLibratoWithEmail:(id)arg1 token:(id)arg2 prefix:(id)arg3;
+ (void)setupUMengAnalyticsIDWithAppkey:(id)arg1;
+ (void)setupChartbeatWithApplicationID:(id)arg1;
+ (void)setupHeapAnalyticsWithApplicationID:(id)arg1;
+ (void)setupParseAnalyticsWithApplicationID:(id)arg1 clientKey:(id)arg2;
+ (void)setupHockeyAppWithBetaID:(id)arg1 liveID:(id)arg2;
+ (void)setupHockeyAppWithBetaID:(id)arg1;
+ (void)setupAmplitudeWithAPIKey:(id)arg1;
+ (void)setupNewRelicWithAppToken:(id)arg1;
+ (void)setupTapstreamWithAccountName:(id)arg1 developerSecret:(id)arg2 config:(id)arg3;
+ (void)setupTapstreamWithAccountName:(id)arg1 developerSecret:(id)arg2;
+ (void)setupHelpshiftWithAppID:(id)arg1 domainName:(id)arg2 apiKey:(id)arg3;
+ (void)setupBugsnagWithAPIKey:(id)arg1;
+ (void)setupCountlyWithAppKey:(id)arg1 andHost:(id)arg2;
+ (void)setupCrittercismWithAppID:(id)arg1;
+ (void)setupKISSMetricsWithAPIKey:(id)arg1;
+ (void)setupLocalyticsWithAppKey:(id)arg1;
+ (void)setupFirebaseAnalytics;
+ (void)setupGoogleAnalyticsWithID:(id)arg1;
+ (void)setupFlurryWithAPIKey:(id)arg1;
+ (void)setupMixpanelWithToken:(id)arg1 andHost:(id)arg2;
+ (void)setupMixpanelWithToken:(id)arg1;
+ (void)setupFabricWithKits:(id)arg1;
+ (void)setupCrashlyticsWithAPIKey:(id)arg1;
+ (void)setupTestFlightWithAppToken:(id)arg1;
+ (id)providerInstanceOfClass:(Class)arg1;
+ (id)currentProviders;
+ (void)removeProvider:(id)arg1;
+ (void)setupProvider:(id)arg1;
+ (void)setupWithAnalytics:(id)arg1;
+ (void)logShouldPrintStdout:(_Bool)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSSet *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSMutableDictionary *eventsDictionary; // @synthesize eventsDictionary=_eventsDictionary;
@property(retain, nonatomic) NSMutableDictionary *superProperties; // @synthesize superProperties=_superProperties;
- (void).cxx_destruct;
- (void)iterateThroughProviders:(CDUnknownBlockType)arg1;
@property(readonly) ARNavigationControllerDelegateProxy *proxyDelegate;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

