//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModalVC.h"

@class NSMutableArray, UITableView;

@interface HistoryModal : ModalVC
{
    NSMutableArray *historyData;
    UITableView *table;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)jumpToHistory;
- (void)loadFullHistoryView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initData;
- (void)initContents;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

