//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginatableService-Protocol.h"

@class AdDownloader, FeedPlayableCommandFactory, FeedPlayablesPaginatable, NSArray, NSString, RACDisposable, SyncCenter;
@protocol FeedPlayableServiceDelegate, Paginatable, StorageRequestControllerFactory;

@interface FeedPlayablesService : NSObject <PaginatableService>
{
    NSArray *_inlayAds;
    unsigned long long _currentPage;
    id _feedId;
    FeedPlayablesPaginatable<Paginatable> *_paginatable;
    FeedPlayableCommandFactory *_commandFactory;
    id <FeedPlayableServiceDelegate> _delegate;
    RACDisposable *_disposable;
    RACDisposable *_feedUpdateDisposable;
    RACDisposable *_inlayAdsDisposable;
    SyncCenter *_syncCenter;
    id <StorageRequestControllerFactory> _requestControllerFactory;
    AdDownloader *_adDownloader;
}

@property(retain, nonatomic) AdDownloader *adDownloader; // @synthesize adDownloader=_adDownloader;
@property(retain, nonatomic) id <StorageRequestControllerFactory> requestControllerFactory; // @synthesize requestControllerFactory=_requestControllerFactory;
@property(retain, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(retain, nonatomic) RACDisposable *inlayAdsDisposable; // @synthesize inlayAdsDisposable=_inlayAdsDisposable;
@property(retain, nonatomic) RACDisposable *feedUpdateDisposable; // @synthesize feedUpdateDisposable=_feedUpdateDisposable;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) __weak id <FeedPlayableServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FeedPlayableCommandFactory *commandFactory; // @synthesize commandFactory=_commandFactory;
@property(readonly, nonatomic) FeedPlayablesPaginatable<Paginatable> *paginatable; // @synthesize paginatable=_paginatable;
@property(readonly, nonatomic) id feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSArray *inlayAds; // @synthesize inlayAds=_inlayAds;
- (void).cxx_destruct;
- (id)feedPlayablesCountSignal;
- (void)subscribeToFeedUpdateSignal;
- (id)paginationApi;
- (id)apiCallForUrl:(id)arg1;
- (id)nextPageSyncOperation;
- (id)refreshSyncOperation;
- (void)subscribeToInlayAdsUpdate;
- (id)refresh;
- (id)refreshIfNeeded;
- (id)paginationConfig;
- (_Bool)hasMoreData;
- (id)forceRefresh;
- (id)softRefresh;
- (id)paginate;
- (id)initWithFeedId:(id)arg1 paginatable:(id)arg2 delegate:(id)arg3 syncCenter:(id)arg4 commandFactory:(id)arg5 requestControllerFactory:(id)arg6 adDownloader:(id)arg7;
- (id)initWithFeedId:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
