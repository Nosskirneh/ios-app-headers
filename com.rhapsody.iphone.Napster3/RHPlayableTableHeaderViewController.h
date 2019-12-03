//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class RHLayoutManagerView, RHPlayableTableViewController, RHStackLayoutManager, UIView;

@interface RHPlayableTableHeaderViewController : RHViewController
{
    RHStackLayoutManager *_stackLayoutManager;
    UIView *_playbar;
}

@property(nonatomic) __weak UIView *playbar; // @synthesize playbar=_playbar;
@property(retain, nonatomic) RHStackLayoutManager *stackLayoutManager; // @synthesize stackLayoutManager=_stackLayoutManager;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) RHLayoutManagerView *stackLayoutView;
@property(readonly, nonatomic) RHPlayableTableViewController *parentPlayableTableViewController;
- (void)viewDidLoad;

@end
