//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagBuilder-Protocol.h"

@class NSArray, NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory;

@interface SPTFeatureFlagBuilderImplementation : NSObject <SPTFeatureFlagBuilder>
{
    _Bool _requiresRestartWhenSettingsChanged;
    _Bool _builderUsed;
    NSString *_abbaKey;
    NSString *_abbaEnabledValue;
    NSString *_abbaDisabledValue;
    CDUnknownBlockType _abbaSignalMapper;
    NSString *_productStateKey;
    NSString *_productStateEnabledValue;
    NSString *_productStateDisabledValue;
    CDUnknownBlockType _productStateSignalMapper;
    NSString *_localSettingsKey;
    NSString *_settingsPageTitle;
    NSString *_settingsItemTitle;
    NSString *_settingsItemDescription;
    long long _defaultState;
    id <SPTFeatureFlagSignal> _baseSignal;
    NSArray *_dependencies;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsFactory;
}

@property(nonatomic, getter=hasUsedBuilder) _Bool builderUsed; // @synthesize builderUsed=_builderUsed;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsFactory; // @synthesize featureSettingsFactory=_featureSettingsFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> baseSignal; // @synthesize baseSignal=_baseSignal;
@property(nonatomic) long long defaultState; // @synthesize defaultState=_defaultState;
@property(nonatomic) _Bool requiresRestartWhenSettingsChanged; // @synthesize requiresRestartWhenSettingsChanged=_requiresRestartWhenSettingsChanged;
@property(copy, nonatomic) NSString *settingsItemDescription; // @synthesize settingsItemDescription=_settingsItemDescription;
@property(copy, nonatomic) NSString *settingsItemTitle; // @synthesize settingsItemTitle=_settingsItemTitle;
@property(copy, nonatomic) NSString *settingsPageTitle; // @synthesize settingsPageTitle=_settingsPageTitle;
@property(copy, nonatomic) NSString *localSettingsKey; // @synthesize localSettingsKey=_localSettingsKey;
@property(copy, nonatomic) CDUnknownBlockType productStateSignalMapper; // @synthesize productStateSignalMapper=_productStateSignalMapper;
@property(copy, nonatomic) NSString *productStateDisabledValue; // @synthesize productStateDisabledValue=_productStateDisabledValue;
@property(copy, nonatomic) NSString *productStateEnabledValue; // @synthesize productStateEnabledValue=_productStateEnabledValue;
@property(copy, nonatomic) NSString *productStateKey; // @synthesize productStateKey=_productStateKey;
@property(copy, nonatomic) CDUnknownBlockType abbaSignalMapper; // @synthesize abbaSignalMapper=_abbaSignalMapper;
@property(copy, nonatomic) NSString *abbaDisabledValue; // @synthesize abbaDisabledValue=_abbaDisabledValue;
@property(copy, nonatomic) NSString *abbaEnabledValue; // @synthesize abbaEnabledValue=_abbaEnabledValue;
@property(copy, nonatomic) NSString *abbaKey; // @synthesize abbaKey=_abbaKey;
- (void).cxx_destruct;
- (CDUnknownBlockType)provideProductStateSignalMapper;
- (void)setupSettingsPageWithSwitchItem:(id)arg1;
- (id)provideFeatureSettingsSwitch;
- (id)buildLocalSettingsSignal;
- (id)addDependenciesTo:(id)arg1;
- (id)buildProductStateSignal;
- (CDUnknownBlockType)provideAbbaSignalMapper;
- (id)buildAbbaSignal;
- (id)buildUnderlyingSignal;
- (id)swift_withDefaultState:(long long)arg1;
- (id)swift_withDependencies:(id)arg1;
- (id)swift_withBaseSignal:(id)arg1;
- (id)swift_withSettingsPageTitle:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3 requiresRestart:(_Bool)arg4;
- (id)swift_withLocalSettingsKey:(id)arg1;
- (id)swift_withProductStateKey:(id)arg1 signalMapper:(CDUnknownBlockType)arg2;
- (id)swift_withProductStateKey:(id)arg1 enabledValue:(id)arg2 disabledValue:(id)arg3;
- (id)swift_withProductStateKey:(id)arg1;
- (id)swift_withAbbaKey:(id)arg1 signalMapper:(CDUnknownBlockType)arg2;
- (id)swift_withAbbaKey:(id)arg1 enabledValue:(id)arg2 disabledValue:(id)arg3;
- (id)swift_withAbbaKey:(id)arg1;
- (id)buildSignal;
- (void)validateParameters;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

