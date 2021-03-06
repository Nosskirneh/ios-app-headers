//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, GPMInnerJamFetcher, NSString;

@interface GPMBackgroundLocationManager : NSObject <CLLocationManagerDelegate>
{
    GPMInnerJamFetcher *_innerJamFetcher;
    CLLocationManager *_locationManager;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)startMonitoringVisits;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)invalidate;
- (id)initWithInnerJamFetcher:(id)arg1 locationManager:(id)arg2;
- (id)initWithInnerJamFetcher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

