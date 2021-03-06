//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell, UIView;

@protocol VOXReorderTableViewDelegate <UITableViewDelegate>
- (_Bool)allowExchangeBetweenSections;
- (UIView *)tableView:(UITableView *)arg1 placeholderViewForReorderingCell:(UITableViewCell *)arg2;

@optional
- (void)tableViewDidFinishReordering:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 willFinishReorderingCellAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willStartReorderingCellAtIndexPath:(NSIndexPath *)arg2;
@end

