//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FeedPlayableServiceDelegate-Protocol.h"
#import "InlayAdCellPresenterDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UpsellCellDelegate-Protocol.h"
#import "_TtP2UI24ScrollableViewController_-Protocol.h"

@class AnalyticsFeedEventTagger, AnalyticsInlayAdTagger, AnalyticsInteractionEventTagger, AnalyticsPromotedPlayableTagger, AnalyticsUpsellEventTagger, AuthUserNotificationFactory, CardCellActionHandler, ColumnLayout, FeedItemCellPresenter, FeedPlayableItemStorageControllerFactory, FeedPlayablesService, FeedService, InlayAdCellPresenter, InlayAdRequestController, NSString, NewAndShinyDataSource, PlayQueueDataSourceFactory, RACDisposable, RightAlignedImageButton, StateDelegateLayout, StreamUpsellCellPresenter, SuperCardCellPresenter, UICollectionView, UpsellFrequencyManager, UpsellLauncher, _TtC10SoundCloud25InlayVideoAdCellPresenter, _TtC10SoundCloud28AnalyticsScrollSessionTagger, _TtC8Features18AnalyticsConstants;
@protocol Launcher, PaginatableService, _TtP8Features23AppPerformanceProfiling_;

@interface FeedPlayablesViewController : BaseViewController <UpsellCellDelegate, UICollectionViewDelegate, FeedPlayableServiceDelegate, InlayAdCellPresenterDelegate, _TtP2UI24ScrollableViewController_>
{
    _Bool _didSkipLoadTasksDueToBeingStartedInBackground;
    _Bool _didSkipAppearTasksDueToBeingStartedInBackground;
    AnalyticsFeedEventTagger *_analyticsTagger;
    AnalyticsPromotedPlayableTagger *_promotedTagger;
    AnalyticsInteractionEventTagger *_analyticsInteractionTagger;
    AnalyticsInlayAdTagger *_inlayAdTagger;
    AuthUserNotificationFactory *_authUserNotificationFactory;
    FeedPlayableItemStorageControllerFactory *_storageControllerFactory;
    InlayAdRequestController *_adRequestController;
    FeedService *_feedService;
    _TtC8Features18AnalyticsConstants *_analyticsConstants;
    PlayQueueDataSourceFactory *_queueDataSourceFactory;
    id <Launcher> _currentLauncher;
    FeedPlayablesService<PaginatableService> *_service;
    NewAndShinyDataSource *_dataSource;
    UICollectionView *_collectionView;
    StateDelegateLayout *_stateDelegateLayout;
    ColumnLayout *_layout;
    RightAlignedImageButton *_feedTitleViewButton;
    CardCellActionHandler *_feedPlayableActionHandler;
    UpsellFrequencyManager *_upsellFrequencyManager;
    UpsellLauncher *_upsellLauncher;
    SuperCardCellPresenter *_playableCellPresenter;
    StreamUpsellCellPresenter *_feedUpsellPresenter;
    FeedItemCellPresenter *_feedItemCellPresenter;
    InlayAdCellPresenter *_inlayAdCellPresenter;
    _TtC10SoundCloud25InlayVideoAdCellPresenter *_inlayVideoAdCellPresenter;
    AnalyticsUpsellEventTagger *_analyticsUpsellEventTagger;
    _TtC10SoundCloud28AnalyticsScrollSessionTagger *_analyticsScrollSessionTagger;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
    RACDisposable *_disposable;
    RACDisposable *_authDisposable;
    RACDisposable *_ensureFeedsSynchronizedDisposable;
}

@property(nonatomic) _Bool didSkipAppearTasksDueToBeingStartedInBackground; // @synthesize didSkipAppearTasksDueToBeingStartedInBackground=_didSkipAppearTasksDueToBeingStartedInBackground;
@property(nonatomic) _Bool didSkipLoadTasksDueToBeingStartedInBackground; // @synthesize didSkipLoadTasksDueToBeingStartedInBackground=_didSkipLoadTasksDueToBeingStartedInBackground;
@property(retain, nonatomic) RACDisposable *ensureFeedsSynchronizedDisposable; // @synthesize ensureFeedsSynchronizedDisposable=_ensureFeedsSynchronizedDisposable;
@property(retain, nonatomic) RACDisposable *authDisposable; // @synthesize authDisposable=_authDisposable;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(retain, nonatomic) _TtC10SoundCloud28AnalyticsScrollSessionTagger *analyticsScrollSessionTagger; // @synthesize analyticsScrollSessionTagger=_analyticsScrollSessionTagger;
@property(retain, nonatomic) AnalyticsUpsellEventTagger *analyticsUpsellEventTagger; // @synthesize analyticsUpsellEventTagger=_analyticsUpsellEventTagger;
@property(retain, nonatomic) _TtC10SoundCloud25InlayVideoAdCellPresenter *inlayVideoAdCellPresenter; // @synthesize inlayVideoAdCellPresenter=_inlayVideoAdCellPresenter;
@property(retain, nonatomic) InlayAdCellPresenter *inlayAdCellPresenter; // @synthesize inlayAdCellPresenter=_inlayAdCellPresenter;
@property(retain, nonatomic) FeedItemCellPresenter *feedItemCellPresenter; // @synthesize feedItemCellPresenter=_feedItemCellPresenter;
@property(retain, nonatomic) StreamUpsellCellPresenter *feedUpsellPresenter; // @synthesize feedUpsellPresenter=_feedUpsellPresenter;
@property(retain, nonatomic) SuperCardCellPresenter *playableCellPresenter; // @synthesize playableCellPresenter=_playableCellPresenter;
@property(readonly, nonatomic) UpsellLauncher *upsellLauncher; // @synthesize upsellLauncher=_upsellLauncher;
@property(readonly, nonatomic) UpsellFrequencyManager *upsellFrequencyManager; // @synthesize upsellFrequencyManager=_upsellFrequencyManager;
@property(nonatomic) __weak CardCellActionHandler *feedPlayableActionHandler; // @synthesize feedPlayableActionHandler=_feedPlayableActionHandler;
@property(nonatomic) __weak RightAlignedImageButton *feedTitleViewButton; // @synthesize feedTitleViewButton=_feedTitleViewButton;
@property(nonatomic) __weak ColumnLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak StateDelegateLayout *stateDelegateLayout; // @synthesize stateDelegateLayout=_stateDelegateLayout;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NewAndShinyDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FeedPlayablesService<PaginatableService> *service; // @synthesize service=_service;
@property(retain, nonatomic) id <Launcher> currentLauncher; // @synthesize currentLauncher=_currentLauncher;
@property(readonly, nonatomic) PlayQueueDataSourceFactory *queueDataSourceFactory; // @synthesize queueDataSourceFactory=_queueDataSourceFactory;
@property(readonly, nonatomic) _TtC8Features18AnalyticsConstants *analyticsConstants; // @synthesize analyticsConstants=_analyticsConstants;
@property(readonly, nonatomic) FeedService *feedService; // @synthesize feedService=_feedService;
@property(nonatomic) __weak InlayAdRequestController *adRequestController; // @synthesize adRequestController=_adRequestController;
@property(readonly, nonatomic) FeedPlayableItemStorageControllerFactory *storageControllerFactory; // @synthesize storageControllerFactory=_storageControllerFactory;
@property(readonly, nonatomic) AuthUserNotificationFactory *authUserNotificationFactory; // @synthesize authUserNotificationFactory=_authUserNotificationFactory;
@property(readonly, nonatomic) AnalyticsInlayAdTagger *inlayAdTagger; // @synthesize inlayAdTagger=_inlayAdTagger;
@property(readonly, nonatomic) AnalyticsInteractionEventTagger *analyticsInteractionTagger; // @synthesize analyticsInteractionTagger=_analyticsInteractionTagger;
@property(readonly, nonatomic) AnalyticsPromotedPlayableTagger *promotedTagger; // @synthesize promotedTagger=_promotedTagger;
@property(readonly, nonatomic) AnalyticsFeedEventTagger *analyticsTagger; // @synthesize analyticsTagger=_analyticsTagger;
- (void).cxx_destruct;
- (void)attemptToTagImpressionForInlayVideo:(id)arg1;
- (void)attemptToTagImpressionForAppInstallCell:(id)arg1;
- (_Bool)streamIsEmpty;
- (id)dataSourcesForStream:(id)arg1;
- (void)createDataSourceForStream:(id)arg1;
- (id)queueDataSourceForFeedPlayable:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tagScrollAction:(long long)arg1;
- (void)tagScreen;
- (void)tagUpsellClick;
- (id)sourceContext;
- (long long)screen;
- (void)scrollToTop;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)inlayAdImageDidDownload;
- (void)didFetchInlayAds:(id)arg1;
- (void)playableSyncFinished;
- (void)userDidSelectDismissUpsell;
- (void)userDidSelectUpsell;
- (void)unsubscribeFromObservables;
- (void)subscribeToObservables;
- (void)refreshControlDidChange:(id)arg1;
- (void)loadStream;
- (void)setupNavigation;
- (void)setupAccesibility;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)setupLayout;
- (void)setupPresenters;
- (void)setup;
- (void)executeDidAppearTasks;
- (void)executeDidLoadTasks;
- (void)appWillEnterForeground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAnalyticsTagger:(id)arg1 promotedTagger:(id)arg2 appInstallAdTagger:(id)arg3 analyticsInteractionTagger:(id)arg4 storageControllerFactory:(id)arg5 authUserNotificationFactory:(id)arg6 feedService:(id)arg7 analyticsConstants:(id)arg8 queueDataSourceFactory:(id)arg9 upsellFrequencyManager:(id)arg10 upsellLauncher:(id)arg11 analyticsUpsellEventTagger:(id)arg12 analyticsScrollSessionTagger:(id)arg13 appPerformanceProfiler:(id)arg14;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

