//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTSettingsLogger;
@protocol SPTLoginLogoutHandler;

@interface LogoutSettingsSection : SettingsSection
{
    id <SPTLoginLogoutHandler> _logoutHandler;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginLogoutHandler> logoutHandler; // @synthesize logoutHandler=_logoutHandler;
- (void).cxx_destruct;
- (void)logoutUser;
- (void)didSelectRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 logoutHandler:(id)arg2 logger:(id)arg3;

@end

