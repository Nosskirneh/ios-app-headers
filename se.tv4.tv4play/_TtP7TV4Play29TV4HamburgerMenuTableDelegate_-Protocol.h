//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, UITableView, _TtC7TV4Play21TV4LiveViewController, _TtC7TV4Play21TV4NewsViewController, _TtC7TV4Play25TV4LastWeekViewController, _TtC7TV4Play27TV4StartTableViewController;

@protocol _TtP7TV4Play29TV4HamburgerMenuTableDelegate_ <UITableViewDataSource, UITableViewDelegate>
- (void)showNewsPage;
- (_TtC7TV4Play21TV4NewsViewController *)loadNewsViewController;
@property(nonatomic, readonly) _TtC7TV4Play27TV4StartTableViewController *startViewController;
@property(nonatomic, retain) _TtC7TV4Play21TV4NewsViewController *newsViewController;
@property(nonatomic, retain) _TtC7TV4Play21TV4LiveViewController *liveViewController;
@property(nonatomic, retain) _TtC7TV4Play25TV4LastWeekViewController *lastWeekViewController;
- (void)selectSection:(NSIndexPath *)arg1;
- (void)reloadDataForTable:(UITableView *)arg1;
@end

