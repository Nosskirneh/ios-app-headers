//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "DataSourceStateDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AddToPlaylistFetcherFactory, AddToPlaylistPresenter, AddToPlaylistService, AddToPlaylistStateCoordinator, AddToPlaylistStorageControllerFactory, AddToPlaylistViewModel, AnalyticsEngagementEventTagger, ImageDownloadQueue, NSString, NewAndShinyDataSource, PlaylistSnapshotView, RACDisposable, RACSubject, StorageRequestController, TaggingContext, UICollectionView, Urn, UserPostedPlaylistsService;
@protocol Fetcher;

@interface AddToPlaylistViewController : BaseViewController <UICollectionViewDelegate, DataSourceStateDelegate>
{
    Urn *_trackUrn;
    NSString *_trackTitle;
    TaggingContext *_context;
    UICollectionView *_collectionView;
    AddToPlaylistViewModel *_viewModel;
    AddToPlaylistPresenter *_presenter;
    AddToPlaylistStateCoordinator *_stateDelegateCoordinator;
    RACSubject *_viewDidAppearSignal;
    AddToPlaylistService *_service;
    RACDisposable *_transitionDisposable;
    RACDisposable *_createPlaylistCachedImageDisposable;
    RACDisposable *_disposable;
    NewAndShinyDataSource *_dataSource;
    AddToPlaylistStorageControllerFactory *_storageControllerFactory;
    AddToPlaylistFetcherFactory *_fetcherFactory;
    UserPostedPlaylistsService *_syncService;
    ImageDownloadQueue *_imageDownloadQueue;
    PlaylistSnapshotView *_snapshotView;
    AnalyticsEngagementEventTagger *_analyticsEngagementEventTagger;
    StorageRequestController *_youUrnRequestController;
    id <Fetcher> _playlistFetcher;
}

@property(retain, nonatomic) id <Fetcher> playlistFetcher; // @synthesize playlistFetcher=_playlistFetcher;
@property(retain, nonatomic) StorageRequestController *youUrnRequestController; // @synthesize youUrnRequestController=_youUrnRequestController;
@property(retain, nonatomic) AnalyticsEngagementEventTagger *analyticsEngagementEventTagger; // @synthesize analyticsEngagementEventTagger=_analyticsEngagementEventTagger;
@property(retain, nonatomic) PlaylistSnapshotView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) ImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(retain, nonatomic) UserPostedPlaylistsService *syncService; // @synthesize syncService=_syncService;
@property(retain, nonatomic) AddToPlaylistFetcherFactory *fetcherFactory; // @synthesize fetcherFactory=_fetcherFactory;
@property(retain, nonatomic) AddToPlaylistStorageControllerFactory *storageControllerFactory; // @synthesize storageControllerFactory=_storageControllerFactory;
@property(retain, nonatomic) NewAndShinyDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) RACDisposable *createPlaylistCachedImageDisposable; // @synthesize createPlaylistCachedImageDisposable=_createPlaylistCachedImageDisposable;
@property(retain, nonatomic) RACDisposable *transitionDisposable; // @synthesize transitionDisposable=_transitionDisposable;
@property(readonly, nonatomic) AddToPlaylistService *service; // @synthesize service=_service;
@property(readonly, nonatomic) RACSubject *viewDidAppearSignal; // @synthesize viewDidAppearSignal=_viewDidAppearSignal;
@property(retain, nonatomic) AddToPlaylistStateCoordinator *stateDelegateCoordinator; // @synthesize stateDelegateCoordinator=_stateDelegateCoordinator;
@property(retain, nonatomic) AddToPlaylistPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) AddToPlaylistViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TaggingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(retain, nonatomic) Urn *trackUrn; // @synthesize trackUrn=_trackUrn;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dismissAfterShortDelay;
- (void)presentSuccessAnimation;
- (void)presentError:(id)arg1 forTrackWithTitle:(id)arg2;
- (void)animatePlaylistAtIndexPathToCenter:(id)arg1;
- (void)addTrackToPlaylistAtIndexPath:(id)arg1;
- (id)youUserUrn;
- (id)dataSourcesForUrn:(id)arg1;
- (void)createDataSource;
- (id)preloadCreatePlaylistImageSignal;
- (void)preloadCreatePlaylistImage;
- (void)attachChildLayout;
- (void)transitionToCreateScreen;
- (void)transitionToCreateScreenIfNecessary;
- (void)updateForState:(unsigned long long)arg1;
- (long long)screen;
- (void)close;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1 service:(id)arg2 imageDownloadQueue:(id)arg3 analyticsEngagementEventTagger:(id)arg4 fetcherFactory:(id)arg5;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
