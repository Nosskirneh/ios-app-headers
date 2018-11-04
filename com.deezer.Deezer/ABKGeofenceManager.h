//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class ABKManager, CLLocation, CLLocationManager, NSDate, NSMutableArray, NSString;

@interface ABKGeofenceManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _isGeofencesCollectionServerEnabled;
    _Bool _shouldRequestGeofencesOnLocationUpdate;
    _Bool _shouldRequestAuthorization;
    CLLocationManager *_locationManager;
    ABKManager *_appboyManager;
    double _minTimeSinceLastRequest;
    double _minTimeSinceLastReport;
    long long _maxNumToRegister;
    NSDate *_lastUpdate;
    NSDate *_lastReport;
    NSMutableArray *_monitoredGeofences;
    CLLocation *_locationForGeofenceRequest;
    NSObject *_geofenceManagerLock;
}

@property(retain) NSObject *geofenceManagerLock; // @synthesize geofenceManagerLock=_geofenceManagerLock;
@property(retain) CLLocation *locationForGeofenceRequest; // @synthesize locationForGeofenceRequest=_locationForGeofenceRequest;
@property(retain) NSMutableArray *monitoredGeofences; // @synthesize monitoredGeofences=_monitoredGeofences;
@property(retain, nonatomic) NSDate *lastReport; // @synthesize lastReport=_lastReport;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property _Bool shouldRequestAuthorization; // @synthesize shouldRequestAuthorization=_shouldRequestAuthorization;
@property long long maxNumToRegister; // @synthesize maxNumToRegister=_maxNumToRegister;
@property double minTimeSinceLastReport; // @synthesize minTimeSinceLastReport=_minTimeSinceLastReport;
@property double minTimeSinceLastRequest; // @synthesize minTimeSinceLastRequest=_minTimeSinceLastRequest;
@property _Bool shouldRequestGeofencesOnLocationUpdate; // @synthesize shouldRequestGeofencesOnLocationUpdate=_shouldRequestGeofencesOnLocationUpdate;
@property _Bool isGeofencesCollectionServerEnabled; // @synthesize isGeofencesCollectionServerEnabled=_isGeofencesCollectionServerEnabled;
@property(retain) ABKManager *appboyManager; // @synthesize appboyManager=_appboyManager;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)handleGeofenceEventWithIdentifier:(id)arg1 transitionType:(long long)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (id)findGeofenceWithGeofenceId:(id)arg1;
- (void)monitorGeofences;
- (void)dealloc;
- (void)registerClosestGeofencesWithGeofences:(id)arg1 toLimit:(long long)arg2;
- (void)unregisterCurrentAppboyGeofences;
- (long long)numAvailableGeofenceSpots;
- (void)registerGeofences:(id)arg1;
- (void)reportGeofence:(id)arg1;
- (void)reportGeofenceEvent:(id)arg1 ifEligibleForGeofence:(id)arg2;
- (void)singleLocationEventProvided:(id)arg1;
- (void)requestGeofenceRefresh;
- (void)setConfigValuesFromGeofencesServerConfig:(id)arg1;
- (void)changeConfigValuesFromNewGeofencesServerConfig:(id)arg1;
- (void)geofencesServerConfigUpdated:(id)arg1;
- (id)initWithServerConfig:(id)arg1 appboyManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

