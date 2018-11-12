//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCommonTableViewController.h"

@class NSArray, NSDate, NSDictionary;

@interface DZRDeviceDetailsViewController : DZRCommonTableViewController
{
    _Bool _isCurrentDevice;
    _Bool _isSwitch;
    NSDate *deviceDate;
    NSDate *lastConnectionDate;
    NSArray *_datasource;
    NSDictionary *_deviceInfos;
}

@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(nonatomic) _Bool isCurrentDevice; // @synthesize isCurrentDevice=_isCurrentDevice;
@property(retain, nonatomic) NSDictionary *deviceInfos; // @synthesize deviceInfos=_deviceInfos;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) NSDate *lastConnectionDate; // @synthesize lastConnectionDate;
@property(retain, nonatomic) NSDate *deviceDate; // @synthesize deviceDate;
- (void).cxx_destruct;
- (id)unlinkRow;
- (id)dateSettingRow:(id)arg1;
- (id)deviceSettingRow;
- (_Bool)isValidDeviceInfos:(id)arg1;
- (void)switchDeviceRowTapped;
- (void)unlinkDeviceRowTapped;
- (void)handleError;
- (void)registerCells;
- (id)createDatasource;
- (_Bool)isValidSection:(long long)arg1;
- (_Bool)usesStandardSeparatorInset;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1 isCurrentDevice:(_Bool)arg2 isSwitch:(_Bool)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)sectionIdWithSection:(long long)arg1;
- (unsigned long long)rowIdWithIndexPath:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;

@end
