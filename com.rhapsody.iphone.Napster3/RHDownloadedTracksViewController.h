//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlayableTableViewController.h"

@class RHActionSheet, RHDataController, UIButton, UILabel, UIView;

@interface RHDownloadedTracksViewController : RHPlayableTableViewController
{
    RHDataController *_dataController;
    UIView *_headerView;
    UIView *_editView;
    UILabel *_titleLabel;
    UIButton *_editButton;
    UIButton *_doneButton;
    UIButton *_deleteAllItemsButton;
    RHActionSheet *_actionSheet;
}

@property(nonatomic) __weak RHActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak UIButton *deleteAllItemsButton; // @synthesize deleteAllItemsButton=_deleteAllItemsButton;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *editView; // @synthesize editView=_editView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (id)metricsProperties;
- (id)metricsScreenEvent;
- (id)reachabilityService;
- (id)navigationService;
- (void)deleteAllItems;
- (_Bool)shouldShowAvailableData;
- (_Bool)hasEditModeNavigationButton;
- (void)deleteAllItemsButtonTapped:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (_Bool)shouldShowPlaybar;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 metricsSource:(id)arg2;

@end

