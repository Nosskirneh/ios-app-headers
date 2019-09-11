//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTProductStateObserver-Protocol.h"

@class NSString, SPTSettingsLogger, SettingsSwitchTableViewCell;
@protocol SPTProductState;

@interface RecentlyPlayedArtistsSettingsSection : SettingsSection <SPTProductStateObserver>
{
    SettingsSwitchTableViewCell *_cell;
    id <SPTProductState> _productState;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)dealloc;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
@property(nonatomic, getter=isShowRecentlyPlayedArtists) _Bool showRecentlyPlayedArtists;
- (void)showRecentlyPlayedArtistsChanged:(id)arg1;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

