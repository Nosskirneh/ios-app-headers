//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP3Ads29AdsFeatureFlagServiceProtocol_-Protocol.h"
#import "_TtP8Features26FeatureFlagServiceProtocol_-Protocol.h"

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FeatureFlagService : NSObject <_TtP8Features26FeatureFlagServiceProtocol_, _TtP3Ads29AdsFeatureFlagServiceProtocol_>
{
    NSArray *_providers;
    NSMutableDictionary *_loadedFeatureFlags;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
+ (_Bool)isDevVastErrorTrackingEnabled;
+ (_Bool)isDevForceUnrwappingImagesEnabled;
+ (_Bool)isDevErrorAudioAdParsingEnabled;
+ (_Bool)isDevIpiEnabled;
+ (_Bool)isDevPlayqueumanagerWithoutAdsEnabled;
+ (_Bool)isDevInstagramSharingLimitToMonetizedTracksEnabled;
+ (_Bool)isDevCollection2Enabled;
+ (_Bool)isDevFirebaseScreenTrackingEnabled;
+ (_Bool)isDevOfflineHighQualityEnabled;
+ (_Bool)isDevAutoQualityStreamingEnabled;
+ (_Bool)isDevInstagramStoriesEnabled;
+ (_Bool)isDevAdsLocalFrequencyCappingEnabled;
+ (_Bool)isDevTrackCommentsEnabled;
+ (_Bool)isDevDeduplicateVideoAdTrackerEventsEnabled;
+ (_Bool)isDevDeferredFetchAdMetadataEnabled;
+ (_Bool)isDevMyCollectionScrollToTopEnabled;
+ (_Bool)isDevMobilePlayPipelineEnabled;
+ (_Bool)isDevRegisterBuddybuildEnabled;
+ (_Bool)isDevDiscoveryPromotedTrackEnabled;
+ (_Bool)isDevShowNotificationBarEnabled;
+ (_Bool)isDevShinyOnboardingEnabled;
+ (_Bool)isDevReceiptSyncPatchEnabled;
+ (_Bool)isDevOfflineSyncMigrationEnabled;
+ (_Bool)isDevSponsoredSessionsEnabled;
+ (_Bool)isDevInlayAdsPositionExperimentEnabled;
+ (_Bool)isDevNativePrestitialsEnabled;
+ (_Bool)isDevJoinUsEnabled;
+ (_Bool)isDevPrefetchFollowingsEnabled;
+ (_Bool)isDevHelpCenterEnabled;
+ (_Bool)isDevUpsellInDiscoveryEnabled;
+ (_Bool)isDevPlaylistEditingEnabled;
+ (_Bool)isDevCollectionMainContextFetchEnabled;
+ (_Bool)isDevReceiptSyncEnabled;
+ (_Bool)isDevAcceptDeferredDeeplinksEnabled;
+ (_Bool)isDevDisablePlaylistPlaybuttonEnabled;
+ (_Bool)isDevApplicationShortuctsEnabled;
+ (_Bool)isDevSecondScreenEnabled;
+ (_Bool)isDevFlipperEnabled;
+ (_Bool)isDevFirebasePerformanceInstrumentationEnabled;
+ (_Bool)isDevFirebasePerformanceEnabled;
+ (_Bool)isDevPerformanceMeasurementEnabled;
+ (_Bool)isDevGdprSdksEnabled;
+ (_Bool)isDevParallelOperationsEnabled;
+ (_Bool)isDevCommentsInActionSheetEnabled;
+ (_Bool)isDevOfflineReplaySubjectEnabled;
+ (_Bool)isDevNewProfileEnabled;
+ (_Bool)isDevDarkModeEnabled;
+ (id)featureNames;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *loadedFeatureFlags; // @synthesize loadedFeatureFlags=_loadedFeatureFlags;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
- (void).cxx_destruct;
- (id)featureFlagProviders;
- (id)iOSActiveFeatureFlags;
- (void)resetLoadedFeatures;
- (id)featureFlags;
- (id)primaryValueForFeature:(id)arg1;
- (_Bool)isFeatureEnabled:(id)arg1;
- (id)initWithSerialQueue:(id)arg1 providers:(id)arg2;
- (id)initWithSerialQueue:(id)arg1;

@end

