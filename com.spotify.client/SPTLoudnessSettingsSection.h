//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultipleChoiceSettingsSection.h"

#import "SPTPlaybackPreferencesProtocol-Protocol.h"

@class NSString, SPTPlaybackPreferencesObserver, SPTSettingsLogger;
@protocol SPTPreferences, SPTProductState;

@interface SPTLoudnessSettingsSection : MultipleChoiceSettingsSection <SPTPlaybackPreferencesProtocol>
{
    id <SPTProductState> _productState;
    id <SPTPreferences> _preferences;
    SPTPlaybackPreferencesObserver *_playbackPreferencesObserver;
    SPTSettingsLogger *_logger;
}

+ (id)productState;
+ (void)setProductState:(id)arg1;
+ (_Bool)shouldDisplayInSettingsViewController:(id)arg1;
@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak SPTPlaybackPreferencesObserver *playbackPreferencesObserver; // @synthesize playbackPreferencesObserver=_playbackPreferencesObserver;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)settingsSection:(id)arg1 didUpdatePreferences:(id)arg2;
- (long long)numberOfRows;
- (id)cellForRow:(long long)arg1;
- (unsigned long long)indexForLoudnessSetting:(long long)arg1;
- (long long)loudnessSettingForIndex:(unsigned long long)arg1;
- (id)subtitleForChoiceIndex:(long long)arg1;
- (id)titleForChoiceIndex:(long long)arg1;
- (long long)numberOfChoices;
- (id)footerText;
- (id)headerText;
- (void)selectedChoiceIndexChanged;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 preferences:(id)arg3 playbackPreferencesObserver:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

