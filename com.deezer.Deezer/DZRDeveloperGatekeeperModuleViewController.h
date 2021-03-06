//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class DZRDeveloperGatekeeperModuleItem, UILabel;

@interface DZRDeveloperGatekeeperModuleViewController : UITableViewController
{
    DZRDeveloperGatekeeperModuleItem *_module;
    UILabel *_mobileStatusLabel;
    UILabel *_userStatusLabel;
    UILabel *_codeStatusLabel;
    UILabel *_manualStatusLabel;
}

+ (id)bulletViewForStatus:(id)arg1;
@property(nonatomic) __weak UILabel *manualStatusLabel; // @synthesize manualStatusLabel=_manualStatusLabel;
@property(nonatomic) __weak UILabel *codeStatusLabel; // @synthesize codeStatusLabel=_codeStatusLabel;
@property(nonatomic) __weak UILabel *userStatusLabel; // @synthesize userStatusLabel=_userStatusLabel;
@property(nonatomic) __weak UILabel *mobileStatusLabel; // @synthesize mobileStatusLabel=_mobileStatusLabel;
@property(retain, nonatomic) DZRDeveloperGatekeeperModuleItem *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)update;
- (void)viewDidLoad;

@end

