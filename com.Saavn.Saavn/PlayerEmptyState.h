//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, PlayerVC, UILabel, UITableView;

@interface PlayerEmptyState : UIView <UITableViewDataSource, UITableViewDelegate>
{
    PlayerVC *player;
    NSMutableArray *quickPlayOptions;
    UILabel *emptyLabel;
    UIView *quickPlayWrap;
    UIView *quickPlayBevel;
    UITableView *quickPlayTable;
}

- (void).cxx_destruct;
- (void)surpriseMe;
- (void)jumpToSearchTab;
- (void)goToSearch;
- (void)shuffleLibrary;
- (void)goOnline;
- (double)height;
- (id)getHeaderString;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateData;
- (void)updateUIMode;
- (void)refreshLayout;
- (void)refreshData;
- (void)initQuickPlayTable;
- (void)initEmptyHeader;
- (void)initUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

