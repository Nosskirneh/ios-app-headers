//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSourceListBaseViewController.h"

@class UITableView, VOXIndicatorView, VOXMediaItemStateIndicatorManager;

@interface _TtC3VOX28SoundCloudListViewController : VOXSourceListBaseViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: footerIndicatorView
    // Error parsing type: , name: tableViewBottomActivity
    // Error parsing type: , name: stateIndicatorManager
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool empty;
@property(nonatomic, retain) VOXMediaItemStateIndicatorManager *stateIndicatorManager; // @synthesize stateIndicatorManager;
@property(nonatomic) __weak VOXIndicatorView *tableViewBottomActivity; // @synthesize tableViewBottomActivity;
@property(nonatomic, retain) VOXIndicatorView *footerIndicatorView; // @synthesize footerIndicatorView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

