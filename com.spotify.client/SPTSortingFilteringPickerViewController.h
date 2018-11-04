//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTSortingFilteringPicker.h"
#import "SPTSortingFilteringViewModelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class GLUEButton, NSString, SPTSortingFilteringCellConfigurator, SPTSortingFilteringGLUETheme, SPTSortingFilteringViewModel, SPTTableView;

@interface SPTSortingFilteringPickerViewController : UIViewController <UIViewControllerTransitioningDelegate, UITableViewDataSource, UITableViewDelegate, SPTSortingFilteringPicker, SPTSortingFilteringViewModelDelegate>
{
    _Bool _userPickedRule;
    id <SPTSortingFilteringPickerDelegate> _delegate;
    SPTSortingFilteringViewModel *_viewModel;
    SPTSortingFilteringGLUETheme *_theme;
    SPTSortingFilteringCellConfigurator *_cellConfigurator;
    SPTTableView *_tableView;
    GLUEButton *_cancelButton;
}

@property(nonatomic) _Bool userPickedRule; // @synthesize userPickedRule=_userPickedRule;
@property(retain, nonatomic) GLUEButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTSortingFilteringCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTSortingFilteringGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSortingFilteringViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTSortingFilteringPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sortingFilteringViewModel:(id)arg1 deselectedFilterRule:(id)arg2 atIndexPath:(id)arg3;
- (void)sortingFilteringViewModel:(id)arg1 selectedFilterRule:(id)arg2 atIndexPath:(id)arg3;
- (void)sortingFilteringViewModel:(id)arg1 selectedSortRule:(id)arg2 atIndexPath:(id)arg3;
- (void)updateRowAtIndexPath:(id)arg1 dismiss:(_Bool)arg2;
- (void)updateRowAtIndexPath:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)dismissAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)calculatePreferedContentSize;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewDidLoad;
- (id)initViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

