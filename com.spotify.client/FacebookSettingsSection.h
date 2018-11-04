//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTSocialManagerObserver.h"

@class NSString, SPCore, SPTSettingsTableViewCell, UIActivityIndicatorView;

@interface FacebookSettingsSection : SettingsSection <SPTSocialManagerObserver>
{
    SPTSettingsTableViewCell *_enableFacebookCell;
    UIActivityIndicatorView *_facebookConnectingActivityIndicator;
    id <SPTPreferences> _preferences;
    SPCore *_core;
}

@property(readonly, nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) UIActivityIndicatorView *facebookConnectingActivityIndicator; // @synthesize facebookConnectingActivityIndicator=_facebookConnectingActivityIndicator;
@property(retain, nonatomic) SPTSettingsTableViewCell *enableFacebookCell; // @synthesize enableFacebookCell=_enableFacebookCell;
- (void).cxx_destruct;
- (void)socialManager:(id)arg1 socialError:(id)arg2;
- (void)facebookStateChanged;
- (void)accountLinkingHandler:(_Bool)arg1;
- (void)connectToFacebook;
- (void)handleContext;
- (void)didSelectRow:(long long)arg1;
- (id)footerText;
- (id)headerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 preferences:(id)arg2 core:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

