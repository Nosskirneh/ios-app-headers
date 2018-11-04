//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTRequestLifetime, SPTSettingsButtonTableViewCell, SPTSettingsStorageBarTableViewCell, SPTSettingsStorageLabelsTableViewCell;

@interface SPTStorageSettingsSection : SettingsSection
{
    SPTSettingsStorageBarTableViewCell *_storageBarCell;
    SPTSettingsStorageLabelsTableViewCell *_labelsCell;
    SPTSettingsButtonTableViewCell *_deleteCacheButtonCell;
    id <SPTResolver> _resolver;
    id <SPTAlertController> _alertController;
    SPTRequestLifetime *_getStatsRequestLifetime;
    SPTRequestLifetime *_deleteCacheRequestLifetime;
}

@property(retain, nonatomic) SPTRequestLifetime *deleteCacheRequestLifetime; // @synthesize deleteCacheRequestLifetime=_deleteCacheRequestLifetime;
@property(retain, nonatomic) SPTRequestLifetime *getStatsRequestLifetime; // @synthesize getStatsRequestLifetime=_getStatsRequestLifetime;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTSettingsButtonTableViewCell *deleteCacheButtonCell; // @synthesize deleteCacheButtonCell=_deleteCacheButtonCell;
@property(retain, nonatomic) SPTSettingsStorageLabelsTableViewCell *labelsCell; // @synthesize labelsCell=_labelsCell;
@property(retain, nonatomic) SPTSettingsStorageBarTableViewCell *storageBarCell; // @synthesize storageBarCell=_storageBarCell;
- (void).cxx_destruct;
- (void)deleteCache;
- (void)deleteCacheSelected;
- (void)didUpdateStatsWithTotalSpaceMb:(long long)arg1 freeSpaceMb:(long long)arg2 appDataSizeMb:(long long)arg3 downloadsSizeMb:(long long)arg4;
- (void)updateStats;
- (id)footerText;
- (void)didSelectRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 resolver:(id)arg2 alertController:(id)arg3;

@end

