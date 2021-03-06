//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsTableViewController.h"

#import "DZRLibraryItemTableViewCellDelegate-Protocol.h"
#import "DZRSearchAndSortViewDelegate-Protocol.h"

@class DZRSearchAndSortView, DeezerArtist, NSString, UIView;

@interface DZRArtistDiscographyTableViewController : DZRLibraryItemsTableViewController <DZRLibraryItemTableViewCellDelegate, DZRSearchAndSortViewDelegate>
{
    DeezerArtist *_artist;
    unsigned long long _albumType;
    UIView *_tableViewHeaderView;
    DZRSearchAndSortView *_searchAndSortView;
}

@property(retain, nonatomic) DZRSearchAndSortView *searchAndSortView; // @synthesize searchAndSortView=_searchAndSortView;
@property(retain, nonatomic) UIView *tableViewHeaderView; // @synthesize tableViewHeaderView=_tableViewHeaderView;
@property(nonatomic) unsigned long long albumType; // @synthesize albumType=_albumType;
@property(retain, nonatomic) DeezerArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)tabName;
- (id)navigationPath;
- (long long)contextMenuTypeForControllerForItem:(id)arg1;
- (id)libraryItemCellListeningContext:(id)arg1;
- (void)libraryItemCellOptionButtonTouched:(id)arg1;
- (void)sortButtonTapped;
- (void)searchButtonTapped;
- (void)initSearchAndSortview;
- (double)searchAndSortViewHeight;
- (void)addTableViewHeader;
- (double)tableViewHeaderViewHeight;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

