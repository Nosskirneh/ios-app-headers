//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsTableViewController.h"

#import "DZRLibraryItemTableViewCellDelegate-Protocol.h"
#import "DZRLibraryItemsTableViewProtocol-Protocol.h"
#import "DZRSearchAndSortViewDelegate-Protocol.h"

@class DZRReachabilityFacade, DZRSearchAndSortView, DeezerFriend, NSString, UIView;

@interface DZRFavoriteTalkTableViewController : DZRLibraryItemsTableViewController <DZRLibraryItemTableViewCellDelegate, DZRLibraryItemsTableViewProtocol, DZRSearchAndSortViewDelegate>
{
    DeezerFriend *_friend;
    UIView *_tableViewHeaderView;
    DZRSearchAndSortView *_searchAndSortView;
    DZRReachabilityFacade *_reachability;
}

@property(retain, nonatomic) DZRReachabilityFacade *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) DZRSearchAndSortView *searchAndSortView; // @synthesize searchAndSortView=_searchAndSortView;
@property(retain, nonatomic) UIView *tableViewHeaderView; // @synthesize tableViewHeaderView=_tableViewHeaderView;
@property(retain, nonatomic) DeezerFriend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (id)tabName;
- (id)navigationPath;
- (_Bool)shouldObserveNetworkChanges;
- (id)latestEpisodesPlaylist;
- (_Bool)shouldObserveSynchronizationNotifications;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (void)dzrPlayButtonAction:(id)arg1 atIndexPath:(id)arg2;
- (long long)contextMenuTypeForControllerForItem:(id)arg1;
- (unsigned long long)styleForControllerForItem:(id)arg1;
- (id)libraryItemCellListeningContext:(id)arg1;
- (void)dataSource:(id)arg1 dataDidChangeWithChanges:(id)arg2;
- (void)libraryItemCellPlayButtonTouched:(id)arg1;
- (void)libraryItemCellOptionButtonTouched:(id)arg1;
- (void)sortButtonTapped;
- (void)searchButtonTapped;
- (void)initSearchAndSortview;
- (double)searchAndSortViewHeight;
- (void)addTableViewHeader;
- (double)tableViewHeaderViewHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)noDataDictionary;
- (long long)dataType;
- (void)viewDidLoad;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

