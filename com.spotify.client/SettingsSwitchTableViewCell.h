//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class UISwitch;

@interface SettingsSwitchTableViewCell : SPTSettingsTableViewCell
{
    UISwitch *_switch;
}

@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switch;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 switchValue:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4 reuseIdentifier:(id)arg5;

@end

