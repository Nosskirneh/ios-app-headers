//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCommonTableViewController.h"

@interface _TtC6Deezer27FlowTabDetailViewController : DZRCommonTableViewController
{
    // Error parsing type: , name: flowTabDetailHeaderView
    // Error parsing type: , name: flowTabDetailTitleView
    // Error parsing type: , name: tableViewRightConstraint
    // Error parsing type: , name: tableViewWidthConstraint
    // Error parsing type: , name: tableViewLeftConstraint
    // Error parsing type: , name: headerView
    // Error parsing type: , name: navigationBarBackgroundView
    // Error parsing type: , name: navigationPlayView
    // Error parsing type: , name: playButton
    // Error parsing type: , name: reachability
    // Error parsing type: , name: smartTracklist
    // Error parsing type: , name: closeBarButtonItem
    // Error parsing type: , name: portraitConstraints
    // Error parsing type: , name: landscapeConstraints
    // Error parsing type: , name: addToPlaylistButton
    // Error parsing type: , name: datasource.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (void)saveSmartTracklist;
- (void)updateNavigationBarBackgroundColor;
- (void)playButtonTouched:(id)arg1;
- (void)playerStateDidChangeWithNotification:(id)arg1;
- (void)popWithGesture:(id)arg1;
- (void)presentError:(id)arg1;
- (void)onButtonTouched:(id)arg1;
- (id)noDataDictionary;
- (struct CGRect)loadingViewFrame;
- (struct CGRect)noDataViewFrame;
- (void)showNoDataView:(_Bool)arg1;
- (_Bool)hasData;
- (_Bool)isLoading;
- (void)refreshData;
- (void)scrollViewDidScroll:(id)arg1;
- (double)customTopLayoutGuideLength;
- (id)footerAddToPlaylist;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldDisplayGoogleCastIcon;
- (id)initWithParameters:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long tableViewStyle;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic, readonly) long long preferredStatusBarStyle;

@end

