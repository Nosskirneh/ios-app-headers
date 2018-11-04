//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTPageController.h"
#import "SPTSingleRequestViewModelDelegate.h"
#import "SPViewController.h"
#import "UISearchBarDelegate.h"
#import "UISearchResultsUpdating.h"

@class GLUEEntityRowStyle, NSArray, NSString, NSURL, SPNavigationController, SPTArtistAlbumsViewModel, SPTArtistLogger, SPTInfoView, SPTProgressView, UISearchController;

@interface SPTArtistAlbumViewController : UITableViewController <SPTSingleRequestViewModelDelegate, SPContentInsetViewController, UISearchResultsUpdating, UISearchBarDelegate, SPViewController, SPTPageController>
{
    SPTArtistLogger *_artistLogger;
    NSURL *_viewURL;
    SPTArtistAlbumsViewModel *_viewModel;
    id <SPTAlbumsViewModelData> _viewData;
    UISearchController *_searchController;
    NSArray *_albumsToDisplay;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_playlistRowStyle;
    SPNavigationController *_weakNavigationController;
}

@property(nonatomic) __weak SPNavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(readonly, nonatomic) GLUEEntityRowStyle *playlistRowStyle; // @synthesize playlistRowStyle=_playlistRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSArray *albumsToDisplay; // @synthesize albumsToDisplay=_albumsToDisplay;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) id <SPTAlbumsViewModelData> viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) SPTArtistAlbumsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(retain, nonatomic) SPTArtistLogger *artistLogger; // @synthesize artistLogger=_artistLogger;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)albumsFilteredWithString:(id)arg1;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic) NSURL *URI;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 forItem:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)titleForType:(long long)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 type:(long long)arg2 viewModel:(id)arg3 glueImageLoader:(id)arg4 artistLogger:(id)arg5 linkDispatcher:(id)arg6;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
