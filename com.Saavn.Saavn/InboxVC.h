//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVCAdaptor.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, NotificationManager, SocialManager, UIRefreshControl, UITableView, UserData;

@interface InboxVC : SaavnVCAdaptor <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *inboxTable;
    NSMutableArray *inboxData;
    NSMutableArray *parsedData;
    NSMutableArray *newMessages;
    NSMutableArray *oldMessages;
    NSMutableArray *cellHeights;
    NSDictionary *labelStyle;
    NSDictionary *boldStyle;
    NSDictionary *linkStyle;
    UIRefreshControl *refresh;
    _Bool hasNewMessages;
    _Bool shouldJump;
    _Bool viewAppeared;
    NotificationManager *notifications;
    SocialManager *social;
    UserData *user;
    NSString *jumpToId;
}

@property(retain, nonatomic) NSString *jumpToId; // @synthesize jumpToId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewThread:(id)arg1;
- (void)replyToTag:(id)arg1;
- (void)loadContent:(id)arg1 withId:(id)arg2 image:(id)arg3 andName:(id)arg4;
- (void)loadContent:(id)arg1 withId:(id)arg2;
- (void)loadProfile:(int)arg1 withId:(id)arg2 withName:(id)arg3;
- (void)followUpdate:(id)arg1;
- (void)handleFollowTap:(id)arg1;
- (void)handleImageTap:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 genericCustomCellForRowAtIndexPath:(id)arg2 withMessage:(id)arg3;
- (id)genericCell:(id)arg1 ofType:(id)arg2 withMessage:(id)arg3;
- (_Bool)isTypeWithClickableBody:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setClickableStringForCell:(id)arg1 atIndexPath:(id)arg2 inSection:(id)arg3;
- (void)parseTags;
- (id)parseTagForData:(id)arg1 inSection:(id)arg2;
- (id)removeIds:(id)arg1 fromTags:(id)arg2;
- (void)getCellHeights;
- (void)updateData:(unsigned long long)arg1;
- (void)fetchError:(id)arg1;
- (void)fetchUpdate:(id)arg1;
- (void)fetchNotifications;
- (void)updateLabelStyles;
- (void)updateUIMode;
- (void)showRefreshing;
- (void)showEmptyStateFor:(unsigned long long)arg1;
- (void)scrollTo:(id)arg1;
- (void)tabChanged;
- (void)initTabs;
- (void)initTable;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
