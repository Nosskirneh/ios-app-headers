//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UITableView, VOXIndicatorView;

@interface VOXRadioBasicViewController : UIViewController
{
    _Bool _busy;
    VOXIndicatorView *_footerIndicatorView;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(retain, nonatomic) VOXIndicatorView *footerIndicatorView; // @synthesize footerIndicatorView=_footerIndicatorView;
- (void).cxx_destruct;
- (void)onSearchButton:(id)arg1;
- (void)setupSearchButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

