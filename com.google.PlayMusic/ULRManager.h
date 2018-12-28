//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "ULRBeaconCollectorDelegate-Protocol.h"
#import "ULRBurstManagerDelegate-Protocol.h"
#import "ULRConnectionDelegate-Protocol.h"
#import "ULRExpeditedLocationManagerDelegate-Protocol.h"
#import "ULRLocationCollectorDelegate-Protocol.h"
#import "ULRManagerDeviceIDProvider-Protocol.h"
#import "ULRTriggerManagerDelegate-Protocol.h"
#import "ULRVisitCollectorDelegate-Protocol.h"
#import "ULRWiFiCollectorDelegate-Protocol.h"

@class ARIServiceProvider, CLLocationManager, NSArray, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PHTBreakpadDecorator, SSOService, ULRAnalyticsLogger, ULRBackgroundTask, ULRBeaconCollector, ULRBurstManager, ULRExpeditedLocationManager, ULRKeychain, ULRLocationCollector, ULRLocationEater, ULRMotionCollector, ULRPowerObserver, ULRServer, ULRTriggerManager, ULRVisitCollector, ULRWiFiCollector;
@protocol OS_dispatch_queue, ULRManagerDelegate, ULRMonitor;

@interface ULRManager : NSObject <CLLocationManagerDelegate, ULRLocationCollectorDelegate, ULRBurstManagerDelegate, ULRBeaconCollectorDelegate, ULRConnectionDelegate, ULRExpeditedLocationManagerDelegate, ULRTriggerManagerDelegate, ULRVisitCollectorDelegate, ULRWiFiCollectorDelegate, ULRManagerDeviceIDProvider>
{
    NSString *_identifyingURLScheme;
    ARIServiceProvider *_ariServiceProvider;
    SSOService *_ssoService;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSObject<OS_dispatch_queue> *_collectionQueue;
    ULRKeychain *_keychain;
    ULRTriggerManager *_triggerManager;
    ULRBurstManager *_burstManager;
    ULRExpeditedLocationManager *_expeditedLocationManager;
    ULRLocationCollector *_locationCollector;
    ULRBeaconCollector *_beaconCollector;
    ULRMotionCollector *_motionCollector;
    ULRVisitCollector *_visitCollector;
    ULRWiFiCollector *_wifiCollector;
    ULRServer *_ulrServer;
    ULRPowerObserver *_powerObserver;
    ULRLocationEater *_locationEater;
    long long _strategy;
    NSMutableDictionary *_reportableSSOIdentitiesByUserID;
    NSMutableArray *_pendingReportOperations;
    NSTimer *_pendingReportOpsTimer;
    ULRBackgroundTask *_pendingReportOpsBackgroundTask;
    _Bool _locationServicesAuthorizationNotificationInFlight;
    _Bool _motionActivityAuthorizationNotificationInFlight;
    NSLock *_monitorLock;
    id <ULRMonitor> _monitor;
    ULRAnalyticsLogger *_analyticsLogger;
    CLLocationManager *_locationManager;
    NSMutableSet *_pendingBeacons;
    NSMutableSet *_pendingWiFiNetworks;
    NSDate *_updateReportableSSOIdentitiesDeadlineDate;
    NSTimer *_updateReportableSSOIdentitiesDeadlineTimer;
    NSMutableDictionary *_inFlightSettingsRefreshOperations;
    NSMutableSet *_inFlightKillRequests;
    NSDate *_lastKeychainScrubDate;
    PHTBreakpadDecorator *_phenotypeBreakpadDecorator;
    id <ULRManagerDelegate> _delegate;
}

+ (void)mergeWiFiNetworks:(id)arg1 withPendingNetworks:(id)arg2;
+ (long long)applicationState;
+ (id)ULRScopes;
+ (_Bool)clearAllLocationCachesWithError:(id *)arg1;
+ (long long)strategy;
+ (_Bool)isMotionActivity:(id)arg1 relevantForLocation:(id)arg2;
+ (id)relevantMotionActivities:(id)arg1 forLocation:(id)arg2;
+ (void)clearAppInstallStateCache;
+ (long long)getSavedAppInstallStateForURLScheme:(id)arg1;
+ (void)saveAppInstallState:(long long)arg1 forURLScheme:(id)arg2;
+ (long long)installStateForApplicationWithURLScheme:(id)arg1 hostApplicationURLScheme:(id)arg2;
+ (void)warnForLanguageRequirements;
+ (void)warnForAppKeychainRequirements;
+ (_Bool)appMeetsBackgroundLocationRequirements;
+ (_Bool)appMeetsLocalizedResourceRequirements;
+ (_Bool)appCanQueryRequiredURLSchemes;
+ (_Bool)identifyingURLSchemeMeetsRequirements:(id)arg1;
+ (id)requiredQueryableIdentifyingURLSchemes;
+ (id)optionalQueryableIdentifyingURLSchemes;
+ (id)testInstalledIdentifyingURLSchemes;
+ (void)setTestInstalledIdentifyingURLSchemes:(id)arg1;
+ (void)resetFirstAppInstance;
+ (id)tryAgainLabel;
+ (id)locationReportingDisableSettingTitle;
+ (id)locationReportingEnableSettingTitle;
+ (id)locationReportingSettingTitle;
+ (id)locationHistoryDisableSettingTitle;
+ (id)locationHistoryEnableSettingTitle;
+ (id)locationHistorySettingTitle;
+ (id)locationSettingTitle;
+ (id)parentRestrictedLearnMoreLinkURL;
+ (id)parentRestrictedLearnMoreLinkLabel;
+ (id)restrictedUserLearnMoreLinkURL;
+ (id)restrictedUserLearnMoreLinkLabel;
+ (id)restrictedUserWarningMessage;
+ (id)restrictedUserWarningTitle;
+ (id)networkUnavailableLocationReportingWarningMessage;
+ (id)networkUnavailableLocationHistoryWarningMessage;
+ (id)networkUnavailableWarningTitle;
+ (id)locationReportingDisabledWarningMessage;
+ (id)locationReportingDisabledWarningTitle;
+ (id)locationHistoryDisabledWarningMessage;
+ (id)locationHistoryDisabledWarningTitle;
+ (id)locationServicesUnavailableLearnMoreLinkURL;
+ (id)locationServicesUnavailableLearnMoreLinkLabel;
+ (id)locationServicesUnavailableWarningMessage;
+ (id)locationServicesUnavailableWarningTitle;
+ (id)unknownFailureWarningMessage;
+ (id)unknownFailureWarningTitle;
+ (id)disableReportingDialogCancelButtonLabel;
+ (id)disableReportingDialogOKButtonLabel;
+ (id)disableReportingDialogMessage;
+ (id)disableReportingDialogTitleForSSOIdentity:(id)arg1;
+ (id)disableHistoryDialogCancelButtonLabel;
+ (id)disableHistoryDialogOKButtonLabel;
+ (id)disableHistoryDialogMessage;
+ (id)disableHistoryDialogTitleForSSOIdentity:(id)arg1;
+ (id)locationReportingConsentTextLinkURL;
+ (id)locationHistoryConsentTextLinkURL;
+ (id)onboardingFlowConsentTextLinkURL;
+ (id)onboardingFlowLearnMoreLinkLabel;
+ (id)locationReportingConsentTextWithURLRange:(struct _NSRange *)arg1;
+ (id)locationHistoryConsentTextWithURLRange:(struct _NSRange *)arg1;
+ (id)onboardingFlowConsentTextWithURLRange:(struct _NSRange *)arg1;
+ (id)locationHistoryLinkTextWithKey:(id)arg1 urlRange:(struct _NSRange *)arg2;
+ (id)localizedULRStringForKey:(id)arg1 linkString:(id)arg2 urlRange:(struct _NSRange *)arg3;
+ (id)identityLocalizedULRStringForKey:(id)arg1 identity:(id)arg2;
+ (id)deviceLocalizedULRStringForKey:(id)arg1;
+ (id)localizedULRStringForKey:(id)arg1;
+ (id)locationReportingTitleForCurrentDevice;
+ (id)locationHistorySettingsTitleForSSOIdentity:(id)arg1;
+ (id)parentRestrictionConsentText;
+ (id)locationHistoryLongConsentText;
+ (id)locationHistoryShortConsentText;
+ (id)deviceLastReportedFormat;
+ (id)manageLocationHistoryButtonLabel;
+ (id)allDevicesForThisAccountLinkLabel;
+ (id)learnMoreLinkLabel;
+ (id)currentUserLabel;
+ (id)currentDeviceLabel;
+ (id)locationHistorySwitchOffLabel;
+ (id)locationHistorySwitchOnLabel;
+ (id)alertOKButtonLabel;
@property(nonatomic) __weak id <ULRManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationHistorySettingsChanged:(id)arg1;
- (void)requestReportingStateAndRestrictionsForSSOIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)wifiCollector:(id)arg1 didCollectWiFiNetworks:(id)arg2;
- (void)visitCollector:(id)arg1 arrivedLocation:(id)arg2 departedLocation:(id)arg3;
- (void)beaconCollector:(id)arg1 didCollectBeacons:(id)arg2;
- (void)locationCollector:(id)arg1 didFailToCollectAnExpeditedLocationWithError:(id)arg2;
- (void)locationCollector:(id)arg1 didCollectLocations:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)expeditedLocationManagerDidCreateExpeditedLocationRequest:(id)arg1;
- (void)burstManagerDidTrigger:(id)arg1;
- (void)triggerManager:(id)arg1 didReceiveBeaconTrigger:(id)arg2;
- (void)triggerManagerDidTrigger:(id)arg1;
- (id)connection:(id)arg1 deviceRestrictionForIdentity:(id)arg2;
- (void)registerWithPhenotype;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (int)currentDeviceIDForSSOIdentity:(id)arg1 error:(id *)arg2;
- (void)expirePendingWiFiNetworks;
- (void)expirePendingBeacons;
- (void)reportLocations:(id)arg1;
- (void)reportCachedLocationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dispatchPendingReportOperations;
- (void)dispatchPendingReportOperationsOnManagerQueue:(id)arg1;
- (void)updateReportingStateOnTheManagerThread;
- (id)updateReportingState:(id *)arg1;
- (void)shutdownReportingStoppingTriggers:(_Bool)arg1 disableBursting:(_Bool)arg2 cancelBursts:(_Bool)arg3 stopCollectors:(_Bool)arg4 sendPendingReports:(_Bool)arg5 disavowResponsibility:(_Bool)arg6 clearCaches:(_Bool)arg7;
- (_Bool)takeOverFromSensorCapabilitiesWithMotionActivity:(long long)arg1 bleScanner:(long long)arg2 lastForegroundActivity:(id)arg3 priorResponsibility:(id)arg4;
- (unsigned long long)sensorCapabilityScoreWithMotionActivity:(long long)arg1 bleScanner:(long long)arg2;
- (_Bool)assumeResponsibilityForIdentity:(id)arg1 force:(_Bool)arg2;
- (id)reportableIdentityForIdentity:(id)arg1;
- (id)currentReportingIdentities;
- (long long)immediateReportingEligibilityForIdentity:(id)arg1 age:(id *)arg2;
- (long long)immediateHistoryStateForIdentity:(id)arg1 age:(id *)arg2;
- (long long)immediateReportingStateForIdentity:(id)arg1 age:(id *)arg2;
- (void)setStrategy:(long long)arg1;
- (void)onboardingFlowEnableHistoryAndReportingForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onboardingFlowEnableHistoryAndReportingForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableLocationHistoryForSSOIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableLocationHistoryForSSOIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableLocationHistoryForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enableLocationHistoryForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableLocationReportingForSSOIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableLocationReportingForSSOIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableLocationReportingForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enableLocationReportingForSSOIdentity:(id)arg1 userConsented:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestReportingEligibilityForSSOIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestReportingStateForSSOIdentity:(id)arg1 forceRequest:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestReportingStateForSSOIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setReportableSSOIdentities:(id)arg1 error:(id *)arg2;
- (_Bool)updateReportableSSOIdentities:(id)arg1 error:(id *)arg2;
- (void)allowUserMotionActivityAccess;
- (void)allowUserLocationAccess;
- (void)triggerEligibilityRequestCompletionHandler:(CDUnknownBlockType)arg1 eligibility:(long long)arg2 error:(id)arg3;
- (void)triggerStateRequestCompletionHandler:(CDUnknownBlockType)arg1 reportingState:(long long)arg2 historyState:(long long)arg3 error:(id)arg4;
- (void)triggerErrorCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)cleanupApplicationStateForIdentity:(id)arg1;
- (void)cleanupApplicationStateForSSOIdentity:(id)arg1;
- (void)honorOutstandingKillRequest:(id)arg1;
- (void)refreshSettingsForIdentity:(id)arg1;
- (id)updateKeychainForIdentity:(id)arg1 serverSettings:(id)arg2;
- (void)scrubCachesMissingFromReportingIdentities:(id)arg1;
- (void)scrubKeychain;
- (id)updateReportableSSOIdentities:(id)arg1;
- (void)ssoIdentitiesChanged;
- (void)ssoIdentitiesChangeNotification:(id)arg1;
- (void)ssoIdentitiesUnsetDeadlineExceeded;
- (void)ssoIdentitiesUnsetDeadlineExceededOnManagerQueue:(id)arg1;
@property long long internalApiaryServer;
- (void)shutdown;
- (void)dealloc;
- (void)createLocationManager;
- (id)initWithIdentifyingURLScheme:(id)arg1 delegate:(id)arg2 ssoService:(id)arg3 ariServiceProvider:(id)arg4 carrier:(id)arg5;
- (id)initWithIdentifyingURLScheme:(id)arg1 delegate:(id)arg2 ssoService:(id)arg3 ariServiceProvider:(id)arg4;
- (id)initWithIdentifyingURLScheme:(id)arg1 ssoService:(id)arg2 ariServiceProvider:(id)arg3;
- (_Bool)cancelAllReportingBurstsWithError:(id *)arg1;
- (_Bool)cancelReportingBurst:(id)arg1 error:(id *)arg2;
- (id)reportingBurstWithDuration:(double)arg1 reportInterval:(double)arg2 error:(id *)arg3;
- (id)reportingBurstWithDuration:(double)arg1 reportInterval:(double)arg2 reason:(id)arg3 error:(id *)arg4;
- (_Bool)cancelAllBurstsWithError:(id *)arg1;
- (_Bool)cancelBurst:(id)arg1 error:(id *)arg2;
- (id)burstRequests;
- (id)startBurstingWithDuration:(double)arg1 interval:(double)arg2 reason:(id)arg3 error:(id *)arg4;
- (void)stopVisitCollector;
- (void)startVisitCollector;
- (void)stopCollectors;
- (_Bool)startCollectorsWithError:(id *)arg1;
- (_Bool)takeReportingResponsibilityForSSOIdentity:(id)arg1;
- (_Bool)isResponsibleForReportingSSOIdentity:(id)arg1;
- (_Bool)couldBeResponsibleForSSOIdentity:(id)arg1;
- (id)reportingSSOIdentities;
- (void)fetchReportingEnabledSSOIdentities:(CDUnknownBlockType)arg1;
@property(readonly) ULRServer *ulrServer;
@property(readonly) ULRVisitCollector *visitCollector;
@property(readonly) ULRMotionCollector *motionCollector;
@property(readonly) ULRBeaconCollector *beaconCollector;
@property(readonly) ULRLocationCollector *locationCollector;
@property(readonly) ULRTriggerManager *triggerManager;
@property(readonly, nonatomic) NSArray *logFileURLs;
@property(nonatomic, getter=isLoggingDebugToConsole) _Bool logDebugToConsole;
- (void)clearLogFile;
@property(nonatomic, getter=isLoggingToFile) _Bool logToFile;
@property _Bool useStagingServer;
@property long long apiaryServer;
- (_Bool)requestExpeditedLocationReportWithLocationCollectionTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestExpeditedLocationReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)requestExpeditedLocationReportWithReason:(id)arg1 locationCollectionTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)requestExpeditedLocationReportWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)immediateIdentityForIdentity:(id)arg1;
- (void)scheduleLocationServicesAuthorizationNotification;
@property(nonatomic) __weak id <ULRMonitor> monitor;
- (id)motionActivitiesForLocations:(id)arg1;
- (void)scheduleMotionActivityAuthorizationNotification;
- (_Bool)isFirstAppInstance;
- (id)controllingDeviceRestrictionForIdentity:(id)arg1 error:(id *)arg2;
- (void)exportDeviceRestrictionsForIdentity:(id)arg1;
- (void)refreshRestrictionsForIdentity:(id)arg1 errorCompletionHandler:(CDUnknownBlockType)arg2 refreshCompletionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) ULRKeychain *keychain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

