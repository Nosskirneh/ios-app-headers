//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPTAdFeatureFlagChecksObserver-Protocol.h"

@class NSString, SPForegroundObserver, SPTAdFeatureFlagChecks, SPTAdGlobalSettingsController, SPTObserverManager;

@interface SPTAdFocusManager : NSObject <SPForegroundObserverDelegate, SPTAdFeatureFlagChecksObserver>
{
    SPTAdGlobalSettingsController *_settingsController;
    SPTAdFeatureFlagChecks *_featureFlags;
    SPTObserverManager *_observerManager;
    SPForegroundObserver *_foregroundObserver;
}

@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) __weak SPTAdFeatureFlagChecks *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) __weak SPTAdGlobalSettingsController *settingsController; // @synthesize settingsController=_settingsController;
- (void).cxx_destruct;
- (void)adsFeatureFlagsDidLoad:(id)arg1;
- (void)adsFeatureFlagsDidChange:(id)arg1;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithAdSettingsController:(id)arg1 featureFlags:(id)arg2 foregroundObserver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

