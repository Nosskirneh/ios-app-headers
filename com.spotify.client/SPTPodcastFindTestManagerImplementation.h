//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTPodcastFindTestManager.h"

@class NSString;

@interface SPTPodcastFindTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTPodcastFindTestManager>
{
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _freeTierSignal;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _enableFindIATabsSignal;
    id <SPTFeatureFlagSignal> _enableFindIACombinedSignal;
    long long _freeTierState;
    long long _findIATabsState;
    long long _findIACombinedState;
}

@property(nonatomic) long long findIACombinedState; // @synthesize findIACombinedState=_findIACombinedState;
@property(nonatomic) long long findIATabsState; // @synthesize findIATabsState=_findIATabsState;
@property(nonatomic) long long freeTierState; // @synthesize freeTierState=_freeTierState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enableFindIACombinedSignal; // @synthesize enableFindIACombinedSignal=_enableFindIACombinedSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enableFindIATabsSignal; // @synthesize enableFindIATabsSignal=_enableFindIATabsSignal;
@property(nonatomic) __weak id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic) __weak id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFindExperienceEnabled) _Bool findExperienceEnabled;
@property(readonly, nonatomic, getter=isFindIACombinedEnabled) _Bool findIACombinedEnabled;
@property(readonly, nonatomic, getter=isFindIATabsEnabled) _Bool findIATabsEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)buildFlagWithFactory:(id)arg1;
- (id)initWithFeatureFlags:(id)arg1 localSettings:(id)arg2 freeTierSignal:(id)arg3 featureFlagFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
