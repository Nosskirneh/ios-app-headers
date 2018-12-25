//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ActivityRecognitionActivityReceivedEvent, ApiCallEvent, ApplicationDidBecomeActiveEvent, ApplicationDidEnterBackgroundEvent, ApplicationDidFinishLaunchingEvent, ApplicationWillTerminateEvent, BarometerReadingEvent, BleScanCollectionBleScanEvent, BleScanCollectionCancelEvent, BleScanCollectionFinishEvent, BleScanCollectionStartEvent, BleScanEvent, BleScanTriggerEvent, BurstCancelAllEvent, BurstCancelEvent, BurstCompleteEvent, BurstPauseEvent, BurstPulseEvent, BurstRequestEvent, BurstStartEvent, BurstTriggerEvent, BurstUnpauseEvent, DeepStillChangedEvent, DeviceSettingsChangeEvent, DisableLocationHistoryEvent, DisableLocationReportingEvent, EaterGeofenceEvent, EaterLocationEvent, EaterVisitEvent, EnableLocationHistoryEvent, EnableLocationReportingEvent, ErrorEvent, ExpeditedLocationEvent, ExpeditedLocationRequestCompleteEvent, ExpeditedLocationRequestCreateEvent, ExpeditedLocationTriggerEvent, GeofenceEvent, GeofenceTriggerEvent, HeartbeatTriggerEvent, InitializationEvent, KeychainDeviceAddEvent, KeychainDeviceDeleteEvent, KeychainDeviceQueryEvent, KeychainDeviceUpdateEvent, KeychainIdentityAddEvent, KeychainIdentityDeleteEvent, KeychainIdentityQueryEvent, KeychainIdentityUpdateEvent, KeychainInterestAddEvent, KeychainInterestDeleteEvent, KeychainInterestQueryEvent, KeychainInterestUpdateEvent, KeychainKillRequestAddEvent, KeychainKillRequestDeleteEvent, KeychainKillRequestQueryEvent, KeychainKillRequestUpdateEvent, KeychainResponsibilityAddEvent, KeychainResponsibilityDeleteEvent, KeychainResponsibilityQueryEvent, KeychainResponsibilityUpdateEvent, KeychainRestrictionAddEvent, KeychainRestrictionDeleteEvent, KeychainRestrictionQueryEvent, KeychainRestrictionUpdateEvent, LocationAuthorizationStatusUpdateEvent, LocationCollectionCancelEvent, LocationCollectionFinishEvent, LocationCollectionLocationEvent, LocationCollectionStartEvent, LocationGroomingEvent, LocationReportUploadRequestEvent, LocationUpdateEvent, MotionCollectionCancelEvent, MotionCollectionFinishEvent, MotionCollectionStartEvent, OnboardingEnableLocationHistoryAndReportingEvent, PolicyComputerStateChangeEvent, RPCRequestEvent, RPCResponseEvent, RPCRetryEvent, SingleReporterDisavowalEvent, SingleReporterTakeoverEvent, SlcTriggerEvent, StorageAddEntryEvent, StorageClearEvent, StorageRemoveEntryEvent, TimingEvent, UlrEventMetadata, UlrInitializationFinishEvent, UlrInitializationStartEvent, UnkeyedArchivingEvent, UnkeyedUnarchivingEvent, VisitCollectionCancelEvent, VisitCollectionFinishEvent, VisitCollectionStartEvent, VisitCollectionVisitEvent, VisitEvent, VisitTriggerEvent, WifiScanEvent;

@interface UlrEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ActivityRecognitionActivityReceivedEvent *activityRecognitionActivityReceivedEvent; // @dynamic activityRecognitionActivityReceivedEvent;
@property(retain, nonatomic) ApiCallEvent *apiCallEvent; // @dynamic apiCallEvent;
@property(retain, nonatomic) ApplicationDidBecomeActiveEvent *applicationDidBecomeActiveEvent; // @dynamic applicationDidBecomeActiveEvent;
@property(retain, nonatomic) ApplicationDidEnterBackgroundEvent *applicationDidEnterBackgroundEvent; // @dynamic applicationDidEnterBackgroundEvent;
@property(retain, nonatomic) ApplicationDidFinishLaunchingEvent *applicationDidFinishLaunchingEvent; // @dynamic applicationDidFinishLaunchingEvent;
@property(retain, nonatomic) ApplicationWillTerminateEvent *applicationWillTerminateEvent; // @dynamic applicationWillTerminateEvent;
@property(retain, nonatomic) BarometerReadingEvent *barometerReadingEvent; // @dynamic barometerReadingEvent;
@property(retain, nonatomic) BleScanCollectionBleScanEvent *bleScanCollectionBleScanEvent; // @dynamic bleScanCollectionBleScanEvent;
@property(retain, nonatomic) BleScanCollectionCancelEvent *bleScanCollectionCancelEvent; // @dynamic bleScanCollectionCancelEvent;
@property(retain, nonatomic) BleScanCollectionFinishEvent *bleScanCollectionFinishEvent; // @dynamic bleScanCollectionFinishEvent;
@property(retain, nonatomic) BleScanCollectionStartEvent *bleScanCollectionStartEvent; // @dynamic bleScanCollectionStartEvent;
@property(retain, nonatomic) BleScanEvent *bleScanEvent; // @dynamic bleScanEvent;
@property(retain, nonatomic) BleScanTriggerEvent *bleScanTriggerEvent; // @dynamic bleScanTriggerEvent;
@property(retain, nonatomic) BurstCancelAllEvent *burstCancelAllEvent; // @dynamic burstCancelAllEvent;
@property(retain, nonatomic) BurstCancelEvent *burstCancelEvent; // @dynamic burstCancelEvent;
@property(retain, nonatomic) BurstCompleteEvent *burstCompleteEvent; // @dynamic burstCompleteEvent;
@property(retain, nonatomic) BurstPauseEvent *burstPauseEvent; // @dynamic burstPauseEvent;
@property(retain, nonatomic) BurstPulseEvent *burstPulseEvent; // @dynamic burstPulseEvent;
@property(retain, nonatomic) BurstRequestEvent *burstRequestEvent; // @dynamic burstRequestEvent;
@property(retain, nonatomic) BurstStartEvent *burstStartEvent; // @dynamic burstStartEvent;
@property(retain, nonatomic) BurstTriggerEvent *burstTriggerEvent; // @dynamic burstTriggerEvent;
@property(retain, nonatomic) BurstUnpauseEvent *burstUnpauseEvent; // @dynamic burstUnpauseEvent;
@property(retain, nonatomic) DeepStillChangedEvent *deepStillChangedEvent; // @dynamic deepStillChangedEvent;
@property(retain, nonatomic) DeviceSettingsChangeEvent *deviceSettingsChangeEvent; // @dynamic deviceSettingsChangeEvent;
@property(retain, nonatomic) DisableLocationHistoryEvent *disableLocationHistoryEvent; // @dynamic disableLocationHistoryEvent;
@property(retain, nonatomic) DisableLocationReportingEvent *disableLocationReportingEvent; // @dynamic disableLocationReportingEvent;
@property(retain, nonatomic) EaterGeofenceEvent *eaterGeofenceEvent; // @dynamic eaterGeofenceEvent;
@property(retain, nonatomic) EaterLocationEvent *eaterLocationEvent; // @dynamic eaterLocationEvent;
@property(retain, nonatomic) EaterVisitEvent *eaterVisitEvent; // @dynamic eaterVisitEvent;
@property(retain, nonatomic) EnableLocationHistoryEvent *enableLocationHistoryEvent; // @dynamic enableLocationHistoryEvent;
@property(retain, nonatomic) EnableLocationReportingEvent *enableLocationReportingEvent; // @dynamic enableLocationReportingEvent;
@property(retain, nonatomic) ErrorEvent *errorEvent; // @dynamic errorEvent;
@property(readonly, nonatomic) int eventOneOfCase; // @dynamic eventOneOfCase;
@property(retain, nonatomic) ExpeditedLocationEvent *expeditedLocationEvent; // @dynamic expeditedLocationEvent;
@property(retain, nonatomic) ExpeditedLocationRequestCompleteEvent *expeditedLocationRequestCompleteEvent; // @dynamic expeditedLocationRequestCompleteEvent;
@property(retain, nonatomic) ExpeditedLocationRequestCreateEvent *expeditedLocationRequestCreateEvent; // @dynamic expeditedLocationRequestCreateEvent;
@property(retain, nonatomic) ExpeditedLocationTriggerEvent *expeditedLocationTriggerEvent; // @dynamic expeditedLocationTriggerEvent;
@property(retain, nonatomic) GeofenceEvent *geofenceEvent; // @dynamic geofenceEvent;
@property(retain, nonatomic) GeofenceTriggerEvent *geofenceTriggerEvent; // @dynamic geofenceTriggerEvent;
@property(nonatomic) _Bool hasUlrEventMetadata; // @dynamic hasUlrEventMetadata;
@property(retain, nonatomic) HeartbeatTriggerEvent *heartbeatTriggerEvent; // @dynamic heartbeatTriggerEvent;
@property(retain, nonatomic) InitializationEvent *initializationEvent; // @dynamic initializationEvent;
@property(retain, nonatomic) UlrInitializationFinishEvent *initializationFinishEvent; // @dynamic initializationFinishEvent;
@property(retain, nonatomic) UlrInitializationStartEvent *initializationStartEvent; // @dynamic initializationStartEvent;
@property(retain, nonatomic) KeychainDeviceAddEvent *keychainDeviceAddEvent; // @dynamic keychainDeviceAddEvent;
@property(retain, nonatomic) KeychainDeviceDeleteEvent *keychainDeviceDeleteEvent; // @dynamic keychainDeviceDeleteEvent;
@property(retain, nonatomic) KeychainDeviceQueryEvent *keychainDeviceQueryEvent; // @dynamic keychainDeviceQueryEvent;
@property(retain, nonatomic) KeychainDeviceUpdateEvent *keychainDeviceUpdateEvent; // @dynamic keychainDeviceUpdateEvent;
@property(retain, nonatomic) KeychainIdentityAddEvent *keychainIdentityAddEvent; // @dynamic keychainIdentityAddEvent;
@property(retain, nonatomic) KeychainIdentityDeleteEvent *keychainIdentityDeleteEvent; // @dynamic keychainIdentityDeleteEvent;
@property(retain, nonatomic) KeychainIdentityQueryEvent *keychainIdentityQueryEvent; // @dynamic keychainIdentityQueryEvent;
@property(retain, nonatomic) KeychainIdentityUpdateEvent *keychainIdentityUpdateEvent; // @dynamic keychainIdentityUpdateEvent;
@property(retain, nonatomic) KeychainInterestAddEvent *keychainInterestAddEvent; // @dynamic keychainInterestAddEvent;
@property(retain, nonatomic) KeychainInterestDeleteEvent *keychainInterestDeleteEvent; // @dynamic keychainInterestDeleteEvent;
@property(retain, nonatomic) KeychainInterestQueryEvent *keychainInterestQueryEvent; // @dynamic keychainInterestQueryEvent;
@property(retain, nonatomic) KeychainInterestUpdateEvent *keychainInterestUpdateEvent; // @dynamic keychainInterestUpdateEvent;
@property(retain, nonatomic) KeychainKillRequestAddEvent *keychainKillRequestAddEvent; // @dynamic keychainKillRequestAddEvent;
@property(retain, nonatomic) KeychainKillRequestDeleteEvent *keychainKillRequestDeleteEvent; // @dynamic keychainKillRequestDeleteEvent;
@property(retain, nonatomic) KeychainKillRequestQueryEvent *keychainKillRequestQueryEvent; // @dynamic keychainKillRequestQueryEvent;
@property(retain, nonatomic) KeychainKillRequestUpdateEvent *keychainKillRequestUpdateEvent; // @dynamic keychainKillRequestUpdateEvent;
@property(retain, nonatomic) KeychainResponsibilityAddEvent *keychainResponsibilityAddEvent; // @dynamic keychainResponsibilityAddEvent;
@property(retain, nonatomic) KeychainResponsibilityDeleteEvent *keychainResponsibilityDeleteEvent; // @dynamic keychainResponsibilityDeleteEvent;
@property(retain, nonatomic) KeychainResponsibilityQueryEvent *keychainResponsibilityQueryEvent; // @dynamic keychainResponsibilityQueryEvent;
@property(retain, nonatomic) KeychainResponsibilityUpdateEvent *keychainResponsibilityUpdateEvent; // @dynamic keychainResponsibilityUpdateEvent;
@property(retain, nonatomic) KeychainRestrictionAddEvent *keychainRestrictionAddEvent; // @dynamic keychainRestrictionAddEvent;
@property(retain, nonatomic) KeychainRestrictionDeleteEvent *keychainRestrictionDeleteEvent; // @dynamic keychainRestrictionDeleteEvent;
@property(retain, nonatomic) KeychainRestrictionQueryEvent *keychainRestrictionQueryEvent; // @dynamic keychainRestrictionQueryEvent;
@property(retain, nonatomic) KeychainRestrictionUpdateEvent *keychainRestrictionUpdateEvent; // @dynamic keychainRestrictionUpdateEvent;
@property(retain, nonatomic) LocationAuthorizationStatusUpdateEvent *locationAuthorizationStatusUpdateEvent; // @dynamic locationAuthorizationStatusUpdateEvent;
@property(retain, nonatomic) LocationCollectionCancelEvent *locationCollectionCancelEvent; // @dynamic locationCollectionCancelEvent;
@property(retain, nonatomic) LocationCollectionFinishEvent *locationCollectionFinishEvent; // @dynamic locationCollectionFinishEvent;
@property(retain, nonatomic) LocationCollectionLocationEvent *locationCollectionLocationEvent; // @dynamic locationCollectionLocationEvent;
@property(retain, nonatomic) LocationCollectionStartEvent *locationCollectionStartEvent; // @dynamic locationCollectionStartEvent;
@property(retain, nonatomic) LocationGroomingEvent *locationGroomingEvent; // @dynamic locationGroomingEvent;
@property(retain, nonatomic) LocationReportUploadRequestEvent *locationReportUploadRequestEvent; // @dynamic locationReportUploadRequestEvent;
@property(retain, nonatomic) LocationUpdateEvent *locationUpdateEvent; // @dynamic locationUpdateEvent;
@property(retain, nonatomic) MotionCollectionCancelEvent *motionCollectionCancelEvent; // @dynamic motionCollectionCancelEvent;
@property(retain, nonatomic) MotionCollectionFinishEvent *motionCollectionFinishEvent; // @dynamic motionCollectionFinishEvent;
@property(retain, nonatomic) MotionCollectionStartEvent *motionCollectionStartEvent; // @dynamic motionCollectionStartEvent;
@property(retain, nonatomic) OnboardingEnableLocationHistoryAndReportingEvent *onboardingEnableLhLrEvent; // @dynamic onboardingEnableLhLrEvent;
@property(retain, nonatomic) PolicyComputerStateChangeEvent *policyComputerStateChangeEvent; // @dynamic policyComputerStateChangeEvent;
@property(retain, nonatomic) RPCRequestEvent *rpcRequestEvent; // @dynamic rpcRequestEvent;
@property(retain, nonatomic) RPCResponseEvent *rpcResponseEvent; // @dynamic rpcResponseEvent;
@property(retain, nonatomic) RPCRetryEvent *rpcRetryEvent; // @dynamic rpcRetryEvent;
@property(retain, nonatomic) SingleReporterDisavowalEvent *singleReporterDisavowalEvent; // @dynamic singleReporterDisavowalEvent;
@property(retain, nonatomic) SingleReporterTakeoverEvent *singleReporterTakeoverEvent; // @dynamic singleReporterTakeoverEvent;
@property(retain, nonatomic) SlcTriggerEvent *slcTriggerEvent; // @dynamic slcTriggerEvent;
@property(retain, nonatomic) StorageAddEntryEvent *storageAddEntryEvent; // @dynamic storageAddEntryEvent;
@property(retain, nonatomic) StorageClearEvent *storageClearEvent; // @dynamic storageClearEvent;
@property(retain, nonatomic) StorageRemoveEntryEvent *storageRemoveEntryEvent; // @dynamic storageRemoveEntryEvent;
@property(retain, nonatomic) TimingEvent *timingEvent; // @dynamic timingEvent;
@property(retain, nonatomic) UnkeyedUnarchivingEvent *ukeyedUnarchivingEvent; // @dynamic ukeyedUnarchivingEvent;
@property(retain, nonatomic) UlrEventMetadata *ulrEventMetadata; // @dynamic ulrEventMetadata;
@property(retain, nonatomic) UnkeyedArchivingEvent *unkeyedArchivingEvent; // @dynamic unkeyedArchivingEvent;
@property(retain, nonatomic) VisitCollectionCancelEvent *visitCollectionCancelEvent; // @dynamic visitCollectionCancelEvent;
@property(retain, nonatomic) VisitCollectionFinishEvent *visitCollectionFinishEvent; // @dynamic visitCollectionFinishEvent;
@property(retain, nonatomic) VisitCollectionStartEvent *visitCollectionStartEvent; // @dynamic visitCollectionStartEvent;
@property(retain, nonatomic) VisitCollectionVisitEvent *visitCollectionVisitEvent; // @dynamic visitCollectionVisitEvent;
@property(retain, nonatomic) VisitEvent *visitEvent; // @dynamic visitEvent;
@property(retain, nonatomic) VisitTriggerEvent *visitTriggerEvent; // @dynamic visitTriggerEvent;
@property(retain, nonatomic) WifiScanEvent *wifiScanEvent; // @dynamic wifiScanEvent;

@end

