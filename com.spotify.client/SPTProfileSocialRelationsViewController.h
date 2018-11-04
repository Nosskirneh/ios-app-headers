//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPObjectRepresentation.h"
#import "SPTPageController.h"
#import "SPTProfileSocialRelationsViewModelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSString, NSURL, SPTProfileInfoViewController, SPTProfileSocialRelationsViewModel, SPTProfileTheme, SPTTableView;

@interface SPTProfileSocialRelationsViewController : SPViewController <SPTProfileSocialRelationsViewModelDelegate, SPObjectRepresentation, UITableViewDelegate, UITableViewDataSource, SPTPageController>
{
    SPTProfileSocialRelationsViewModel *_viewModel;
    id <SPTViewLogger> _viewLogger;
    SPTProfileTheme *_theme;
    id <GLUEImageLoader> _imageLoader;
    GLUEEntityRowStyle *_entityRowProfileStyle;
    SPTTableView *_tableView;
    SPTProfileInfoViewController *_infoViewController;
}

@property(retain, nonatomic) SPTProfileInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowProfileStyle; // @synthesize entityRowProfileStyle=_entityRowProfileStyle;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTProfileTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTProfileSocialRelationsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 socialRelation:(id)arg2;
- (id)indexPathForButton:(id)arg1;
- (void)updateAccessoryButton:(id)arg1 following:(_Bool)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 socialRelation:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateSocialRelationsEntity:(id)arg2 index:(long long)arg3;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (id)URI;
- (void)followButtonTapped:(id)arg1;
- (void)setupTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 theme:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

