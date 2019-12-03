//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPTContextMenuPresenterDelegate-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, SPForegroundObserver, SPTAdPlayerObservable, SPTAdsFeatureProperties, SPTDataLoader;
@protocol SPContextMenuFeature, SPTAdsBaseEntity, SPTContextMenuPresenter, SPTLogCenter, SPTSnackbarConditionalPresenter;

@interface SPTAdNowPlayingAuxiliaryActionsHandler : NSObject <SPTContextMenuPresenterDelegate, SPForegroundObserverDelegate, SPTDataLoaderDelegate>
{
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTLogCenter> _logCenter;
    SPTAdPlayerObservable *_playerObserver;
    SPTDataLoader *_dataLoader;
    SPTAdsFeatureProperties *_properties;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTAdsBaseEntity> _adEntity;
    NSMutableSet *_savedAdIds;
    NSArray *_contextMenuActions;
    SPForegroundObserver *_foregroundObserver;
}

@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(copy, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(retain, nonatomic) NSMutableSet *savedAdIds; // @synthesize savedAdIds=_savedAdIds;
@property(retain, nonatomic) id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) SPTAdsFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (id)requestURLToGetSavedAds;
- (id)requestURLToDeleteBookmarkedAd;
- (id)requestURLToBookmarkAd;
- (void)loadSavedAds;
- (void)logEventForAdEntity:(id)arg1 action:(id)arg2;
- (id)randomizedArrayFromArray:(id)arg1;
- (void)logInteractionEventWithIntent:(id)arg1 pageURI:(id)arg2;
- (void)performRemoveBookmarkActionForAd:(id)arg1 fromPageURI:(id)arg2;
- (void)performBookmarkActionForAd:(id)arg1 fromPageURI:(id)arg2;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (void)performNegativeActionForAd:(id)arg1 inViewController:(id)arg2 sender:(id)arg3;
- (void)performPositiveActionForAd:(id)arg1 inViewController:(id)arg2 withSender:(id)arg3;
- (_Bool)isAdBookmarked:(id)arg1;
- (void)dealloc;
- (id)initWithEducationPresenter:(id)arg1 contextMenuFeature:(id)arg2 logCenter:(id)arg3 playerObserver:(id)arg4 dataLoader:(id)arg5 featureProperties:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
