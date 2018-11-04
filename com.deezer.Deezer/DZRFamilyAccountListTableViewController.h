//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCommonTableViewController.h"

@class DZRFamilyAccountList, DZRReachabilityFacade, NSIndexPath;

@interface DZRFamilyAccountListTableViewController : DZRCommonTableViewController
{
    DZRFamilyAccountList *_accountList;
    NSIndexPath *_indexPathToDelete;
    DZRReachabilityFacade *_reachability;
}

+ (long long)preferredTabIndexWithParameters:(id)arg1;
@property(retain, nonatomic) DZRReachabilityFacade *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSIndexPath *indexPathToDelete; // @synthesize indexPathToDelete=_indexPathToDelete;
@property(retain, nonatomic) DZRFamilyAccountList *accountList; // @synthesize accountList=_accountList;
- (void).cxx_destruct;
- (void)switchToNewUserAccount:(id)arg1;
- (_Bool)deletionInProgress;
- (void)updateModelAndViewAfterProfileDeletion;
- (void)deleteMemberProfile;
- (void)askForDeletionOfIndexPath:(id)arg1;
- (id)userAtIndexPath:(id)arg1;
- (long long)dataType;
- (id)noDataText;
- (void)refreshData;
- (_Bool)isLoading;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)askForSwitchConfirmationToNewUserAccount:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end

