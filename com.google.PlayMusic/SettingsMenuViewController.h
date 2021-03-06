//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MenuViewController.h"

#import "GHKViewControllerDelegate-Protocol.h"
#import "GPMSleepTimerDelegate-Protocol.h"
#import "OSSLicensesViewControllerDelegate-Protocol.h"

@class NITableViewActions, NSDateComponentsFormatter, NSIndexPath, NSString;

@interface SettingsMenuViewController : MenuViewController <GHKViewControllerDelegate, OSSLicensesViewControllerDelegate, GPMSleepTimerDelegate>
{
    NITableViewActions *_actions;
    int _menuElementIDCount;
    id _myDevicesMenu;
    NSIndexPath *_sleepTimerCellIndexPath;
    NSDateComponentsFormatter *_sleepTimerFormatter;
}

- (void).cxx_destruct;
- (void)deleteRecommendationHistory;
- (void)showDeleteRecommendationHistoryAlert;
- (id)sleepTimerCountdownStringForRoundedTimeInterval:(double)arg1;
- (id)sleepTimerTitle;
- (void)showSleepTimerAlert;
- (void)updateRemainingTimeInterval:(double)arg1;
- (void)navigateToViewController:(id)arg1;
- (void)exitHelpKitWithStatus:(long long)arg1;
- (long long)modalTransitionStyle;
- (long long)modalPresentationStyle;
- (void)doneTouched;
- (void)openSourceLicenses;
- (void)openHelpKit;
- (void)openLegacyHelp;
- (id)billingOrExpirationDateObject;
- (id)accountStatusObject;
- (id)openSourceObject;
- (id)helpObject;
- (void)logsDone:(id)arg1;
- (id)spoofNetworkInterfaceAsWWANObject;
- (id)carPlayLogObject;
- (id)forceGCMRegistrationObject;
- (id)forceCrashObject;
- (id)filterExplicitContentObject;
- (id)enableCastLoggingObject;
- (id)castAppIDsObject;
- (id)innerJamEndpointsObject;
- (id)streamAuthEndpointsObject;
- (id)apiaryEndpointsObject;
- (id)legalMenu;
- (void)signOut;
- (void)clearStreamCache;
- (id)clearCacheObject;
- (id)downloadManagerObject;
- (void)refreshData;
- (void)reloadEverything;
- (void)maybeReloadEverything;
- (id)parentalControlObject;
- (id)blockExplicitRadioObject;
- (id)cacheDuringPlaybackObject;
- (id)downloadQualityObject;
- (id)wifiStreamingQualityObject;
- (id)mobileStreamingQuality;
- (id)downloadViaWifiOnlyObject;
- (id)streamViaWifiOnlyObject;
- (id)lmarkObject;
- (id)versionObject;
- (id)logoutAccountObject;
- (id)testLocationConsentFlowObject;
- (id)privacyHelpCenterObject;
- (id)deleteLibraryObject;
- (id)deleteRecommendationHistoryObject;
- (id)locationObject;
- (id)activityControlsObject;
- (id)musicHistoryObject;
- (id)sleepTimerObject;
- (id)refreshApplicationData;
- (id)myDevicesObject;
- (id)userQuizData;
- (id)resetApplicationData;
- (void)loadSettingsModel;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

