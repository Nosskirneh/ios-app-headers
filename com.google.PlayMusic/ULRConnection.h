//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARIServiceProvider, NSMutableDictionary, SSOService, ULRBleScanRateUpdateCache, ULRBurstRequestCache, ULRCarrier, ULRExpeditedLocationRequestCache;
@protocol OS_dispatch_queue, ULRConnectionDelegate;

@interface ULRConnection : NSObject
{
    SSOService *_ssoService;
    ARIServiceProvider *_ariServiceProvider;
    NSMutableDictionary *_servicesByCacheIdentifier;
    long long _apiaryServer;
    ULRBleScanRateUpdateCache *_bleScanRateUpdateCache;
    ULRBurstRequestCache *_burstRequestCache;
    ULRExpeditedLocationRequestCache *_expeditedLocationRequestCache;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <ULRConnectionDelegate> _delegate;
    ULRCarrier *_carrier;
}

+ (id)scopes;
@property(retain, nonatomic) ULRCarrier *carrier; // @synthesize carrier=_carrier;
@property(readonly, nonatomic) __weak id <ULRConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)testsWaitForAllCacheIOBeforeDate:(id)arg1;
- (id)batchForLocations:(id)arg1;
- (id)batchRequestForIdentity:(id)arg1 locations:(id)arg2;
- (void)clearAllServices;
- (void)clearServicesForCacheIdentifier:(id)arg1;
- (void)removeIdentity:(id)arg1;
- (void)sendDataWithType:(id)arg1 data:(id)arg2 timestamp:(id)arg3 location:(id)arg4 identity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)reportLocations:(id)arg1 identity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableHistoryAndReportingForIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableHistoryForIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableHistoryForIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableReportsForIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableReportsForIdentity:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestServerSettingsForIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateServerSettings:(id)arg1 identity:(id)arg2 auditToken:(id)arg3 changedReporting:(_Bool)arg4 changedHistory:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)queryConfigurationForIdentity:(id)arg1 error:(id *)arg2;
- (id)deviceRestrictionForIdentity:(id)arg1;
- (id)devicePrettyName;
- (id)previousServerLegalCountryCodeForIdentity:(id)arg1;
- (id)mobileNetworkCode;
- (id)mobileCountryCode;
- (id)countryCode;
- (id)platform;
- (long long)NLPVersion;
- (id)settingsForSetQuery;
- (id)validateDevice:(id)arg1;
- (void)executeUserLocationQuery:(id)arg1 identity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)settingsChangeSource;
- (unsigned long long)addToLocationActivityDictionary:(id)arg1 activityType:(long long)arg2 confidence:(long long)arg3;
- (id)motionActivityReadingFromLocation:(id)arg1;
- (id)rateMetadataFromBleScanRateUpdate:(id)arg1;
- (id)rateMetadataFromBurstRequest:(id)arg1;
- (id)txPowerNormalizedTo1MeterForBeacon:(id)arg1;
- (id)apiaryStringForBeacon:(id)arg1;
- (id)bleSensorDataForBeacon:(id)arg1;
- (id)bleStrengthProtoForBeacon:(id)arg1;
- (id)scanReportForEddystoneTLMBeacon:(id)arg1;
- (id)scanReportForEddystoneIDBeacon:(id)arg1;
- (id)metadataForEddystoneTLMBeacon:(id)arg1;
- (id)metadataForEddystoneIDBeacon:(id)arg1;
- (id)metadataForBeacon:(id)arg1;
- (id)beaconMetadatasForLocation:(id)arg1;
- (id)expeditedLocationMetadataFromExpeditedLocationRequest:(id)arg1;
- (void)triggerQueryHandlerBlock:(CDUnknownBlockType)arg1 backgroundTask:(id)arg2 ticket:(id)arg3 object:(id)arg4 error:(id)arg5;
- (void)triggerSettingsHandlerBlock:(CDUnknownBlockType)arg1 backgroundTask:(id)arg2 settings:(id)arg3 error:(id)arg4;
@property long long apiaryServer;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 carrier:(id)arg3 ssoService:(id)arg4 ariServiceProvider:(id)arg5;

@end

