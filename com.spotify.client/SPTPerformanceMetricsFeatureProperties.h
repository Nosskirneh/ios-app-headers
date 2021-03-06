//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPerformanceMetricsFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _shouldUseEventsenderForViewloadIos;
    _Bool _shouldCollectAppMetrics;
    long long _performanceMetricsStartupAnalysis;
}

@property(readonly, nonatomic) long long performanceMetricsStartupAnalysis; // @synthesize performanceMetricsStartupAnalysis=_performanceMetricsStartupAnalysis;
@property(readonly, nonatomic) _Bool shouldCollectAppMetrics; // @synthesize shouldCollectAppMetrics=_shouldCollectAppMetrics;
@property(readonly, nonatomic) _Bool shouldUseEventsenderForViewloadIos; // @synthesize shouldUseEventsenderForViewloadIos=_shouldUseEventsenderForViewloadIos;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

