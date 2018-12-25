//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBUInt64Array, NSMutableArray, NSString;

@interface YTIInnerTubeUploadsConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidEnableLiveFiltersDogfood; // @dynamic androidEnableLiveFiltersDogfood;
@property(nonatomic) _Bool audioSwapEnabled; // @dynamic audioSwapEnabled;
@property(nonatomic) _Bool bFrameSupportEnabled; // @dynamic bFrameSupportEnabled;
@property(nonatomic) _Bool backgroundUploadsEnabled; // @dynamic backgroundUploadsEnabled;
@property(nonatomic) _Bool cameoEnabled; // @dynamic cameoEnabled;
@property(nonatomic) _Bool cellularUploadDialogEnabled; // @dynamic cellularUploadDialogEnabled;
@property(nonatomic) _Bool clientTranscodingEnabled; // @dynamic clientTranscodingEnabled;
@property(retain, nonatomic) GPBUInt64Array *createReelItemsRetryPatternValuesArray; // @dynamic createReelItemsRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long createReelItemsRetryPatternValuesArray_Count; // @dynamic createReelItemsRetryPatternValuesArray_Count;
@property(nonatomic) _Bool creatorFabEnabled; // @dynamic creatorFabEnabled;
@property(nonatomic) _Bool cronetAsyncInterfaceEnabled; // @dynamic cronetAsyncInterfaceEnabled;
@property(nonatomic) _Bool cronetEnabled; // @dynamic cronetEnabled;
@property(copy, nonatomic) NSString *cronetExperimentalOptions; // @dynamic cronetExperimentalOptions;
@property(nonatomic) _Bool cronetHTTP2Enabled; // @dynamic cronetHTTP2Enabled;
@property(nonatomic) _Bool cronetQuicEnabled; // @dynamic cronetQuicEnabled;
@property(retain, nonatomic) GPBEnumArray *cronetQuicEnabledConnectionTypesArray; // @dynamic cronetQuicEnabledConnectionTypesArray;
@property(readonly, nonatomic) unsigned long long cronetQuicEnabledConnectionTypesArray_Count; // @dynamic cronetQuicEnabledConnectionTypesArray_Count;
@property(nonatomic) int defaultClientTranscodeQuality; // @dynamic defaultClientTranscodeQuality;
@property(retain, nonatomic) GPBUInt64Array *defaultRetryPatternsArray; // @dynamic defaultRetryPatternsArray;
@property(readonly, nonatomic) unsigned long long defaultRetryPatternsArray_Count; // @dynamic defaultRetryPatternsArray_Count;
@property(nonatomic) _Bool drishtiEffectsEnabled; // @dynamic drishtiEffectsEnabled;
@property(nonatomic) int ecatcherEditSendRate; // @dynamic ecatcherEditSendRate;
@property(nonatomic) int ecatcherUploadSendRate; // @dynamic ecatcherUploadSendRate;
@property(nonatomic) _Bool extractorSampleSourceEnabled; // @dynamic extractorSampleSourceEnabled;
@property(nonatomic) _Bool fastShareFromPhotos; // @dynamic fastShareFromPhotos;
@property(retain, nonatomic) GPBUInt64Array *feedbackPollingRetryPatternValuesArray; // @dynamic feedbackPollingRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long feedbackPollingRetryPatternValuesArray_Count; // @dynamic feedbackPollingRetryPatternValuesArray_Count;
@property(nonatomic) _Bool filterOnlyEditPassthroughEnabled; // @dynamic filterOnlyEditPassthroughEnabled;
@property(nonatomic) _Bool foregroundUploadServiceEnabled; // @dynamic foregroundUploadServiceEnabled;
@property(nonatomic) _Bool foregroundUploadServiceHideBytesTransferred; // @dynamic foregroundUploadServiceHideBytesTransferred;
@property(nonatomic) _Bool foregroundUploadServiceHideProgressPct; // @dynamic foregroundUploadServiceHideProgressPct;
@property(nonatomic) _Bool foregroundUploadServiceHideStartTime; // @dynamic foregroundUploadServiceHideStartTime;
@property(copy, nonatomic) NSString *frontendUploadIdPrefix; // @dynamic frontendUploadIdPrefix;
@property(nonatomic) _Bool hasAndroidEnableLiveFiltersDogfood; // @dynamic hasAndroidEnableLiveFiltersDogfood;
@property(nonatomic) _Bool hasAudioSwapEnabled; // @dynamic hasAudioSwapEnabled;
@property(nonatomic) _Bool hasBFrameSupportEnabled; // @dynamic hasBFrameSupportEnabled;
@property(nonatomic) _Bool hasBackgroundUploadsEnabled; // @dynamic hasBackgroundUploadsEnabled;
@property(nonatomic) _Bool hasCameoEnabled; // @dynamic hasCameoEnabled;
@property(nonatomic) _Bool hasCellularUploadDialogEnabled; // @dynamic hasCellularUploadDialogEnabled;
@property(nonatomic) _Bool hasClientTranscodingEnabled; // @dynamic hasClientTranscodingEnabled;
@property(nonatomic) _Bool hasCreatorFabEnabled; // @dynamic hasCreatorFabEnabled;
@property(nonatomic) _Bool hasCronetAsyncInterfaceEnabled; // @dynamic hasCronetAsyncInterfaceEnabled;
@property(nonatomic) _Bool hasCronetEnabled; // @dynamic hasCronetEnabled;
@property(nonatomic) _Bool hasCronetExperimentalOptions; // @dynamic hasCronetExperimentalOptions;
@property(nonatomic) _Bool hasCronetHTTP2Enabled; // @dynamic hasCronetHTTP2Enabled;
@property(nonatomic) _Bool hasCronetQuicEnabled; // @dynamic hasCronetQuicEnabled;
@property(nonatomic) _Bool hasDefaultClientTranscodeQuality; // @dynamic hasDefaultClientTranscodeQuality;
@property(nonatomic) _Bool hasDrishtiEffectsEnabled; // @dynamic hasDrishtiEffectsEnabled;
@property(nonatomic) _Bool hasEcatcherEditSendRate; // @dynamic hasEcatcherEditSendRate;
@property(nonatomic) _Bool hasEcatcherUploadSendRate; // @dynamic hasEcatcherUploadSendRate;
@property(nonatomic) _Bool hasExtractorSampleSourceEnabled; // @dynamic hasExtractorSampleSourceEnabled;
@property(nonatomic) _Bool hasFastShareFromPhotos; // @dynamic hasFastShareFromPhotos;
@property(nonatomic) _Bool hasFilterOnlyEditPassthroughEnabled; // @dynamic hasFilterOnlyEditPassthroughEnabled;
@property(nonatomic) _Bool hasForegroundUploadServiceEnabled; // @dynamic hasForegroundUploadServiceEnabled;
@property(nonatomic) _Bool hasForegroundUploadServiceHideBytesTransferred; // @dynamic hasForegroundUploadServiceHideBytesTransferred;
@property(nonatomic) _Bool hasForegroundUploadServiceHideProgressPct; // @dynamic hasForegroundUploadServiceHideProgressPct;
@property(nonatomic) _Bool hasForegroundUploadServiceHideStartTime; // @dynamic hasForegroundUploadServiceHideStartTime;
@property(nonatomic) _Bool hasFrontendUploadIdPrefix; // @dynamic hasFrontendUploadIdPrefix;
@property(nonatomic) _Bool hasInnertubeUploadsEnabled; // @dynamic hasInnertubeUploadsEnabled;
@property(nonatomic) _Bool hasIosThumbnailEditorEnabled; // @dynamic hasIosThumbnailEditorEnabled;
@property(nonatomic) _Bool hasIosUniversalTopbarUploadEnabled; // @dynamic hasIosUniversalTopbarUploadEnabled;
@property(nonatomic) _Bool hasIosUsePhotosFramework; // @dynamic hasIosUsePhotosFramework;
@property(nonatomic) _Bool hasIsDefaultMobileResolution720P; // @dynamic hasIsDefaultMobileResolution720P;
@property(nonatomic) _Bool hasLiveVideoFiltersEnabled; // @dynamic hasLiveVideoFiltersEnabled;
@property(nonatomic) _Bool hasMaxHardwareDecoders; // @dynamic hasMaxHardwareDecoders;
@property(nonatomic) _Bool hasMobilePublishImprovementsEnabled; // @dynamic hasMobilePublishImprovementsEnabled;
@property(nonatomic) _Bool hasMoovAtomRelocationEnabled; // @dynamic hasMoovAtomRelocationEnabled;
@property(nonatomic) _Bool hasReelToReelNavigationEnabled; // @dynamic hasReelToReelNavigationEnabled;
@property(nonatomic) _Bool hasReelsAllowedPrebufferLength; // @dynamic hasReelsAllowedPrebufferLength;
@property(nonatomic) _Bool hasScottyTransferLargeChunks; // @dynamic hasScottyTransferLargeChunks;
@property(nonatomic) _Bool hasScottyTransferNoChunks; // @dynamic hasScottyTransferNoChunks;
@property(nonatomic) _Bool hasScottyUploadURL; // @dynamic hasScottyUploadURL;
@property(nonatomic) _Bool hasTermsOfServiceEnabled; // @dynamic hasTermsOfServiceEnabled;
@property(nonatomic) _Bool hasTransferIdleTimeoutMillis; // @dynamic hasTransferIdleTimeoutMillis;
@property(nonatomic) _Bool hasUnifiedProgressBarEnabled; // @dynamic hasUnifiedProgressBarEnabled;
@property(nonatomic) _Bool hasUseAlternateRecorder; // @dynamic hasUseAlternateRecorder;
@property(nonatomic) _Bool hasVideoEditingEnabled; // @dynamic hasVideoEditingEnabled;
@property(nonatomic) _Bool hasVideoFiltersEnabled; // @dynamic hasVideoFiltersEnabled;
@property(nonatomic) _Bool hasVideoFiltersWithBFrameEnabled; // @dynamic hasVideoFiltersWithBFrameEnabled;
@property(nonatomic) _Bool innertubeUploadsEnabled; // @dynamic innertubeUploadsEnabled;
@property(nonatomic) _Bool iosThumbnailEditorEnabled; // @dynamic iosThumbnailEditorEnabled;
@property(nonatomic) _Bool iosUniversalTopbarUploadEnabled; // @dynamic iosUniversalTopbarUploadEnabled;
@property(nonatomic) _Bool iosUsePhotosFramework; // @dynamic iosUsePhotosFramework;
@property(nonatomic) _Bool isDefaultMobileResolution720P; // @dynamic isDefaultMobileResolution720P;
@property(retain, nonatomic) GPBUInt64Array *lightweightRegistrationRetryPatternsArray; // @dynamic lightweightRegistrationRetryPatternsArray;
@property(readonly, nonatomic) unsigned long long lightweightRegistrationRetryPatternsArray_Count; // @dynamic lightweightRegistrationRetryPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *liveVideoFiltersArray; // @dynamic liveVideoFiltersArray;
@property(readonly, nonatomic) unsigned long long liveVideoFiltersArray_Count; // @dynamic liveVideoFiltersArray_Count;
@property(nonatomic) _Bool liveVideoFiltersEnabled; // @dynamic liveVideoFiltersEnabled;
@property(nonatomic) int maxHardwareDecoders; // @dynamic maxHardwareDecoders;
@property(retain, nonatomic) GPBUInt64Array *metadataSavingRetryPatternValuesArray; // @dynamic metadataSavingRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long metadataSavingRetryPatternValuesArray_Count; // @dynamic metadataSavingRetryPatternValuesArray_Count;
@property(nonatomic) _Bool mobilePublishImprovementsEnabled; // @dynamic mobilePublishImprovementsEnabled;
@property(nonatomic) _Bool moovAtomRelocationEnabled; // @dynamic moovAtomRelocationEnabled;
@property(retain, nonatomic) GPBUInt64Array *processVideoRetryPatternValuesArray; // @dynamic processVideoRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long processVideoRetryPatternValuesArray_Count; // @dynamic processVideoRetryPatternValuesArray_Count;
@property(nonatomic) _Bool reelToReelNavigationEnabled; // @dynamic reelToReelNavigationEnabled;
@property(nonatomic) int reelsAllowedPrebufferLength; // @dynamic reelsAllowedPrebufferLength;
@property(nonatomic) _Bool scottyTransferLargeChunks; // @dynamic scottyTransferLargeChunks;
@property(nonatomic) _Bool scottyTransferNoChunks; // @dynamic scottyTransferNoChunks;
@property(retain, nonatomic) GPBUInt64Array *scottyTransferRetryPatternValuesArray; // @dynamic scottyTransferRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long scottyTransferRetryPatternValuesArray_Count; // @dynamic scottyTransferRetryPatternValuesArray_Count;
@property(copy, nonatomic) NSString *scottyUploadURL; // @dynamic scottyUploadURL;
@property(nonatomic) _Bool termsOfServiceEnabled; // @dynamic termsOfServiceEnabled;
@property(nonatomic) unsigned long long transferIdleTimeoutMillis; // @dynamic transferIdleTimeoutMillis;
@property(nonatomic) _Bool unifiedProgressBarEnabled; // @dynamic unifiedProgressBarEnabled;
@property(nonatomic) _Bool useAlternateRecorder; // @dynamic useAlternateRecorder;
@property(retain, nonatomic) GPBUInt64Array *videoCreationRetryPatternValuesArray; // @dynamic videoCreationRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long videoCreationRetryPatternValuesArray_Count; // @dynamic videoCreationRetryPatternValuesArray_Count;
@property(retain, nonatomic) GPBUInt64Array *videoDeletionRetryPatternValuesArray; // @dynamic videoDeletionRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long videoDeletionRetryPatternValuesArray_Count; // @dynamic videoDeletionRetryPatternValuesArray_Count;
@property(nonatomic) _Bool videoEditingEnabled; // @dynamic videoEditingEnabled;
@property(retain, nonatomic) NSMutableArray *videoFiltersArray; // @dynamic videoFiltersArray;
@property(readonly, nonatomic) unsigned long long videoFiltersArray_Count; // @dynamic videoFiltersArray_Count;
@property(nonatomic) _Bool videoFiltersEnabled; // @dynamic videoFiltersEnabled;
@property(nonatomic) _Bool videoFiltersWithBFrameEnabled; // @dynamic videoFiltersWithBFrameEnabled;
@property(retain, nonatomic) GPBUInt64Array *videoPublishingRetryPatternValuesArray; // @dynamic videoPublishingRetryPatternValuesArray;
@property(readonly, nonatomic) unsigned long long videoPublishingRetryPatternValuesArray_Count; // @dynamic videoPublishingRetryPatternValuesArray_Count;

@end

