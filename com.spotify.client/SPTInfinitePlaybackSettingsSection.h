//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTInfinitePlaybackManager, SettingsSwitchTableViewCell;

@interface SPTInfinitePlaybackSettingsSection : SettingsSection
{
    SPTInfinitePlaybackManager *_infinitePlaybackManager;
    SettingsSwitchTableViewCell *_cell;
}

@property(retain, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) __weak SPTInfinitePlaybackManager *infinitePlaybackManager; // @synthesize infinitePlaybackManager=_infinitePlaybackManager;
- (void).cxx_destruct;
- (void)settingChanged:(id)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 infinitePlaybackManager:(id)arg2;

@end

