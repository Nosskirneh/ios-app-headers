//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTAppProtocolFeatureFlagManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _backgroundStateEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _appProtocolBackgroundFeatureFlagSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> appProtocolBackgroundFeatureFlagSignal; // @synthesize appProtocolBackgroundFeatureFlagSignal=_appProtocolBackgroundFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isBackgroundStateEnabled) _Bool backgroundStateEnabled; // @synthesize backgroundStateEnabled=_backgroundStateEnabled;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeFeatureFlagObserver:(id)arg1;
- (void)addFeatureFlagObserver:(id)arg1;
- (void)dealloc;
- (void)setupFeatureFlag;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

