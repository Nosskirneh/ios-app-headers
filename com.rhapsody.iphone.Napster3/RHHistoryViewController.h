//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlayableTableViewController.h"

@class RHActionSheet, RHDataController, RHNavigationService, UIButton, UILabel, UIView;

@interface RHHistoryViewController : RHPlayableTableViewController
{
    RHDataController *_dataController;
    UIView *_headerView;
    UILabel *_titleLabel;
    UIButton *_optionsButton;
    RHActionSheet *_actionSheet;
}

@property(nonatomic) __weak RHActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak UIButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
@property(readonly, nonatomic) RHNavigationService *navigationService;
- (id)reachabilityService;
- (id)dependencies;
- (id)metricsScreenEvent;
- (void)choosePlaylistForAllTracks;
- (void)tableViewDidSelectModel:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)optionsButtonTapped:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initForHistoryWithDataController:(id)arg1 metricsSource:(id)arg2;

@end
