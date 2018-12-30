//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSearchAutocompleteViewController.h"

@interface ANGRecentSearchViewController : ANGSearchAutocompleteViewController
{
}

+ (void)configureTableViewCell:(id)arg1 withAutocompleteItem:(id)arg2;
+ (id)tableView:(id)arg1 cellForAutocompleteItem:(id)arg2 navigationController:(id)arg3;
- (void)loadServerDataAndIsUserRefresh:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (void)clearRecentSearches;
- (id)recentItemForIndexPath:(id)arg1;

@end

