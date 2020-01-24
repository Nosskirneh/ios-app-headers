//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRAAdExposureReporter, FIRAIdentifiers, FIRAScreenViewReporter, FIRAnalytics;

@interface GADAnalytics : NSObject
{
    FIRAAdExposureReporter *_adExposureReporter;
    FIRAIdentifiers *_analyticsIdentifiers;
    FIRAnalytics *_analytics;
    FIRAScreenViewReporter *_screenViewReporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)endAdUnitExposure:(id)arg1;
- (void)beginAdUnitExposure:(id)arg1;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
- (void)logEventWithName:(id)arg1 adEventID:(id)arg2 parameters:(id)arg3;
- (id)adEventID;
- (id)appInstanceID;
- (id)googleAppID;
- (id)init;

@end

