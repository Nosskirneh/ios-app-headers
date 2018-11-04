//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

#import "DZSettingsTableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DZSettingsTableView, NSString;

@interface DZSettingsViewController : CommonController <DZSettingsTableViewDataSource, UITableViewDelegate>
{
    DZSettingsTableView *_tableView;
    double _cellMargin;
    double _interSectionSpace;
    unsigned long long _separatorStyle;
    unsigned long long _cellStyle;
}

@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) unsigned long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) double interSectionSpace; // @synthesize interSectionSpace=_interSectionSpace;
@property(nonatomic) double cellMargin; // @synthesize cellMargin=_cellMargin;
@property(retain, nonatomic) DZSettingsTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)switchValueDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)configureButtonCell:(id)arg1 withSetting:(id)arg2;
- (void)configureSliderCell:(id)arg1 withSetting:(id)arg2;
- (void)tableView:(id)arg1 configureSeparatorInCell:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 configureCell:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 indentationForTitleInSection:(unsigned long long)arg2;
- (unsigned long long)cellAccessoryTypeForSetting:(id)arg1;
- (unsigned long long)cellStyleForSetting:(id)arg1;
- (id)settingAtIndexPath:(id)arg1;
- (id)dzrContentScrollView;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

