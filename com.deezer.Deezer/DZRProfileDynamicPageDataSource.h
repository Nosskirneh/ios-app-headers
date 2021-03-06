//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDataSourceAbstract.h"

#import "DZRDynamicPageDataSource-Protocol.h"

@class DZRAsyncStateMachine, DZRDynamicPageData, DZRNativeAdsManager, DZRReachabilityFacade, DeezerFriend, NSArray, NSMutableArray, NSString, NSTimer;
@protocol DZRDynamicPageItem, DZRDynamicPageSectionLayoutConfiguration, MAKVOObservation;

@interface DZRProfileDynamicPageDataSource : DZRDataSourceAbstract <DZRDynamicPageDataSource>
{
    _Bool _pageIsNavigationRootViewController;
    _Bool _hasMasthead;
    _Bool _loading;
    _Bool _firstMastheadAppearance;
    DeezerFriend *_user;
    id <MAKVOObservation> _userInfosObserver;
    id <MAKVOObservation> _updatedPlaylistsObserver;
    id <MAKVOObservation> _notificationsObserver;
    NSArray *_globalAppObservers;
    NSMutableArray *_sections;
    id <DZRDynamicPageItem> _dynamicPageItem;
    DZRDynamicPageData *_dynamicPageData;
    NSTimer *_recentlyPlayedTimer;
    DZRAsyncStateMachine *_stateMachine;
    DZRReachabilityFacade *_reachability;
    id <DZRDynamicPageSectionLayoutConfiguration> _layoutConfiguration;
    DZRNativeAdsManager *_adsManager;
}

+ (void)cleanCachedDynamicPages;
@property(retain, nonatomic) DZRNativeAdsManager *adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <DZRDynamicPageSectionLayoutConfiguration> layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(nonatomic, getter=isFirstMastheadAppearance) _Bool firstMastheadAppearance; // @synthesize firstMastheadAppearance=_firstMastheadAppearance;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) DZRReachabilityFacade *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) DZRAsyncStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSTimer *recentlyPlayedTimer; // @synthesize recentlyPlayedTimer=_recentlyPlayedTimer;
@property(nonatomic) _Bool hasMasthead; // @synthesize hasMasthead=_hasMasthead;
@property(readonly, nonatomic) DZRDynamicPageData *dynamicPageData; // @synthesize dynamicPageData=_dynamicPageData;
@property(retain, nonatomic) id <DZRDynamicPageItem> dynamicPageItem; // @synthesize dynamicPageItem=_dynamicPageItem;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *globalAppObservers; // @synthesize globalAppObservers=_globalAppObservers;
@property(retain, nonatomic) id <MAKVOObservation> notificationsObserver; // @synthesize notificationsObserver=_notificationsObserver;
@property(retain, nonatomic) id <MAKVOObservation> updatedPlaylistsObserver; // @synthesize updatedPlaylistsObserver=_updatedPlaylistsObserver;
@property(retain, nonatomic) id <MAKVOObservation> userInfosObserver; // @synthesize userInfosObserver=_userInfosObserver;
@property(retain, nonatomic) DeezerFriend *user; // @synthesize user=_user;
@property(nonatomic) _Bool pageIsNavigationRootViewController; // @synthesize pageIsNavigationRootViewController=_pageIsNavigationRootViewController;
- (void).cxx_destruct;
- (void)notifyLibraryItemsUpdatedAndShouldScrollToTop:(_Bool)arg1;
- (void)enterNoDataServerError;
- (void)enterOfflineNetwork;
- (void)enterOfflineForced;
- (void)enterForcedRefresh;
- (void)enterHasData;
- (void)enterLoadingOnline;
- (void)enterWaitingUserConnect;
- (void)enterLoadingOffline;
- (void)recentlyPlayedTimerDidTick;
- (void)cancelRecentlyPlayedTimer;
- (void)scheduleRecentlyPlayedTimer;
- (_Bool)pageIsLoadingEvenForCurrentUser;
- (_Bool)pageIsLoading;
- (_Bool)hasLoadedUserInfos;
- (_Bool)isLoadingUserInfos;
- (void)loadUsersInfo;
- (id)idStringFromDictionary:(id)arg1;
- (id)shuffleItemIDForNavigationDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)navigationItemIDForNavigationDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)itemIDForNavigationDictionary:(id)arg1 forType:(long long)arg2 inSection:(id)arg3 atIndex:(long long)arg4;
- (id)shuffleItemForNavigationDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)navigationItemForNavigationDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)captionWithString:(id)arg1;
- (id)favoriteAudiobookSection;
- (id)favoriteTalksSection;
- (id)favoriteWebApplicationsSection;
- (id)lovedTracksPlaylistSection;
- (id)favoriteArtistsSection;
- (id)favoriteMixesSection;
- (id)favoritePlaylistsSection;
- (id)favoriteAlbumsSection;
- (id)synchronizedMusicSection;
- (id)shuffledCollectionSection;
- (id)recentlyPlayedSection;
- (id)bannerConversionSection;
- (void)updateRecentlyPlayed;
- (void)carModeChangeReceived;
- (id)mastheadSection;
- (long long)numberOfOfflineItems;
- (_Bool)shouldDisplayCaptions;
- (_Bool)shouldDisplaySeparators;
- (void)insertSection:(id)arg1;
- (id)sectionIDForSectionIdentifier:(id)arg1;
- (id)profilePageStateView;
- (void)parseData;
- (void)resetData;
- (_Bool)userProfileIsPrivate;
- (void)userAdditionalInfosReceived;
- (void)userInfosReceived;
- (id)indexPathForItemWithUniqueID:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (_Bool)shouldDisplayTitleLabelsInLeftOfNavigationBar;
- (id)itemAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)addSection:(id)arg1 atIndex:(long long)arg2;
- (void)updateDataWithNewData:(id)arg1;
- (void)refreshData;
- (void)restartLoadingProcess;
- (_Bool)hasData;
- (id)backgroundColor;
- (id)dynamicPageName;
- (id)dynamicPageId;
- (id)dynamicPageTitle;
- (id)navigationPath;
- (void)removeBadgeValuesObservers;
- (void)initialiseBadgeValuesObservers;
- (void)removeGlobalAppObservers;
- (void)initialiseGlobalAppObservers;
- (void)removeUserNotificationObservers;
- (void)initialiseUserNotificationObservers;
- (void)initialiseReachability;
- (void)initialiseStateMachine;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 friend:(id)arg2 layoutConfiguration:(id)arg3 nativeAdsManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

