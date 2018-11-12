//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTFindFriendsViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowStyle, NSString, NSTimer, NSURL, SPTActionButton, SPTFindFriendsLogger, SPTFindFriendsTheme, SPTFindFriendsViewModel, SPTInfoView, SPTProgressView, SPTSearchBar, SPTTableView, UIView;
@protocol GLUEImageLoader, SPTAlertController, SPTLinkDispatcher, SPTPageContainer;

@interface SPTFindFriendsVC : UIViewController <SPTFindFriendsViewModelDelegate, UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController, UISearchBarDelegate, SPTPageController>
{
    _Bool _isSearchActive;
    _Bool _isSearchButtonEvent;
    SPTFindFriendsViewModel *_viewModel;
    id <GLUEImageLoader> _imageLoader;
    SPTFindFriendsLogger *_logger;
    SPTTableView *_tableView;
    UIView *_friendsSectionHeaderView;
    SPTActionButton *_friendsFollowAllButton;
    SPTSearchBar *_friendsSearchBar;
    SPTInfoView *_infoView;
    SPTProgressView *_progressView;
    NSTimer *_searchTimer;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
    SPTFindFriendsTheme *_theme;
    GLUEEntityRowStyle *_entityRowArtistStyle;
    GLUEEntityRowStyle *_entityRowUserStyle;
}

@property(retain, nonatomic) GLUEEntityRowStyle *entityRowUserStyle; // @synthesize entityRowUserStyle=_entityRowUserStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowArtistStyle; // @synthesize entityRowArtistStyle=_entityRowArtistStyle;
@property(retain, nonatomic) SPTFindFriendsTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer=_searchTimer;
@property(nonatomic) _Bool isSearchButtonEvent; // @synthesize isSearchButtonEvent=_isSearchButtonEvent;
@property(nonatomic) _Bool isSearchActive; // @synthesize isSearchActive=_isSearchActive;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTSearchBar *friendsSearchBar; // @synthesize friendsSearchBar=_friendsSearchBar;
@property(retain, nonatomic) SPTActionButton *friendsFollowAllButton; // @synthesize friendsFollowAllButton=_friendsFollowAllButton;
@property(retain, nonatomic) UIView *friendsSectionHeaderView; // @synthesize friendsSectionHeaderView=_friendsSectionHeaderView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTFindFriendsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTFindFriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)URI;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)invalidateSearchTimer;
- (void)performSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)sp_updateContentInsets;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureProfileCell:(id)arg1 indexPath:(id)arg2 entity:(id)arg3;
- (void)setupLeadingAccessoryForCell:(id)arg1 entity:(id)arg2;
- (id)indexPathForButton:(id)arg1;
- (void)updateAccessoryButton:(id)arg1 following:(_Bool)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 entity:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)findFriendsViewModel:(id)arg1 didFailToUpdateFollowStateWithError:(id)arg2;
- (void)findFriendsViewModel:(id)arg1 didUpdateFollowStateForUserAtIndex:(unsigned long long)arg2;
- (void)findFriendsViewModel:(id)arg1 isOffline:(_Bool)arg2;
- (void)findFriendsViewModel:(id)arg1 isLoading:(_Bool)arg2;
- (void)findFriendsViewModel:(id)arg1 didFindMatches:(_Bool)arg2;
- (void)findFriendsViewModel:(id)arg1 hasLoadedFriendsWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)findFriendsViewModel:(id)arg1 hasDisconnectedFromNetworkType:(long long)arg2;
- (void)findFriendsViewModel:(id)arg1 hasConnectedToNetworkType:(long long)arg2;
- (void)didAcceptFollowAlert;
- (void)followAllButtonTapped;
- (void)followButtonIndexPathTapped:(unsigned long long)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)networkConnectButtonTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)configureViewForFilteringMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateFriendsCount:(unsigned long long)arg1;
- (void)showInfoView:(_Bool)arg1;
- (void)showOfflineView:(_Bool)arg1;
- (void)updateNUXInfoView;
- (void)changeVisibilityOfFriendsTableHeaderView;
- (void)applyViewLayoutWithSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupFriendsSectionHeaderView;
- (void)setupTableViewLayoutConstraints;
- (void)setupTableView;
- (void)setupInfoView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3 logger:(id)arg4 linkDispatcher:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

