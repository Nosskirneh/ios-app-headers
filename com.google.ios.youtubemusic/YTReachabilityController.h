//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTNetworkServiceDelegate-Protocol.h"
#import "YTReachabilityDelegate-Protocol.h"
#import "YTReachabilityDetectionDelegate-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTReachability;
@protocol YTReachabilityDetectionStrategy, YTReachabilityOverrideConfig;

@interface YTReachabilityController : NSObject <YTReachabilityDelegate, YTReachabilityDetectionDelegate, YTNetworkServiceDelegate>
{
    YTReachability *_reachability;
    id <YTReachabilityDetectionStrategy> _detectionStrategy;
    id <YTReachabilityOverrideConfig> _overrideConfig;
    NSHashTable *_observers;
    NSHashTable *_observersForAllNotifications;
    GIMMe *_gimme;
    double _absoluteTimeOfLastSuccessfulRequest;
}

+ (void)notifyReachabilityChanged:(id)arg1;
@property(readonly, nonatomic) double absoluteTimeOfLastSuccessfulRequest; // @synthesize absoluteTimeOfLastSuccessfulRequest=_absoluteTimeOfLastSuccessfulRequest;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (int)getDetailedNetworkTypeForRadioType:(id)arg1;
- (void)notifyCellRadioChanged;
- (void)reachabilityCellRadioDidChange;
- (void)reachabilityDidChange:(_Bool)arg1;
- (void)didDetectReachabilityChange;
- (void)requestDidSucceedWithURL:(id)arg1;
- (void)requestURL:(id)arg1 didFailWithError:(id)arg2;
@property(readonly, nonatomic) int detailedNetworkType;
- (void)refreshReachability;
- (_Bool)isOfflineModeForced;
- (void)clearConnectionTypeOverride;
- (void)setConnectionTypeOverride:(int)arg1;
- (_Bool)hasConnectionTypeOverride;
- (void)removeReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1 withOptions:(long long)arg2;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isOnWiFi) _Bool onWiFi;
@property(readonly, nonatomic) NSString *currentRadioAccessTechnology;
@property(readonly, nonatomic) int connectionTypeIgnoringOverride;
@property(readonly, nonatomic) int connectionType;
- (id)initWithDetectionStrategy:(id)arg1;
- (id)initWithDetectionStrategy:(id)arg1 reachability:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

