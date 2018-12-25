//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

#import "GOOHeaderNavigationParentViewController-Protocol.h"
#import "MDCAppBarNavigationControllerDelegate-Protocol.h"
#import "MDCCollectionViewStylingDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GRWApp, GRWAppWatchdogManager, GRWPreferences, GRWProductsManager, NSArray, NSDictionary, NSString;

@interface GRWGoogleAppsListViewController : MDCCollectionViewController <UICollectionViewDataSource, MDCCollectionViewStylingDelegate, GOOHeaderNavigationParentViewController, MDCAppBarNavigationControllerDelegate>
{
    _Bool _showGoogleUsageIDButton;
    _Bool _showFeaturedApp;
    _Bool _showRecommendedApps;
    _Bool _didFetchFeaturedAndRecommendedApps;
    GOOHeaderNavigationView *_headerNavigationView;
    GOOFlexibleHeaderViewController *_headerViewController;
    GRWPreferences *_preferences;
    GRWApp *_featuredApp;
    GRWProductsManager *_productsManager;
    GRWAppWatchdogManager *_appWatchdogManager;
    NSArray *_allApps;
    NSArray *_recommendedApps;
    NSArray *_settingsTags;
    NSDictionary *_allAppsByTag;
    long long _sectionMask;
    long long _headerMode;
    NSArray *_sections;
}

+ (id)googleAppSettingsButtonTitleString;
+ (id)appsListInNavigationControllerWithSectionMask:(long long)arg1;
+ (id)appsListInNavigationController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool didFetchFeaturedAndRecommendedApps; // @synthesize didFetchFeaturedAndRecommendedApps=_didFetchFeaturedAndRecommendedApps;
@property(nonatomic) long long headerMode; // @synthesize headerMode=_headerMode;
@property(nonatomic) long long sectionMask; // @synthesize sectionMask=_sectionMask;
@property(retain, nonatomic) NSDictionary *allAppsByTag; // @synthesize allAppsByTag=_allAppsByTag;
@property(copy, nonatomic) NSArray *settingsTags; // @synthesize settingsTags=_settingsTags;
@property(copy, nonatomic) NSArray *recommendedApps; // @synthesize recommendedApps=_recommendedApps;
@property(copy, nonatomic) NSArray *allApps; // @synthesize allApps=_allApps;
@property(nonatomic) __weak GRWAppWatchdogManager *appWatchdogManager; // @synthesize appWatchdogManager=_appWatchdogManager;
@property(retain, nonatomic) GRWProductsManager *productsManager; // @synthesize productsManager=_productsManager;
@property(retain, nonatomic) GRWApp *featuredApp; // @synthesize featuredApp=_featuredApp;
@property(retain, nonatomic) GRWPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool showRecommendedApps; // @synthesize showRecommendedApps=_showRecommendedApps;
@property(nonatomic) _Bool showFeaturedApp; // @synthesize showFeaturedApp=_showFeaturedApp;
@property(nonatomic) _Bool showGoogleUsageIDButton; // @synthesize showGoogleUsageIDButton=_showGoogleUsageIDButton;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
- (void).cxx_destruct;
- (void)didTapBackButton:(id)arg1;
- (void)appBarNavigationController:(id)arg1 willAddAppBarViewController:(id)arg2 asChildOfViewController:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showAppStoreForApp:(id)arg1 context:(unsigned long long)arg2;
- (_Bool)askMeEveryTimeSwitchShouldBeOnForIntentType:(int)arg1;
- (unsigned long long)collectionView:(id)arg1 cellStyleForSection:(long long)arg2;
- (double)collectionView:(id)arg1 cellHeightAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideFooterSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideHeaderSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideItemSeparatorAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateAppStatus:(id)arg1;
- (void)appStatusChanged:(id)arg1;
- (void)productsManagerUpdated;
- (void)applicationDidBecomeActive;
- (id)tagForIntentSection:(long long)arg1;
- (id)titleForIntentSection:(long long)arg1;
- (id)sectionHeaderTitleForLogicalSection:(long long)arg1;
- (void)buildSections;
- (void)refreshAllAppsIfNeeded;
- (id)headerInCollectionView:(id)arg1 atIndexPath:(id)arg2 withTitle:(id)arg3;
- (_Bool)shouldRenderRecommendedAppSection;
- (_Bool)shouldRenderFeaturedAppSection;
- (void)reorderBrowserListInTagDictionary:(id)arg1;
- (void)removeInboxIfNotInstalledFromTagDictionary:(id)arg1;
- (id)tagDictionaryForApps:(id)arg1;
- (id)tagsFromSectionMask:(long long)arg1;
- (int)intentTypeForTag:(id)arg1;
- (void)configureFeaturedAndRecommendedApps;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)willBePresentedOnIpad;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUpWithPreferences:(id)arg1 productsManager:(id)arg2 options:(id)arg3 showFeaturedApp:(_Bool)arg4 showRecommendedApps:(_Bool)arg5;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)initWithSectionMask:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
