//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString, SPTObserverManager;

@interface SPTFollowShelfTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _followShelfUserEnabled;
    _Bool _releaseRadarPSXUserEnabled;
    _Bool _followShelfEmployeeEnabled;
    _Bool _releaseRadarPSXEmployeeEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTObserverManager *_observers;
    id <SPTFeatureFlagSignal> _followShelfEmployeeEnabledSignal;
    id <SPTFeatureFlagSignal> _followShelfUserEnabledSignal;
    id <SPTFeatureFlagSignal> _followShelfUserEnabledSignalCtrl;
    id <SPTFeatureFlagSignal> _followShelfUserEnabledSignalRRPTS;
    id <SPTFeatureFlagSignal> _followShelfUserEnabledSignalRRFS;
    id <SPTFeatureFlagSignal> _followShelfEmployeeEnabledSignalCtrl;
    id <SPTFeatureFlagSignal> _followShelfEmployeeEnabledSignalRRPTS;
    id <SPTFeatureFlagSignal> _followShelfEmployeeEnabledSignalRRFS;
}

@property(nonatomic, getter=isReleaseRadarPSXEmployeeEnabled) _Bool releaseRadarPSXEmployeeEnabled; // @synthesize releaseRadarPSXEmployeeEnabled=_releaseRadarPSXEmployeeEnabled;
@property(nonatomic, getter=isFollowShelfEmployeeEnabled) _Bool followShelfEmployeeEnabled; // @synthesize followShelfEmployeeEnabled=_followShelfEmployeeEnabled;
@property(nonatomic, getter=isReleaseRadarPSXUserEnabled) _Bool releaseRadarPSXUserEnabled; // @synthesize releaseRadarPSXUserEnabled=_releaseRadarPSXUserEnabled;
@property(nonatomic, getter=isFollowShelfUserEnabled) _Bool followShelfUserEnabled; // @synthesize followShelfUserEnabled=_followShelfUserEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfEmployeeEnabledSignalRRFS; // @synthesize followShelfEmployeeEnabledSignalRRFS=_followShelfEmployeeEnabledSignalRRFS;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfEmployeeEnabledSignalRRPTS; // @synthesize followShelfEmployeeEnabledSignalRRPTS=_followShelfEmployeeEnabledSignalRRPTS;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfEmployeeEnabledSignalCtrl; // @synthesize followShelfEmployeeEnabledSignalCtrl=_followShelfEmployeeEnabledSignalCtrl;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfUserEnabledSignalRRFS; // @synthesize followShelfUserEnabledSignalRRFS=_followShelfUserEnabledSignalRRFS;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfUserEnabledSignalRRPTS; // @synthesize followShelfUserEnabledSignalRRPTS=_followShelfUserEnabledSignalRRPTS;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfUserEnabledSignalCtrl; // @synthesize followShelfUserEnabledSignalCtrl=_followShelfUserEnabledSignalCtrl;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfUserEnabledSignal; // @synthesize followShelfUserEnabledSignal=_followShelfUserEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followShelfEmployeeEnabledSignal; // @synthesize followShelfEmployeeEnabledSignal=_followShelfEmployeeEnabledSignal;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (_Bool)isFollowShelfEnabled;
- (_Bool)isReleaseRadarPSXEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupFlags;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2 featureSettingsItemFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

