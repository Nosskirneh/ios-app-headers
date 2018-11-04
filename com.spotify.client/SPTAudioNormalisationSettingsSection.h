//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class SettingsSwitchTableViewCell;

@interface SPTAudioNormalisationSettingsSection : SettingsSection
{
    id <SPTPlaybackPreferencesProtocol> _delegate;
    id <SPTPreferences> _preferences;
    SettingsSwitchTableViewCell *_cell;
}

@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <SPTPlaybackPreferencesProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)audioNormalisedChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 preferences:(id)arg2 playbackPreferencesDelegate:(id)arg3;

@end
