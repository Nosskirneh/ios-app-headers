//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDataSourceAbstract.h"

#import "DZRDynamicPageDataSource-Protocol.h"

@class DZRAsyncStateMachine, DZRDynamicPageData, DZRNativeAdsManager, NSDate, NSMutableArray, NSString, NSTimer, _TtC6Deezer13LoadingStates;
@protocol DZRDynamicPageCacheProtocol, DZRDynamicPageDataDownloaderProtocol, DZRDynamicPageItem, DZRDynamicPageReachabilityProtocol, DZRDynamicPageSectionLayoutConfiguration, DZRDynamicPageUserSessionProtocol, NSObject;

@interface DZRDynamicPageDataSource : DZRDataSourceAbstract <DZRDynamicPageDataSource>
{
    _Bool _pageIsNavigationRootViewController;
    _Bool _hasMasthead;
    _Bool _loading;
    _Bool _firstDataAppearance;
    NSString *_dynamicPageName;
    id <DZRDynamicPageItem> _dynamicPageItem;
    DZRDynamicPageData *_dynamicPageData;
    NSDate *_expirationDate;
    NSTimer *_expirationTimer;
    NSTimer *_refreshTimer;
    DZRAsyncStateMachine *_stateMachine;
    NSMutableArray *_notificationObservers;
    id <NSObject> _kidStatusUpdateNotificationObserver;
    id <DZRDynamicPageSectionLayoutConfiguration> _layoutConfiguration;
    DZRNativeAdsManager *_adsManager;
    _TtC6Deezer13LoadingStates *_loadingStates;
    id <DZRDynamicPageDataDownloaderProtocol> _dataDownloader;
    id <DZRDynamicPageReachabilityProtocol> _reachability;
    id <DZRDynamicPageCacheProtocol> _cache;
    id <DZRDynamicPageUserSessionProtocol> _userSession;
}

@property(retain, nonatomic) id <DZRDynamicPageUserSessionProtocol> userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <DZRDynamicPageCacheProtocol> cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <DZRDynamicPageReachabilityProtocol> reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id <DZRDynamicPageDataDownloaderProtocol> dataDownloader; // @synthesize dataDownloader=_dataDownloader;
@property(retain, nonatomic) _TtC6Deezer13LoadingStates *loadingStates; // @synthesize loadingStates=_loadingStates;
@property(retain, nonatomic) DZRNativeAdsManager *adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <DZRDynamicPageSectionLayoutConfiguration> layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(retain, nonatomic) id <NSObject> kidStatusUpdateNotificationObserver; // @synthesize kidStatusUpdateNotificationObserver=_kidStatusUpdateNotificationObserver;
@property(retain, nonatomic) NSMutableArray *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property(nonatomic, getter=isFirstDataAppearance) _Bool firstDataAppearance; // @synthesize firstDataAppearance=_firstDataAppearance;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) DZRAsyncStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) _Bool hasMasthead; // @synthesize hasMasthead=_hasMasthead;
@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) DZRDynamicPageData *dynamicPageData; // @synthesize dynamicPageData=_dynamicPageData;
@property(retain, nonatomic) id <DZRDynamicPageItem> dynamicPageItem; // @synthesize dynamicPageItem=_dynamicPageItem;
@property(copy, nonatomic, getter=dynamicPageName) NSString *dynamicPageName; // @synthesize dynamicPageName=_dynamicPageName;
@property(nonatomic) _Bool pageIsNavigationRootViewController; // @synthesize pageIsNavigationRootViewController=_pageIsNavigationRootViewController;
- (void).cxx_destruct;
- (void)enterOnboarding;
- (void)enterNoDataServerError;
- (void)enterOfflineNetwork;
- (void)enterOfflineForced;
- (void)enterHasFreshData;
- (void)enterWaitingUserConnection;
- (void)transitionFromLoadingOnlineOnOnlineResponseSuccess;
- (void)enterLoadingOnline;
- (void)transitionFromLoadingOfflineOnOfflineResponseSuccess;
- (void)enterHasCachedData;
- (void)enterLoadingOffline;
- (void)pushEvent:(id)arg1;
- (void)notifyFailedToUpdateItemsWithError:(id)arg1;
- (void)notifyLoadingStateChanged:(_Bool)arg1;
- (void)updateDataWithNewData:(id)arg1;
- (id)indexPathForItemWithUniqueID:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (_Bool)shouldDisplayTitleLabelsInLeftOfNavigationBar;
- (id)itemAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)networkIsReachable;
- (void)addSection:(id)arg1 atIndex:(long long)arg2;
- (id)conversionSection;
- (long long)indexOfSectionWithId:(id)arg1;
- (id)parseData:(id)arg1;
- (void)loadOnlineDynamicPageData;
- (_Bool)isCachedDataExpired;
- (void)loadOfflineDynamicPageData;
- (void)loadTestData;
- (void)launchTimer;
- (void)refreshData;
- (void)restartLoadingProcess;
- (_Bool)hasData;
- (id)backgroundColor;
- (id)dynamicPageId;
- (id)dynamicPageTitle;
- (id)navigationPath;
- (id)createKidStatusUpdateNotificationObserver;
- (void)addKidStatusUpdateNotificationObserver;
- (void)removeNotificationObservers;
- (void)initializeNotificationObservers;
- (void)initializeReachability;
- (void)initializeStateMachine;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dynamicPageName:(id)arg2 layoutConfiguration:(id)arg3 nativeAdsManager:(id)arg4 dataDownloader:(id)arg5 reachability:(id)arg6 cache:(id)arg7 userSession:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
