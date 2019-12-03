//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, RHListenersLikeMeHeaderViewController, RHListenersLikeMeViewModel, UITableView, _TtC7Napster19RHDeferredImageView;

@interface RHListenersLikeMeViewController : RHViewController <UITableViewDataSource, UITableViewDelegate>
{
    RHListenersLikeMeViewModel *_viewModel;
    UITableView *_tableView;
    _TtC7Napster19RHDeferredImageView *_artworkImageView;
    RHListenersLikeMeHeaderViewController *_headerViewController;
}

+ (id)deferredViewControllerWithDependencies:(id)arg1 profile:(id)arg2 metricsSource:(id)arg3;
@property(retain, nonatomic) RHListenersLikeMeHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) RHListenersLikeMeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)isNavigationBarUpdater;
- (double)alphaForBottomMarginOfView:(id)arg1;
- (double)navigationAlpha;
- (id)metricsScreenEvent;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tasteOverlapCellForIndexPath:(id)arg1;
- (id)trendingFollowingCell;
- (id)trendingListenersCell;
- (_Bool)isFollowingCellAtIndexPath:(id)arg1;
- (_Bool)isListenersCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configureKVO;
- (void)configureTableView;
- (void)configureHeaderViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 metricsSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
