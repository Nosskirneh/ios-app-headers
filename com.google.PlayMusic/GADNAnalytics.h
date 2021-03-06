//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection, NSOperationQueue;

@interface GADNAnalytics : NSObject
{
    id _adExposureReporter;
    id _analyticsIdentifiers;
    id _analytics;
    id _screenViewReporter;
    // Error parsing type: AB, name: _analyticsEnabled
    NSOperationQueue *_operationQueue;
    GADNObserverCollection *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateAnalyticsEnabled;
- (void)startAnalyticsEnabledMonitoring;
- (_Bool)analyticsEnabled;
- (void)endAdUnitExposure:(id)arg1;
- (void)beginAdUnitExposure:(id)arg1;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
- (void)logEventWithName:(id)arg1 adEventID:(id)arg2 parameters:(id)arg3;
- (id)appIDOrigin;
- (id)adEventID;
- (id)appInstanceID;
- (id)googleAppID;
- (_Bool)validateAnalytics;
- (id)initWithAPMFramework;
- (id)initWithFIRFramework;

@end

