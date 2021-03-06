//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SCORClientConfigurationBuilder : NSObject
{
    struct Builder {
        struct CriticalSection;
        struct clientConfigurationParams;
    } *_cppBuilder;
    _Bool _keepAliveMeasurement;
    _Bool _secureTransmission;
    _Bool _httpRedirectCaching;
    _Bool _uncaughtExceptionTracking;
    _Bool _vce;
    int _liveTransmissionMode;
    int _usagePropertiesAutoUpdateInterval;
    int _cacheMaxMeasurements;
    int _cacheMaxBatchFiles;
    int _cacheMaxFlushesInARow;
    int _cacheMinutesToRetry;
    int _cacheMeasurementExpiry;
    int _cacheFlushingInterval;
    NSString *_liveEndpointURL;
    NSString *_offlineFlushEndpointURL;
    long long _offlineCacheMode;
    NSDictionary *_persistentLabels;
    NSDictionary *_startLabels;
    NSArray *_labelOrder;
    NSString *_applicationName;
    NSString *_applicationVersion;
    long long _usagePropertiesAutoUpdateMode;
}

@property(nonatomic) _Bool vce; // @synthesize vce=_vce;
@property(nonatomic) _Bool uncaughtExceptionTracking; // @synthesize uncaughtExceptionTracking=_uncaughtExceptionTracking;
@property(nonatomic) _Bool httpRedirectCaching; // @synthesize httpRedirectCaching=_httpRedirectCaching;
@property(nonatomic) _Bool secureTransmission; // @synthesize secureTransmission=_secureTransmission;
@property(nonatomic) _Bool keepAliveMeasurement; // @synthesize keepAliveMeasurement=_keepAliveMeasurement;
@property(nonatomic) int cacheFlushingInterval; // @synthesize cacheFlushingInterval=_cacheFlushingInterval;
@property(nonatomic) int cacheMeasurementExpiry; // @synthesize cacheMeasurementExpiry=_cacheMeasurementExpiry;
@property(nonatomic) int cacheMinutesToRetry; // @synthesize cacheMinutesToRetry=_cacheMinutesToRetry;
@property(nonatomic) int cacheMaxFlushesInARow; // @synthesize cacheMaxFlushesInARow=_cacheMaxFlushesInARow;
@property(nonatomic) int cacheMaxBatchFiles; // @synthesize cacheMaxBatchFiles=_cacheMaxBatchFiles;
@property(nonatomic) int cacheMaxMeasurements; // @synthesize cacheMaxMeasurements=_cacheMaxMeasurements;
@property(nonatomic) int usagePropertiesAutoUpdateInterval; // @synthesize usagePropertiesAutoUpdateInterval=_usagePropertiesAutoUpdateInterval;
@property(nonatomic) long long usagePropertiesAutoUpdateMode; // @synthesize usagePropertiesAutoUpdateMode=_usagePropertiesAutoUpdateMode;
@property(copy) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy) NSArray *labelOrder; // @synthesize labelOrder=_labelOrder;
@property(copy) NSDictionary *startLabels; // @synthesize startLabels=_startLabels;
@property(copy) NSDictionary *persistentLabels; // @synthesize persistentLabels=_persistentLabels;
@property(nonatomic) long long offlineCacheMode; // @synthesize offlineCacheMode=_offlineCacheMode;
@property(nonatomic) int liveTransmissionMode; // @synthesize liveTransmissionMode=_liveTransmissionMode;
@property(copy) NSString *offlineFlushEndpointURL; // @synthesize offlineFlushEndpointURL=_offlineFlushEndpointURL;
@property(copy) NSString *liveEndpointURL; // @synthesize liveEndpointURL=_liveEndpointURL;
- (void).cxx_destruct;
- (id)persistentLabelWithName:(id)arg1;
- (void)setPersistentLabelWithName:(id)arg1 value:(id)arg2;
- (void)removeAllPersistentLabels;
- (void)removePersistentLabelWithName:(id)arg1;
- (struct Builder *)getCppBuilder;
- (void)setCppBuilder:(struct Builder *)arg1;
- (id)init;

@end

