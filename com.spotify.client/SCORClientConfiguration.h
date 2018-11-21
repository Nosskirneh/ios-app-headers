//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SCORClientConfiguration : NSObject
{
    shared_ptr_dd675cf3 _cppClientConfiguration;
    struct OwnedArray<ConfigurationListenerImpl, ComScore::DummyCriticalSection> *_listeners;
    NSObject *_lock;
    NSDictionary *_startLabels;
}

@property(copy, nonatomic) NSDictionary *startLabels; // @synthesize startLabels=_startLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)containsPersistentLabel:(id)arg1;
- (id)persistentLabelWithName:(id)arg1;
- (void)removeAllPersistentLabels;
- (void)removePersistentLabelWithName:(id)arg1;
- (void)setPersistentLabels:(id)arg1;
- (void)setPersistentLabelWithName:(id)arg1 value:(id)arg2;
- (id)persistentLabels;
@property(readonly) _Bool uncaughtExceptionTracking;
@property(readonly) _Bool httpRedirectCaching;
@property(readonly) _Bool secureTransmission;
@property(readonly) _Bool keepAliveMeasurement;
@property(readonly) int usagePropertiesAutoUpdateInterval;
@property(readonly) long long usagePropertiesAutoUpdateMode;
@property(readonly) NSArray *labelOrder;
@property(readonly) int liveTransmissionMode;
@property(readonly) long long cacheFlushingInterval;
@property(readonly) int cacheMeasurementExpiry;
@property(readonly) int cacheMinutesToRetry;
@property(readonly) int cacheMaxFlushesInARow;
@property(readonly) int cacheMaxBatchFiles;
@property(readonly) int cacheMaxMeasurements;
@property(readonly) long long offlineCacheMode;
@property(readonly) NSString *offlineFlushEndpointURL;
@property(readonly) _Bool vce;
@property(readonly) NSString *liveEndpointURL;
- (_Bool)containsStartLabel:(id)arg1;
@property(readonly) NSString *applicationVersion;
@property(readonly) NSString *applicationName;
- (void)setCppClientConfiguration:(shared_ptr_dd675cf3)arg1;
- (shared_ptr_dd675cf3)getCppClientConfiguration;
- (void)dealloc;
- (id)initWithCppClientConfiguration:(shared_ptr_dd675cf3)arg1;

@end

