//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SPTTableView;
@protocol SPTPodcastImportPickerDataSource, SPTPodcastImportPickerDelegate;

@interface SPTPodcastImportPickerTabViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPContentInsetViewController>
{
    id <SPTPodcastImportPickerDataSource> _dataSource;
    id <SPTPodcastImportPickerDelegate> _delegate;
    SPTTableView *_tableView;
}

@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTPodcastImportPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTPodcastImportPickerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

