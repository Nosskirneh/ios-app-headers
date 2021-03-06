//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;

@interface FlurryLocationUtil : NSObject <CLLocationManagerDelegate>
{
    _Bool _isActive;
    CLLocation *_location;
    CLLocationManager *_locationManager;
    Class _CLLocationManagerClass;
}

+ (id)sharedInstance;
@property(nonatomic) Class CLLocationManagerClass; // @synthesize CLLocationManagerClass=_CLLocationManagerClass;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stopTrackingLocation;
- (_Bool)startTrackingLocation;
- (_Bool)hasLocationPermission;
- (void)createLocationManager;
- (void)updateData;
- (void)fetchLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

