//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, RHDataController;

@interface RHRemoveTaggedContentViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    RHDataController *_dataController;
    NSFetchedResultsController *_contentFRC;
}

@property(retain, nonatomic) NSFetchedResultsController *contentFRC; // @synthesize contentFRC=_contentFRC;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (id)removeContentObject:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configureContentFRC;
- (void)createContentFRC;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

