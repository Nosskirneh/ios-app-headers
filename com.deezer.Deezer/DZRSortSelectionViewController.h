//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITableView;
@protocol DZRSortSelectionViewControllerDataSource, DZRSortSelectionViewControllerDelegate;

@interface DZRSortSelectionViewController : UITableViewController <UIGestureRecognizerDelegate>
{
    double _longestSortCellWidth;
    id <DZRSortSelectionViewControllerDataSource> _dataSource;
    UITableView *_sortOptionsTableView;
    id <DZRSortSelectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <DZRSortSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *sortOptionsTableView; // @synthesize sortOptionsTableView=_sortOptionsTableView;
@property(nonatomic) id <DZRSortSelectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double longestSortCellWidth; // @synthesize longestSortCellWidth=_longestSortCellWidth;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismiss;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)sortOptionTableViewFullHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDataSource:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

