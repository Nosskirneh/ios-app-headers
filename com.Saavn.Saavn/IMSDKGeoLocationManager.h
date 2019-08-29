//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface IMSDKGeoLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationServicesEnabled;
    CLLocationManager *_locationMgr;
    NSString *_telemetryComponent;
}

+ (id)locationAuthorizationString;
@property(retain, nonatomic) NSString *telemetryComponent; // @synthesize telemetryComponent=_telemetryComponent;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
@property(retain, nonatomic) CLLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
- (void).cxx_destruct;
- (void)clearLocation;
- (id)getCollectedLocation;
- (void)setCollectedLocation:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)updateLocation;
- (void)stopLocationTracking;
- (void)startLocationTracking;
- (void)dealloc;
- (id)initWithComponentType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

