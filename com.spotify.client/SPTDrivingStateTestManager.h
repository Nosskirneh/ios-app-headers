//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory;

@interface SPTDrivingStateTestManager : NSObject
{
    _Bool _debugCarConnectedEnabled;
    _Bool _motionBasedDrivingSurveyEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _debugCarConnectedSignal;
    id <SPTFeatureFlagSignal> _drivingSurveyEnabledSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> drivingSurveyEnabledSignal; // @synthesize drivingSurveyEnabledSignal=_drivingSurveyEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> debugCarConnectedSignal; // @synthesize debugCarConnectedSignal=_debugCarConnectedSignal;
@property(retain, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isMotionBasedDrivingSurveyEnabled) _Bool motionBasedDrivingSurveyEnabled; // @synthesize motionBasedDrivingSurveyEnabled=_motionBasedDrivingSurveyEnabled;
@property(nonatomic, getter=isDebugCarConnectedEnabled) _Bool debugCarConnectedEnabled; // @synthesize debugCarConnectedEnabled=_debugCarConnectedEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)setupFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

