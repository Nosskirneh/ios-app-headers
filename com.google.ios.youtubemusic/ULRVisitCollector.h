//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "ULRCollector-Protocol.h"
#import "ULRMonitorable-Protocol.h"

@class CLLocationManager, NSString, ULRAnalyticsLogger, ULRLastVisitArrivalCache, ULRLocationEaterVisitArrivalCache, ULRLocationEaterVisitDepartureCache, ULRPowerObserver;
@protocol OS_dispatch_queue, ULRVisitCollectorDelegate><ULRMonitorableDelegate;

@interface ULRVisitCollector : NSObject <CLLocationManagerDelegate, ULRCollector, ULRMonitorable>
{
    CLLocationManager *_locationManager;
    ULRPowerObserver *_powerObserver;
    ULRAnalyticsLogger *_analyticsLogger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _visitCollectorAllowed;
    _Bool _started;
    _Bool _visitMonitoringEnabled;
    ULRLastVisitArrivalCache *_lastArrivalCache;
    ULRLocationEaterVisitArrivalCache *_eatenArrivalsCache;
    ULRLocationEaterVisitDepartureCache *_eatenDeparturesCache;
    id <ULRVisitCollectorDelegate><ULRMonitorableDelegate> _delegate;
}

+ (_Bool)isSupported;
@property(readonly, nonatomic) __weak id <ULRVisitCollectorDelegate><ULRMonitorableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearCache:(id)arg1;
- (void)reportEatenVisits;
- (void)disableVisitMonitoring;
- (void)enableVisitMonitoring;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)stopCollecting;
- (_Bool)startCollectingWithError:(id *)arg1;
- (_Bool)canCollect;
@property(readonly, nonatomic, getter=isCollecting) _Bool collecting;
- (void)updateMonitorState;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 workQueue:(id)arg3 powerObserver:(id)arg4 analyticsLogger:(id)arg5;
@property _Bool visitCollectorAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

