//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GroupVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel;

@interface LanguageVC : GroupVC <UITableViewDataSource, UITableViewDelegate>
{
    double topLangsCellHeight;
    NSMutableArray *topLangs;
    NSMutableArray *otherLangs;
    NSMutableArray *selectedLangs;
    UILabel *selectionRecap;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)doneTapped;
- (id)getLangForIndexPath:(id)arg1;
- (void)topBtnTapped:(id)arg1;
- (void)selectTopObject:(_Bool)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initData;
- (void)initDoneButton;
- (void)initMainTable;
- (void)initNavBarItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
