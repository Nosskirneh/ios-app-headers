//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomTableViewController.h"

#import "GADBannerViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AnghamiConnectionStatusBar, DFPBannerView, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UISearchBar, UIView;
@protocol AnghamiTableDelegate;

@interface AnghamiTableViewController : CustomTableViewController <UISearchBarDelegate, GADBannerViewDelegate, UIActionSheetDelegate>
{
    AnghamiConnectionStatusBar *_connectionStatusBar;
    _Bool _connectionStatusBarShowing;
    _Bool _showConnectionStatusBar;
    UILabel *_playlistTip;
    _Bool _showPlaylistFollowTip;
    NSLayoutConstraint *_connectionStatusBarHeight;
    NSLayoutConstraint *_connectionStatusBarTop;
    double _previousScrollPosition;
    double _previousScrollDirection;
    NSLayoutConstraint *_leaderboardContainerHeightConstraint;
    _Bool _leaderboardShowing;
    _Bool _shouldScrollToHideSearchHeader;
    double _originalTableViewHeight;
    double _originalHeaderHeight;
    UIActivityIndicatorView *activityIndicator;
    _Bool _hideLeaderboard;
    _Bool _isHeaderStatic;
    _Bool _isShuffleButtonEnabled;
    _Bool _isShareButtonEnabled;
    _Bool _ownPlaylist;
    _Bool _isShowBottomInset;
    _Bool _noLeaderBoardOffset;
    id <AnghamiTableDelegate> _anghamiTableDelegate;
    UIView *_headerView;
    UIView *_headerButtonsView;
    UIButton *_shareButton;
    UIButton *_secondaryButton;
    UIView *_headerSearchFieldHolder;
    UISearchBar *_headerSearchField;
    UIButton *_searchDismissButton;
    UIView *_centerTextView;
    UILabel *_centerTextLabel;
    UIView *_leaderboardContainer;
    DFPBannerView *_leaderboard;
    long long _numberOfFollowers;
    NSLayoutConstraint *_tableViewOrigin;
}

@property(retain, nonatomic) NSLayoutConstraint *tableViewOrigin; // @synthesize tableViewOrigin=_tableViewOrigin;
@property _Bool noLeaderBoardOffset; // @synthesize noLeaderBoardOffset=_noLeaderBoardOffset;
@property _Bool isShowBottomInset; // @synthesize isShowBottomInset=_isShowBottomInset;
@property long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property _Bool ownPlaylist; // @synthesize ownPlaylist=_ownPlaylist;
@property(retain, nonatomic) DFPBannerView *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) UIView *leaderboardContainer; // @synthesize leaderboardContainer=_leaderboardContainer;
@property(retain, nonatomic) UILabel *centerTextLabel; // @synthesize centerTextLabel=_centerTextLabel;
@property(retain, nonatomic) UIView *centerTextView; // @synthesize centerTextView=_centerTextView;
@property(retain, nonatomic) UIButton *searchDismissButton; // @synthesize searchDismissButton=_searchDismissButton;
@property(retain, nonatomic) UISearchBar *headerSearchField; // @synthesize headerSearchField=_headerSearchField;
@property(retain, nonatomic) UIView *headerSearchFieldHolder; // @synthesize headerSearchFieldHolder=_headerSearchFieldHolder;
@property(nonatomic) _Bool isShareButtonEnabled; // @synthesize isShareButtonEnabled=_isShareButtonEnabled;
@property(nonatomic) _Bool isShuffleButtonEnabled; // @synthesize isShuffleButtonEnabled=_isShuffleButtonEnabled;
@property(retain, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView *headerButtonsView; // @synthesize headerButtonsView=_headerButtonsView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isHeaderStatic; // @synthesize isHeaderStatic=_isHeaderStatic;
@property _Bool hideLeaderboard; // @synthesize hideLeaderboard=_hideLeaderboard;
@property(nonatomic) __weak id <AnghamiTableDelegate> anghamiTableDelegate; // @synthesize anghamiTableDelegate=_anghamiTableDelegate;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (double)searchBarTableResizeHeight;
- (double)searchBarStaticHeaderHeight;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (id)adUnitId;
- (void)loadCellCoverArt;
- (void)loadCellCoverArtAfterDelay;
- (void)toggleEdit;
- (void)hideSecondaryButton;
- (void)adjustButtonPositions;
- (void)addGoToArtistButton;
- (void)addAddToPlaylistButton;
- (void)playlistsUnfollowedHeader;
- (void)shareObject:(id)arg1;
- (void)addShuffleButton;
- (void)addSubscribeButton:(_Bool)arg1;
- (void)setFollowersButton:(_Bool)arg1;
- (void)setFollowersLabel;
- (void)addFollowTip;
- (void)goToArtist:(id)arg1;
- (void)add2playlistAction:(id)arg1;
- (void)clearButtonAction:(id)arg1;
- (void)subscribeButtonAction:(id)arg1;
- (void)shuffleButtonAction:(id)arg1;
- (_Bool)removeSearchHeaderIfRowsLessThan:(long long)arg1;
- (_Bool)removeSearchHeaderStatically:(_Bool)arg1;
- (_Bool)removeSearchHeader;
- (_Bool)addSearchHeaderIfRowsGreaterThan:(long long)arg1;
- (_Bool)addSearchHeader;
- (_Bool)addSearchHeaderStatically:(_Bool)arg1;
- (void)addHeaderStatically:(_Bool)arg1 showButtons:(_Bool)arg2;
- (void)addLeaderboard;
- (id)customAdParameters;
- (id)adSizes;
- (_Bool)supportsMultipleAdSizes;
- (struct CGSize)adSize;
- (void)removeLeaderboard;
- (void)positionHeaderButtonsView;
- (void)createHeaderViewShowButtons:(_Bool)arg1;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (long long)connectionStatusBarVerticalOffset;
- (void)updateHeaderViewHeight;
- (void)connectionStateDidChangeAnimated:(_Bool)arg1;
- (void)connectionStateDidChange;
@property _Bool showConnectionStatusBar;
- (void)willEnterOfflineMode;
- (void)willEnterOnlineMode;
@property(readonly) long long leaderboardOffset;
- (double)calculateTopInset;
- (void)viewDidLayoutSubviews;
- (void)adjustTopInset;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (double)bottomOffset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTableViewStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

