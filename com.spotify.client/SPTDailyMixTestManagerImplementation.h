//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDailyMixTestManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTAbbaService, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLegacyFeatureFlag, SPTLocalSettings, SPTProductState;

@interface SPTDailyMixTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTDailyMixTestManager>
{
    _Bool _madeForHubSignalEnabled;
    _Bool _madeForHubEmployeeSignalEnabled;
    id <SPTAbbaService> _abbaService;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLegacyFeatureFlag> _dailyMixContextFlag;
    id <SPTLegacyFeatureFlag> _dailyMixURITransitionFlag;
    id <SPTFeatureFlagSignal> _madeForHubSignal;
    id <SPTFeatureFlagSignal> _madeForHubEmployeeSignal;
}

@property(nonatomic, getter=isMadeForHubEmployeeSignalEnabled) _Bool madeForHubEmployeeSignalEnabled; // @synthesize madeForHubEmployeeSignalEnabled=_madeForHubEmployeeSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForHubEmployeeSignal; // @synthesize madeForHubEmployeeSignal=_madeForHubEmployeeSignal;
@property(nonatomic, getter=isMadeForHubSignalEnabled) _Bool madeForHubSignalEnabled; // @synthesize madeForHubSignalEnabled=_madeForHubSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForHubSignal; // @synthesize madeForHubSignal=_madeForHubSignal;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> dailyMixURITransitionFlag; // @synthesize dailyMixURITransitionFlag=_dailyMixURITransitionFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> dailyMixContextFlag; // @synthesize dailyMixContextFlag=_dailyMixContextFlag;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupMadeForHubSignals;
@property(readonly, nonatomic, getter=isDailyMixHubEnabled) _Bool dailyMixHubEnabled;
@property(readonly, nonatomic, getter=isDailyMixURITransitionEnabled) _Bool dailyMixURITransitionEnabled;
@property(readonly, nonatomic, getter=isDailyMixContextEntityEnabled) _Bool dailyMixContextEntityEnabled;
- (void)dealloc;
- (id)initWithAbbaFeature:(id)arg1 productState:(id)arg2 localSettings:(id)arg3 featureFlagFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

