//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, UITableView;

@protocol SPTUITableViewExtendedDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 didCancelReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginReorderingRowAtIndexPath:(NSIndexPath *)arg2;
@end

