//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXParamChildTableViewController.h"

@class VOXBS2BPresetsModel;

@interface VOXBS2BTableViewController : VOXParamChildTableViewController
{
    VOXBS2BPresetsModel *_model;
}

@property(retain, nonatomic) VOXBS2BPresetsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)awakeFromNib;

@end

