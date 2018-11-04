//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTSpeakerActivationTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _speakerActivationSuggestionABFlagEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _speakerSuggestionSignal;
}

@property(nonatomic) _Bool speakerActivationSuggestionABFlagEnabled; // @synthesize speakerActivationSuggestionABFlagEnabled=_speakerActivationSuggestionABFlagEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> speakerSuggestionSignal; // @synthesize speakerSuggestionSignal=_speakerSuggestionSignal;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 abbaEnabledValue:(id)arg2 productStateKey:(id)arg3 productStateEnabledValue:(id)arg4 settingsItemTitle:(id)arg5 settingsItemDescription:(id)arg6;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupSuggestionSignal;
- (void)setupFeatureFlags;
- (id)provideResetSwitches;
- (void)registerFeatureSettingsPage;
- (void)initializeSettingsToFalse:(id)arg1;
- (void)initializeSettings;
- (_Bool)suggestionPopupEnabled;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

