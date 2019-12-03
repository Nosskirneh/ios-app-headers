//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPerformanceMetricsViewLoggerFactory-Protocol.h"

@class NSHashTable, NSString, SPTPerformanceMetricsFeatureProperties;
@protocol OS_os_log, SPTEventSender, SPTLogCenter, SPTPerformanceKitUUIDProvider, SPTViewLoadSequenceTransport, SPTViewLoggerConnectionTypeProvider;

@interface SPTPerformanceMetricsViewLoggerFactoryImplementation : NSObject <SPTPerformanceMetricsViewLoggerFactory>
{
    id <SPTViewLoadSequenceTransport> _transport;
    id <SPTLogCenter> _logCenter;
    id <SPTEventSender> _eventSender;
    SPTPerformanceMetricsFeatureProperties *_remoteConfigurationProperties;
    id <SPTViewLoggerConnectionTypeProvider> _connectionTypeProvider;
    id <SPTPerformanceKitUUIDProvider> _uuidProvider;
    NSHashTable *_defaultObservers;
    NSObject<OS_os_log> *_instrumentationLog;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *instrumentationLog; // @synthesize instrumentationLog=_instrumentationLog;
@property(retain, nonatomic) NSHashTable *defaultObservers; // @synthesize defaultObservers=_defaultObservers;
@property(readonly, nonatomic) __weak id <SPTPerformanceKitUUIDProvider> uuidProvider; // @synthesize uuidProvider=_uuidProvider;
@property(readonly, nonatomic) __weak id <SPTViewLoggerConnectionTypeProvider> connectionTypeProvider; // @synthesize connectionTypeProvider=_connectionTypeProvider;
@property(readonly, nonatomic) SPTPerformanceMetricsFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)createViewLoggerForViewURI:(id)arg1;
@property(readonly, nonatomic) id <SPTViewLoadSequenceTransport> transport; // @synthesize transport=_transport;
- (void)removeDefaultObserver:(id)arg1;
- (void)addDefaultObserver:(id)arg1;
- (id)initWithLogCenter:(id)arg1 eventSender:(id)arg2 remoteConfigurationProperties:(id)arg3 connectionTypeProvider:(id)arg4 uuidProvider:(id)arg5 instrumentationLog:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

