//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SettingsSwitchTableViewCell;
@protocol SPTLocalSettings, SPTNowPlayingTestManager;

@interface SPTNowPlayingOpenGLSettingsSection : SettingsSection
{
    id <SPTLocalSettings> _localSettings;
    id <SPTNowPlayingTestManager> _testManager;
    SettingsSwitchTableViewCell *_cell;
}

@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)settingChanged:(id)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 localSettings:(id)arg2 testManager:(id)arg3;

@end

