//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnghamiNewTableViewController.h"

@class NSArray;

@interface SettingsSuperViewController : AnghamiNewTableViewController
{
    _Bool _isContainedInPopover;
    NSArray *_settingsSections;
}

@property(retain, nonatomic) NSArray *settingsSections; // @synthesize settingsSections=_settingsSections;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)footerAndHeaderCellInTableView:(id)arg1 isFooter:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)switchValueChanged:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)addOrRemoveSlider:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentActivationCodeViewController;
- (_Bool)availableInOfflineMode;
- (_Bool)showConnectivityBar;
- (id)generateSections;
- (void)_refreshFilter;
- (void)refreshFilter;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableViewStyle;
- (id)init;
- (void)dismissView;
- (void)viewDidLayoutSubviews;

@end

