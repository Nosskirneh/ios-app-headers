//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTEntitySeeAllSongsCellConfiguratorDelegate-Protocol.h"
#import "SPTEntitySeeAllSongsViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTEntitySeeAllSongsCellConfigurator, SPTEntitySeeAllSongsViewModel, SPTInfoView, SPTProgressView, SPTTableView;
@protocol SPTPageContainer;

@interface SPTEntitySeeAllSongsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController, SPTEntitySeeAllSongsCellConfiguratorDelegate, SPTPageController, SPTEntitySeeAllSongsViewModelDelegate>
{
    _Bool _contextMenuToBePresented;
    SPTTableView *_tableView;
    SPTEntitySeeAllSongsViewModel *_viewModel;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTEntitySeeAllSongsCellConfigurator *_cellConfigurator;
}

@property(nonatomic, getter=isContextMenuToBePresented) _Bool contextMenuToBePresented; // @synthesize contextMenuToBePresented=_contextMenuToBePresented;
@property(retain, nonatomic) SPTEntitySeeAllSongsCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTEntitySeeAllSongsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cellConfiguratorWillPresentContextMenu:(id)arg1;
- (void)entitySeeAllSongsModelRequiresReloadWithViewModel:(id)arg1;
- (void)entitySeeAllSongsModelDidFailToLoad:(id)arg1;
- (void)entitySeeAllSongsModelDidLoadWithViewModel:(id)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)initWithViewModel:(id)arg1 cellConfigurator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

