//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSuperViewController.h"

@interface SettingsAccountViewController : SettingsSuperViewController
{
}

- (void)loginCompleteSuccess:(_Bool)arg1 error:(id)arg2;
- (void)setSignupSource;
- (void)prepareLogin;
- (void)loginWithFacebook;
- (void)loginWithGoogle;
- (_Bool)canLogin;
- (id)generateSections;
- (void)viewDidLoad;

@end

