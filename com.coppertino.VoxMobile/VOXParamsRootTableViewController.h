//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXParamChildTableViewController.h"

@class UILabel, UISwitch, UITableViewCell;

@interface VOXParamsRootTableViewController : VOXParamChildTableViewController
{
    UILabel *_bs2bDetailLabel;
    UILabel *_sampleRateModeLabel;
    UILabel *_outputNameLabel;
    UILabel *_currentSampleRateLabel;
    UILabel *_currentTempoLabel;
    UILabel *_currentOverlapLabel;
    UISwitch *_autogainSwitch;
    UITableViewCell *_restoreDefaultsCell;
}

@property(nonatomic) __weak UITableViewCell *restoreDefaultsCell; // @synthesize restoreDefaultsCell=_restoreDefaultsCell;
@property(nonatomic) __weak UISwitch *autogainSwitch; // @synthesize autogainSwitch=_autogainSwitch;
@property(nonatomic) __weak UILabel *currentOverlapLabel; // @synthesize currentOverlapLabel=_currentOverlapLabel;
@property(nonatomic) __weak UILabel *currentTempoLabel; // @synthesize currentTempoLabel=_currentTempoLabel;
@property(nonatomic) __weak UILabel *currentSampleRateLabel; // @synthesize currentSampleRateLabel=_currentSampleRateLabel;
@property(nonatomic) __weak UILabel *outputNameLabel; // @synthesize outputNameLabel=_outputNameLabel;
@property(nonatomic) __weak UILabel *sampleRateModeLabel; // @synthesize sampleRateModeLabel=_sampleRateModeLabel;
@property(nonatomic) __weak UILabel *bs2bDetailLabel; // @synthesize bs2bDetailLabel=_bs2bDetailLabel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAutoGain:(id)arg1;
- (_Bool)isDefaultState;
- (void)restoreDefaults;
- (void)updateOverlapLabel;
- (void)updateTempoLabel;
- (void)updateSampleRateModeLabel;
- (void)updateBS2BLabel;
- (void)updateRestoreDefaults;
- (void)updateAutoGain;
- (void)updateDeviceData;
- (void)onParamsChangeNotification:(id)arg1;
- (void)unregisterAsObserver;
- (void)registerAsObserver;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateAll;
- (void)viewDidAppear:(_Bool)arg1;

@end
