//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SearchControllerDelegate-Protocol.h"
#import "SearchFilterDelegate-Protocol.h"
#import "TaggableSearchResultControlling-Protocol.h"
#import "_TtP2UI24ScrollableViewController_-Protocol.h"

@class NSString, SearchConfiguration, SearchController, SearchFilterController, SearchHighTierLauncher, SearchResultViewPresenter, TaggingContext, UICollectionView, UIView, _TtC8Features18AnalyticsConstants;

@interface SearchResultViewController : UIViewController <SearchControllerDelegate, SearchFilterDelegate, TaggableSearchResultControlling, _TtP2UI24ScrollableViewController_>
{
    UIView *_filtersSupportView;
    UICollectionView *_collectionView;
    UICollectionView *_filtersCollectionView;
    UIView *_topSeparatorView;
    _TtC8Features18AnalyticsConstants *_analyticsConstants;
    SearchFilterController *_searchFilterController;
    SearchResultViewPresenter *_viewPresenter;
    SearchConfiguration *_searchConfiguration;
    SearchController *_searchController;
    SearchHighTierLauncher *_searchHighTierLauncher;
}

@property(retain, nonatomic) SearchHighTierLauncher *searchHighTierLauncher; // @synthesize searchHighTierLauncher=_searchHighTierLauncher;
@property(retain, nonatomic) SearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) SearchConfiguration *searchConfiguration; // @synthesize searchConfiguration=_searchConfiguration;
@property(readonly, nonatomic) SearchResultViewPresenter *viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(retain, nonatomic) SearchFilterController *searchFilterController; // @synthesize searchFilterController=_searchFilterController;
@property(readonly, nonatomic) _TtC8Features18AnalyticsConstants *analyticsConstants; // @synthesize analyticsConstants=_analyticsConstants;
@property(nonatomic) __weak UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) __weak UICollectionView *filtersCollectionView; // @synthesize filtersCollectionView=_filtersCollectionView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIView *filtersSupportView; // @synthesize filtersSupportView=_filtersSupportView;
- (void).cxx_destruct;
- (void)scrollToTop;
@property(readonly, nonatomic) _Bool isAtTopOfSearchResults;
@property(readonly, nonatomic) long long screen;
@property(readonly, nonatomic) TaggingContext *sourceContext;
- (void)tagUpsellImpressionIfNeeded;
- (void)searchControllerDidReloadData:(id)arg1;
- (void)searchController:(id)arg1 didSelectHighTierResultsWithQuery:(id)arg2 queryUrn:(id)arg3;
- (void)searchControllerDidSelectUpsell:(id)arg1;
- (void)searchFilterController:(id)arg1 didSelectFilterType:(long long)arg2;
- (void)searchWithConfiguration:(id)arg1;
- (void)setupFiltersCollectionView;
- (void)setupSearchController;
- (void)searchWithQuery:(id)arg1 queryUrn:(id)arg2;
- (_Bool)shouldShowNavBarShadow;
- (void)setUpAccessibility;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

