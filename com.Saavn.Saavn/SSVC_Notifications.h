//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSubviewVC.h"

@class NSMutableDictionary;

@interface SSVC_Notifications : SettingsSubviewVC
{
    NSMutableDictionary *fetchResponse;
    _Bool displayOff;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSuccess:(id)arg1;
- (void)saveSettings;
- (void)toggleAll;
- (_Bool)getToggleState:(id)arg1;
- (void)fetchSuccess:(id)arg1;
- (void)viewDidLoad;

@end

