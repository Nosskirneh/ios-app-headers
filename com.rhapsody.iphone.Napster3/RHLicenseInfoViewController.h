//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, RHAutoSizeTableViewCell, UIFont;

@interface RHLicenseInfoViewController : UITableViewController
{
    UIFont *_licenseFont;
    NSArray *_licenseData;
    RHAutoSizeTableViewCell *_prototypeCell;
}

@property(retain, nonatomic) RHAutoSizeTableViewCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) NSArray *licenseData; // @synthesize licenseData=_licenseData;
@property(nonatomic) UIFont *licenseFont; // @synthesize licenseFont=_licenseFont;
- (void).cxx_destruct;
- (void)configureLicenseCell:(id)arg1 atIndexPath:(id)arg2;
- (id)createHeaderView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

