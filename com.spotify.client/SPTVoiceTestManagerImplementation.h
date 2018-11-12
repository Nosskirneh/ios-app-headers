//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTVoiceLanguageSupportDataSourceDelegate-Protocol.h"
#import "SPTVoiceTestManager-Protocol.h"

@class NSString, SPTObserverManager, SPTVoiceLanguageSupportDataSource;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTLocalSettings, SPTVoiceTestManagerSettingsDelegate;

@interface SPTVoiceTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTVoiceLanguageSupportDataSourceDelegate, SPTVoiceTestManager>
{
    _Bool _freeTierEnabled;
    _Bool _serviceEnabled;
    _Bool _voiceSearchEnabled;
    _Bool _voiceSearchProductStateValue;
    _Bool _showVoiceSearchEntryInHome;
    _Bool _onlyTranscriptionFeedbackEnabled;
    id <SPTVoiceTestManagerSettingsDelegate> _settingsDelegate;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _serviceFlagSignal;
    id <SPTFeatureFlagSignal> _voiceSearchFlagSignal;
    id <SPTFeatureFlagSignal> _voiceProductStateFlagSignal;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _voiceTestOnHomeSignal;
    id <SPTFeatureFlagSignal> _onlyTranscriptionFeedbackSignal;
    SPTVoiceLanguageSupportDataSource *_languageSupportDataSource;
    SPTObserverManager *_observerManager;
}

@property(nonatomic) _Bool onlyTranscriptionFeedbackEnabled; // @synthesize onlyTranscriptionFeedbackEnabled=_onlyTranscriptionFeedbackEnabled;
@property(nonatomic) _Bool showVoiceSearchEntryInHome; // @synthesize showVoiceSearchEntryInHome=_showVoiceSearchEntryInHome;
@property(nonatomic) _Bool voiceSearchProductStateValue; // @synthesize voiceSearchProductStateValue=_voiceSearchProductStateValue;
@property(nonatomic) _Bool voiceSearchEnabled; // @synthesize voiceSearchEnabled=_voiceSearchEnabled;
@property(nonatomic) _Bool serviceEnabled; // @synthesize serviceEnabled=_serviceEnabled;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTVoiceLanguageSupportDataSource *languageSupportDataSource; // @synthesize languageSupportDataSource=_languageSupportDataSource;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onlyTranscriptionFeedbackSignal; // @synthesize onlyTranscriptionFeedbackSignal=_onlyTranscriptionFeedbackSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> voiceTestOnHomeSignal; // @synthesize voiceTestOnHomeSignal=_voiceTestOnHomeSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> voiceProductStateFlagSignal; // @synthesize voiceProductStateFlagSignal=_voiceProductStateFlagSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> voiceSearchFlagSignal; // @synthesize voiceSearchFlagSignal=_voiceSearchFlagSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> serviceFlagSignal; // @synthesize serviceFlagSignal=_serviceFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic) __weak id <SPTVoiceTestManagerSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 abbaEnabledValue:(id)arg2 productStateKey:(id)arg3 productStateEnabledValue:(id)arg4 settingsItemTitle:(id)arg5 settingsItemDescription:(id)arg6;
- (id)featureFlagSignalWithABBAKey:(id)arg1 abbaEnabledValue:(id)arg2 settingsItemTitle:(id)arg3 settingsItemDescription:(id)arg4;
- (id)featureFlagSignalWithABBAKey:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3;
- (id)featureFlagSignalWithProductStateKey:(id)arg1 productStateEnabledValue:(id)arg2 settingsItemTitle:(id)arg3 settingsItemDescription:(id)arg4;
- (id)provideSwitchItemForSaveAudio;
- (void)languageSupportDataSource:(id)arg1 didFetchAvailableLanguages:(id)arg2;
- (id)provideMutipleChoiceItemForVoiceServiceEndpoints;
- (void)registerFeatureSettingsPage;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)handleVoiceSearchProductStateChanged:(_Bool)arg1;
- (void)handleVoiceSearchFeatureEnabledStateChanged:(_Bool)arg1;
- (void)handleFeatureEnabledStateChanged:(_Bool)arg1;
- (void)teardownFeatureFlagHandling;
- (void)setupVoiceFeedbackSignals;
- (void)setupVoiceTestOnHomeSignal;
- (void)setupFeatureEnablementSignals;
- (void)setupFeatureFlags;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool shouldSaveAudio;
@property(readonly, nonatomic, getter=selectedLanguage) NSString *selectedLanguage;
@property(readonly, nonatomic, getter=serviceEndpoint) unsigned long long serviceEndpoint;
- (_Bool)isOnlyTranscriptionFeedbackEnabled;
- (_Bool)shouldShowVoiceSearchEntryInHome;
- (_Bool)isFloatingMicrophoneEnabled;
- (_Bool)isVoiceSearchEnabled;
- (_Bool)isVoiceServiceEnabled;
- (void)dealloc;
- (void)initializeSettingsToFalse:(id)arg1;
- (void)initializeSettings;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2 featureSettingsItemFactory:(id)arg3 settingsDelegate:(id)arg4 freeTierEnabledSignal:(id)arg5 languageSupportDataSource:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

