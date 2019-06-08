//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHRootViewController.h"

#import "UITabBarDelegate-Protocol.h"

@class NSDictionary, NSLayoutConstraint, NSNotificationCenter, NSString, RHAlreadyMemberViewController, RHDiscoverFansViewController, RHMiniPlayerViewController, RHNavigationController, RHNavigationService, RHRadioHubViewController, RHStatusBarView, RHUpsellFullScreenViewController, RHViewController, UINavigationController, UIPanGestureRecognizer, UITabBar, UITabBarItem, UIView, UIViewController, _TtC7Napster12Dependencies, _TtC7Napster21MyMusicViewController, _TtC7Napster27OmnibarUpsellViewController;
@protocol RHSearchController;

@interface RHRootViewController_iphone : RHRootViewController <UITabBarDelegate>
{
    _Bool _miniPlayerVisibilityUpdateDisabled;
    _Bool _isMiniPlayerSetAsHidden;
    long long _selectedTabBarItem;
    UITabBar *_tabBar;
    UIView *_mainContainerView;
    UIView *_contentContainerView;
    UIView *_omnibarUpsellContainer;
    UIView *_playerContainerView;
    NSLayoutConstraint *_miniPlayerContainerHeight;
    UIView *_tabBarView;
    RHStatusBarView *_statusBarView;
    NSLayoutConstraint *_statusBarHeight;
    NSLayoutConstraint *_tabBarViewHeight;
    RHUpsellFullScreenViewController *_upsellFullScreenViewController;
    RHNavigationController *_homeNavController;
    RHNavigationController *_exploreNavController;
    RHNavigationController *_genresNavController;
    RHNavigationController *_libraryNavController;
    RHNavigationController *_stationsNavController;
    RHNavigationController *_searchNavController;
    RHNavigationController *_profileNavController;
    RHNavigationController *_featuredNavController;
    RHNavigationController *_favoritesNavController;
    RHNavigationController *_queueNavController;
    RHNavigationController *_radioNavController;
    RHNavigationController *_upsellFullScreenNavController;
    RHNavigationController *_newsFeedNavController;
    RHAlreadyMemberViewController *_alreadyMemberNavController;
    UIViewController<RHSearchController> *_searchViewController;
    RHRadioHubViewController *_radioHubViewController;
    _TtC7Napster21MyMusicViewController *_myMusicViewController;
    RHViewController *_homeViewController;
    NSDictionary *_viewControllersByTab;
    id _networkStatusMessageId;
    RHMiniPlayerViewController *_miniPlayerViewController;
    RHDiscoverFansViewController *_discoverViewController;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _TtC7Napster27OmnibarUpsellViewController *_omnibarUpsellViewController;
    UITabBarItem *_myMusicTabBarItem;
}

@property(nonatomic) _Bool isMiniPlayerSetAsHidden; // @synthesize isMiniPlayerSetAsHidden=_isMiniPlayerSetAsHidden;
@property(retain, nonatomic) UITabBarItem *myMusicTabBarItem; // @synthesize myMusicTabBarItem=_myMusicTabBarItem;
@property(retain, nonatomic) _TtC7Napster27OmnibarUpsellViewController *omnibarUpsellViewController; // @synthesize omnibarUpsellViewController=_omnibarUpsellViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) RHDiscoverFansViewController *discoverViewController; // @synthesize discoverViewController=_discoverViewController;
@property(retain, nonatomic) RHMiniPlayerViewController *miniPlayerViewController; // @synthesize miniPlayerViewController=_miniPlayerViewController;
@property(retain, nonatomic) id networkStatusMessageId; // @synthesize networkStatusMessageId=_networkStatusMessageId;
@property(retain, nonatomic) NSDictionary *viewControllersByTab; // @synthesize viewControllersByTab=_viewControllersByTab;
@property(retain, nonatomic) RHViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(retain, nonatomic) _TtC7Napster21MyMusicViewController *myMusicViewController; // @synthesize myMusicViewController=_myMusicViewController;
@property(retain, nonatomic) RHRadioHubViewController *radioHubViewController; // @synthesize radioHubViewController=_radioHubViewController;
@property(retain, nonatomic) UIViewController<RHSearchController> *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) RHAlreadyMemberViewController *alreadyMemberNavController; // @synthesize alreadyMemberNavController=_alreadyMemberNavController;
@property(retain, nonatomic) RHNavigationController *newsFeedNavController; // @synthesize newsFeedNavController=_newsFeedNavController;
@property(retain, nonatomic) RHNavigationController *upsellFullScreenNavController; // @synthesize upsellFullScreenNavController=_upsellFullScreenNavController;
@property(retain, nonatomic) RHNavigationController *radioNavController; // @synthesize radioNavController=_radioNavController;
@property(retain, nonatomic) RHNavigationController *queueNavController; // @synthesize queueNavController=_queueNavController;
@property(retain, nonatomic) RHNavigationController *favoritesNavController; // @synthesize favoritesNavController=_favoritesNavController;
@property(retain, nonatomic) RHNavigationController *featuredNavController; // @synthesize featuredNavController=_featuredNavController;
@property(retain, nonatomic) RHNavigationController *profileNavController; // @synthesize profileNavController=_profileNavController;
@property(retain, nonatomic) RHNavigationController *searchNavController; // @synthesize searchNavController=_searchNavController;
@property(retain, nonatomic) RHNavigationController *stationsNavController; // @synthesize stationsNavController=_stationsNavController;
@property(retain, nonatomic) RHNavigationController *libraryNavController; // @synthesize libraryNavController=_libraryNavController;
@property(retain, nonatomic) RHNavigationController *genresNavController; // @synthesize genresNavController=_genresNavController;
@property(retain, nonatomic) RHNavigationController *exploreNavController; // @synthesize exploreNavController=_exploreNavController;
@property(retain, nonatomic) RHNavigationController *homeNavController; // @synthesize homeNavController=_homeNavController;
@property(retain, nonatomic) RHUpsellFullScreenViewController *upsellFullScreenViewController; // @synthesize upsellFullScreenViewController=_upsellFullScreenViewController;
@property(nonatomic) __weak NSLayoutConstraint *tabBarViewHeight; // @synthesize tabBarViewHeight=_tabBarViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) __weak RHStatusBarView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(nonatomic) __weak UIView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) __weak NSLayoutConstraint *miniPlayerContainerHeight; // @synthesize miniPlayerContainerHeight=_miniPlayerContainerHeight;
@property(nonatomic) __weak UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(nonatomic) __weak UIView *omnibarUpsellContainer; // @synthesize omnibarUpsellContainer=_omnibarUpsellContainer;
@property(nonatomic) __weak UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) __weak UIView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(readonly, nonatomic) _Bool miniPlayerVisibilityUpdateDisabled; // @synthesize miniPlayerVisibilityUpdateDisabled=_miniPlayerVisibilityUpdateDisabled;
@property(readonly, nonatomic) long long selectedTabBarItem; // @synthesize selectedTabBarItem=_selectedTabBarItem;
- (void).cxx_destruct;
- (id)reachabilityService;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) RHNavigationService *navigationService;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)updateOmnibarUpsellVisibility;
- (void)showMembersWhoLikedTrack:(id)arg1 noDataMessage:(id)arg2;
- (void)showMembersWhoLikedArtist:(id)arg1 firstTrack:(id)arg2;
- (void)showMembersWhoLikedTrack:(id)arg1;
- (void)hideDiscoverOtherView;
- (void)showDiscoverOtherViewForTrack:(id)arg1;
@property(readonly, nonatomic) double miniPlayerMaxHeight;
- (id)tooltipPresentationView;
- (id)presentedNavigationController;
- (void)showScreenForMode:(long long)arg1;
- (void)showDefaultModeHomeScreen;
- (id)topViewController;
- (id)topPresentedViewController;
- (id)activeNavigationController;
- (void)microPlayerTapped:(id)arg1;
- (void)updateMiniPlayer;
- (void)setTabBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMiniPlayerHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMiniPlayerHidden:(_Bool)arg1 animated:(_Bool)arg2 ignoreFurtherUpdates:(_Bool)arg3;
- (void)setOmnibarUpsellHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadMiniPlayers;
- (long long)preferredStatusBarStyle;
- (id)viewControllerForItem:(long long)arg1;
@property(readonly, nonatomic) UINavigationController *selectedNavController;
- (void)displayViewControllerForItem:(long long)arg1 metricsSource:(id)arg2;
- (void)setSelectedTabBarItem:(long long)arg1 animated:(_Bool)arg2 metricsSource:(id)arg3;
- (void)setSelectedTabBarItem:(long long)arg1 metricsSource:(id)arg2;
- (long long)selectedMenuItem;
- (void)tagEventForRadioFullScreenUpsell;
- (void)tagEventForFullScreenUpsellWithContext:(long long)arg1;
- (void)selectHomeMenuItem;
- (void)showUpsellFullScreenViewWithUpsellContext:(long long)arg1 upsellCompletionCallback:(CDUnknownBlockType)arg2;
- (void)showSignInView;
- (void)showSearchView;
- (void)showFeaturedViewWithMetricsSource:(id)arg1;
- (void)showRadioHubViewWithMetricsSource:(id)arg1;
- (void)showGenresView;
- (void)showFavoritesViewWithMetricsSource:(id)arg1;
- (void)ensurePopularScreenPresentedWithSelectedSegment:(long long)arg1 metricsSource:(id)arg2;
- (void)showTopArtistsWithMetricsSource:(id)arg1;
- (void)showTopAlbumsWithMetricsSource:(id)arg1;
- (void)showTopTracksWithMetricsSource:(id)arg1;
- (void)showStaffPicksWithMetricsSource:(id)arg1;
- (void)showHomeViewWithMetricsSource:(id)arg1;
- (void)showSearchWithQuery:(id)arg1;
- (_Bool)isRadioTabBarItemAvailable;
- (void)showFullScreenPlayer;
- (void)setStatusMessage:(id)arg1 ofType:(int)arg2;
- (void)downloadStatusChanged:(id)arg1;
- (void)pushViewControllerOnStack:(id)arg1;
- (void)pushViewController:(id)arg1 useActiveNavigationController:(_Bool)arg2;
- (void)pushPlaylistViewForPlaylist:(id)arg1 andStartPlaying:(_Bool)arg2 useActiveNavigationController:(_Bool)arg3;
- (id)memberOnlyItemMetricsName:(long long)arg1;
- (_Bool)isMemberOnlyItem:(long long)arg1;
- (void)leaveMemberOnlyItem;
- (void)didChangeAccount:(id)arg1;
- (void)networkStatusChanged:(id)arg1;
- (void)didFailSessionValidation:(id)arg1;
- (void)freeNavControllers;
- (void)didSignOut:(id)arg1;
- (void)didSignIn:(id)arg1;
- (id)settingsControllerWithMetricsSource:(id)arg1;
- (id)libraryNavMyStations;
- (void)showSettingsWithMetricsSource:(id)arg1;
- (void)pushViewControllersOnStack:(id)arg1 animated:(_Bool)arg2;
- (id)displayedViewControllerStack;
- (void)hideStatusBar;
- (void)updateStatusBarSizeOnSystemStatusBarChange:(id)arg1;
- (void)showStatusBar;
- (void)showStatusBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadTabBar;
- (void)loadTabBar;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

