//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnghamiViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface CustomTableViewController : AnghamiViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasViewWillAppearRunYet;
    UITableView *_tableView;
    NSArray *_expectedSectionCountsAfterDelete;
}

@property(retain) NSArray *expectedSectionCountsAfterDelete; // @synthesize expectedSectionCountsAfterDelete=_expectedSectionCountsAfterDelete;
@property(nonatomic) _Bool hasViewWillAppearRunYet; // @synthesize hasViewWillAppearRunYet=_hasViewWillAppearRunYet;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)toggleEdit;
- (void)dealloc;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

