//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataSourceStateDelegate-Protocol.h"

@class NSArray, NSString, NewAndShinyDataSource, RACScheduler, RACScopedDisposable, SearchActionHandler, SearchCellPresenter, SearchConfiguration, SearchService, SearchStringUtils, SearchViewDataSourceFactory, SearchViewLayoutsFactory, SignificantDataChangeNotificationFactory, StateDelegateLayout, TrackActionHandler, TrackCellPresenter, UICollectionView, UIViewController, _TtC6Search31SearchEngagementTrackingHandler, _TtC8Features18AnalyticsConstants;
@protocol SearchControllerDelegate, SupplementaryViewPresenter, TaggableScreen, _TtP8Features23AppPerformanceProfiling_;

@interface SearchController : NSObject <DataSourceStateDelegate>
{
    id <SearchControllerDelegate> _searchControllerDelegate;
    UIViewController<TaggableScreen> *_viewController;
    UICollectionView *_collectionView;
    SearchService *_searchService;
    SearchConfiguration *_searchConfiguration;
    SearchViewDataSourceFactory *_dataSourceFactory;
    SearchViewLayoutsFactory *_layoutsFactory;
    SearchCellPresenter *_searchCellPresenter;
    TrackCellPresenter *_trackCellPresenter;
    SearchActionHandler *_searchActionHandler;
    TrackActionHandler *_trackActionHandler;
    SearchStringUtils *_searchStringUtils;
    StateDelegateLayout *_layout;
    _TtC8Features18AnalyticsConstants *_analyticsConstants;
    NSArray *_layouts;
    NewAndShinyDataSource *_dataSource;
    NSArray *_dataSources;
    NSArray *_childLayouts;
    RACScopedDisposable *_significantDataChangesDisposable;
    SignificantDataChangeNotificationFactory *_notificationFactory;
    RACScheduler *_mainThreadScheduler;
    id <SupplementaryViewPresenter> _presenter;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
    _TtC6Search31SearchEngagementTrackingHandler *_searchEngagementTrackingHandler;
}

@property(readonly, nonatomic) _TtC6Search31SearchEngagementTrackingHandler *searchEngagementTrackingHandler; // @synthesize searchEngagementTrackingHandler=_searchEngagementTrackingHandler;
@property(retain, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(retain, nonatomic) id <SupplementaryViewPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) RACScheduler *mainThreadScheduler; // @synthesize mainThreadScheduler=_mainThreadScheduler;
@property(retain, nonatomic) SignificantDataChangeNotificationFactory *notificationFactory; // @synthesize notificationFactory=_notificationFactory;
@property(retain, nonatomic) RACScopedDisposable *significantDataChangesDisposable; // @synthesize significantDataChangesDisposable=_significantDataChangesDisposable;
@property(retain, nonatomic) NSArray *childLayouts; // @synthesize childLayouts=_childLayouts;
@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) NewAndShinyDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
@property(readonly, nonatomic) _TtC8Features18AnalyticsConstants *analyticsConstants; // @synthesize analyticsConstants=_analyticsConstants;
@property(readonly, nonatomic) __weak StateDelegateLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) SearchStringUtils *searchStringUtils; // @synthesize searchStringUtils=_searchStringUtils;
@property(readonly, nonatomic) TrackActionHandler *trackActionHandler; // @synthesize trackActionHandler=_trackActionHandler;
@property(readonly, nonatomic) SearchActionHandler *searchActionHandler; // @synthesize searchActionHandler=_searchActionHandler;
@property(readonly, nonatomic) TrackCellPresenter *trackCellPresenter; // @synthesize trackCellPresenter=_trackCellPresenter;
@property(readonly, nonatomic) SearchCellPresenter *searchCellPresenter; // @synthesize searchCellPresenter=_searchCellPresenter;
@property(readonly, nonatomic) SearchViewLayoutsFactory *layoutsFactory; // @synthesize layoutsFactory=_layoutsFactory;
@property(readonly, nonatomic) SearchViewDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
@property(copy, nonatomic) SearchConfiguration *searchConfiguration; // @synthesize searchConfiguration=_searchConfiguration;
@property(readonly, nonatomic) SearchService *searchService; // @synthesize searchService=_searchService;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) __weak UIViewController<TaggableScreen> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SearchControllerDelegate> searchControllerDelegate; // @synthesize searchControllerDelegate=_searchControllerDelegate;
- (void).cxx_destruct;
- (void)dataReloaded;
- (void)updateForState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long queryPosition;
@property(readonly, nonatomic) NSString *lastSearchQueryUrn;
@property(readonly, nonatomic) _Bool firstSectionEmpty;
- (void)endSearchPerformanceMeasurement;
- (void)observeSignificantDataChanges;
- (void)cleanupSearchResults;
- (_Bool)shouldCleanPreviousResults:(id)arg1;
- (void)setupLayouts;
- (id)allItemsDataSourcesWithSearchConfiguration:(id)arg1;
- (id)dataSourcesSearchConfiguration:(id)arg1;
- (void)performSearch:(id)arg1;
- (void)privacyUpdated;
- (void)performSearchWithConfiguration:(id)arg1;
- (void)performSearchWithConfiguration:(id)arg1 supplementaryViewPresenter:(id)arg2;
- (void)dealloc;
- (id)initWithTaggableViewController:(id)arg1 collectionView:(id)arg2 searchService:(id)arg3 dataSourceFactory:(id)arg4 layoutsFactory:(id)arg5 searchCellPresenter:(id)arg6 trackCellPresenter:(id)arg7 searchActionHandler:(id)arg8 trackActionHandler:(id)arg9 searchStringUtils:(id)arg10 analyticsConstants:(id)arg11 notificationFactory:(id)arg12 scheduler:(id)arg13 searchDecorator:(id)arg14 appPerformanceProfiler:(id)arg15;
- (id)initWithTaggableViewController:(id)arg1 collectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
