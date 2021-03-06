//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZSettingsViewController.h"

@class DZRButtonSetting, DZSetting, DZStorageDetails, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface DZAppSettingsViewController : DZSettingsViewController
{
    _Bool _limitSizeHasChanged;
    NSArray *_settings;
    DZSetting *_usedSmartCacheSetting;
    DZSetting *_hideTracksSetting;
    DZSetting *_availableDiskSpaceSetting;
    DZSetting *_usedDiskSpaceSetting;
    DZRButtonSetting *_clearDiskSetting;
    DZRButtonSetting *_clearEmptyCacheSetting;
    DZSetting *_smartCacheSizeSetting;
    DZSetting *_socialSetting;
    DZSetting *_peekAndPopSetting;
    DZStorageDetails *_storageDetails;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

+ (_Bool)canShare;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) _Bool limitSizeHasChanged; // @synthesize limitSizeHasChanged=_limitSizeHasChanged;
@property(retain, nonatomic) DZStorageDetails *storageDetails; // @synthesize storageDetails=_storageDetails;
@property(retain, nonatomic) DZSetting *peekAndPopSetting; // @synthesize peekAndPopSetting=_peekAndPopSetting;
@property(retain, nonatomic) DZSetting *socialSetting; // @synthesize socialSetting=_socialSetting;
@property(retain, nonatomic) DZSetting *smartCacheSizeSetting; // @synthesize smartCacheSizeSetting=_smartCacheSizeSetting;
@property(retain, nonatomic) DZRButtonSetting *clearEmptyCacheSetting; // @synthesize clearEmptyCacheSetting=_clearEmptyCacheSetting;
@property(retain, nonatomic) DZRButtonSetting *clearDiskSetting; // @synthesize clearDiskSetting=_clearDiskSetting;
@property(retain, nonatomic) DZSetting *usedDiskSpaceSetting; // @synthesize usedDiskSpaceSetting=_usedDiskSpaceSetting;
@property(retain, nonatomic) DZSetting *availableDiskSpaceSetting; // @synthesize availableDiskSpaceSetting=_availableDiskSpaceSetting;
@property(retain, nonatomic) DZSetting *hideTracksSetting; // @synthesize hideTracksSetting=_hideTracksSetting;
@property(retain, nonatomic) DZSetting *usedSmartCacheSetting; // @synthesize usedSmartCacheSetting=_usedSmartCacheSetting;
@property(retain, nonatomic) NSArray *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)navigationPath;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)cleanSmartCache:(id)arg1;
- (void)cleanCache;
- (void)refreshCacheUsageValuesAfterCleanCache:(_Bool)arg1;
- (void)reloadDisplayOfStorageDetails;
- (id)sectionsToRefresh;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)smartCacheSliderValueDidChangeDone:(id)arg1;
- (void)smartCacheSliderValueDidChange:(id)arg1;
- (id)settingAtIndexPath:(id)arg1;
- (void)addSettings;
- (id)indexPathForSetting:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

