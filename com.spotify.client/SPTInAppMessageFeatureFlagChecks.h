//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTInAppMessageTestManager-Protocol.h"
#import "SPTLocalSettingsObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings;

@interface SPTInAppMessageFeatureFlagChecks : NSObject <SPTLocalSettingsObserver, SPTFeatureFlagSignalObserver, SPTInAppMessageTestManager>
{
    _Bool _inAppMessageEnabled;
    _Bool _cardEnabled;
    _Bool _bannerEnabled;
    _Bool _noteEnabled;
    _Bool _playerEventEnabled;
    _Bool _creativeV2Enabled;
    _Bool _skipLimitReachedQuicksilverGroupEnabled;
    _Bool _skipLimitReachedNeitherGroupEnabled;
    _Bool _skipLimitReachedNeitherSignal1Enabled;
    _Bool _skipLimitReachedNeitherSignal2Enabled;
    _Bool _skipLimitReachedQuicksilverSignal1Enabled;
    _Bool _skipLimitReachedQuicksilverSignal2Enabled;
    id <SPTFeatureFlagSignal> _inAppMessagingFlagSignal;
    id <SPTFeatureFlagSignal> _cardFlagSignal;
    id <SPTFeatureFlagSignal> _bannerFlagSignal;
    id <SPTFeatureFlagSignal> _noteFlagSignal;
    id <SPTFeatureFlagSignal> _playerEventFlagSignal;
    id <SPTFeatureFlagSignal> _creativeV2FlagSignal;
    id <SPTFeatureFlagSignal> _skipLimitReachedNeitherSignal;
    id <SPTFeatureFlagSignal> _skipLimitReachedNeitherSignal2;
    id <SPTFeatureFlagSignal> _skipLimitReachedQuicksilverSignal;
    id <SPTFeatureFlagSignal> _skipLimitReachedQuicksilverSignal2;
    id <SPTLocalSettings> _localSettings;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
}

@property(nonatomic, getter=isSkipLimitReachedQuicksilverSignal2Enabled) _Bool skipLimitReachedQuicksilverSignal2Enabled; // @synthesize skipLimitReachedQuicksilverSignal2Enabled=_skipLimitReachedQuicksilverSignal2Enabled;
@property(nonatomic, getter=isSkipLimitReachedQuicksilverSignal1Enabled) _Bool skipLimitReachedQuicksilverSignal1Enabled; // @synthesize skipLimitReachedQuicksilverSignal1Enabled=_skipLimitReachedQuicksilverSignal1Enabled;
@property(nonatomic, getter=isSkipLimitReachedNeitherSignal2Enabled) _Bool skipLimitReachedNeitherSignal2Enabled; // @synthesize skipLimitReachedNeitherSignal2Enabled=_skipLimitReachedNeitherSignal2Enabled;
@property(nonatomic, getter=isSkipLimitReachedNeitherSignal1Enabled) _Bool skipLimitReachedNeitherSignal1Enabled; // @synthesize skipLimitReachedNeitherSignal1Enabled=_skipLimitReachedNeitherSignal1Enabled;
@property(nonatomic, getter=isSkipLimitReachedNeitherGroupEnabled) _Bool skipLimitReachedNeitherGroupEnabled; // @synthesize skipLimitReachedNeitherGroupEnabled=_skipLimitReachedNeitherGroupEnabled;
@property(nonatomic, getter=isSkipLimitReachedQuicksilverGroupEnabled) _Bool skipLimitReachedQuicksilverGroupEnabled; // @synthesize skipLimitReachedQuicksilverGroupEnabled=_skipLimitReachedQuicksilverGroupEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isCreativeV2Enabled) _Bool creativeV2Enabled; // @synthesize creativeV2Enabled=_creativeV2Enabled;
@property(nonatomic, getter=isPlayerEventEnabled) _Bool playerEventEnabled; // @synthesize playerEventEnabled=_playerEventEnabled;
@property(nonatomic, getter=isNoteEnabled) _Bool noteEnabled; // @synthesize noteEnabled=_noteEnabled;
@property(nonatomic, getter=isBannerEnabled) _Bool bannerEnabled; // @synthesize bannerEnabled=_bannerEnabled;
@property(nonatomic, getter=isCardEnabled) _Bool cardEnabled; // @synthesize cardEnabled=_cardEnabled;
@property(nonatomic, getter=isInAppMessageEnabled) _Bool inAppMessageEnabled; // @synthesize inAppMessageEnabled=_inAppMessageEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> skipLimitReachedQuicksilverSignal2; // @synthesize skipLimitReachedQuicksilverSignal2=_skipLimitReachedQuicksilverSignal2;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> skipLimitReachedQuicksilverSignal; // @synthesize skipLimitReachedQuicksilverSignal=_skipLimitReachedQuicksilverSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> skipLimitReachedNeitherSignal2; // @synthesize skipLimitReachedNeitherSignal2=_skipLimitReachedNeitherSignal2;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> skipLimitReachedNeitherSignal; // @synthesize skipLimitReachedNeitherSignal=_skipLimitReachedNeitherSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> creativeV2FlagSignal; // @synthesize creativeV2FlagSignal=_creativeV2FlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> playerEventFlagSignal; // @synthesize playerEventFlagSignal=_playerEventFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> noteFlagSignal; // @synthesize noteFlagSignal=_noteFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> bannerFlagSignal; // @synthesize bannerFlagSignal=_bannerFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> cardFlagSignal; // @synthesize cardFlagSignal=_cardFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> inAppMessagingFlagSignal; // @synthesize inAppMessagingFlagSignal=_inAppMessagingFlagSignal;
- (void).cxx_destruct;
- (void)localSettingsDidChange:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)buildSignalsWithMultipleChoiceFeatureFlagBuilder;
- (id)featureFlagSignalWithABBAKey:(id)arg1 defaultState:(long long)arg2 abbaEnabledValue:(id)arg3;
- (void)setupInAppMessageABBAFlags;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLocalSettings:(id)arg1 featureFlagFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

