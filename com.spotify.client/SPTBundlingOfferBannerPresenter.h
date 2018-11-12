//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTBundlingBannerViewModelDelegate-Protocol.h"
#import "SPTInstrumentationCurrentPageViewObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSNotificationCenter, NSString, NSURL, SPTBundlingOffer, SPTBundlingOfferLogger, SPTBundlingTestManager;
@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTBundlingOfferDataSource, SPTLinkDispatcher, SPTOfflineModeState;

@interface SPTBundlingOfferBannerPresenter : NSObject <SPTBundlingBannerViewModelDelegate, SPTOfflineModeStateObserver, SPTInstrumentationCurrentPageViewObserver>
{
    id <SPTBundlingOfferDataSource> _offerDataSource;
    SPTBundlingTestManager *_testManager;
    SPTBundlingOfferLogger *_offerLogger;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    NSNotificationCenter *_notificationCenter;
    id <SPTOfflineModeState> _offlineModeState;
    NSURL *_presentedURI;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    SPTBundlingOffer *_loadedOffer;
}

@property(retain, nonatomic) SPTBundlingOffer *loadedOffer; // @synthesize loadedOffer=_loadedOffer;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) NSURL *presentedURI; // @synthesize presentedURI=_presentedURI;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTBundlingOfferLogger *offerLogger; // @synthesize offerLogger=_offerLogger;
@property(retain, nonatomic) SPTBundlingTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTBundlingOfferDataSource> offerDataSource; // @synthesize offerDataSource=_offerDataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)currentPageViewUpdated:(id)arg1;
- (void)actionButtonPressed:(id)arg1 type:(long long)arg2;
- (void)closeButtonPressed;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)applicationDidBecomeActive;
- (void)cleanUp;
- (void)hideShowingBanner;
- (void)openConfigurationUrl:(id)arg1;
- (void)presentBanner:(id)arg1 withDelay:(double)arg2;
- (id)createBannerItem:(id)arg1;
- (_Bool)shouldPresentBannerForOffer:(id)arg1 uri:(id)arg2;
- (void)showBannerIfNeededForOffer:(id)arg1 uri:(id)arg2;
- (void)loadBannerIfNeeded;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithOfferDataSource:(id)arg1 testManager:(id)arg2 offerLogger:(id)arg3 linkDispatcher:(id)arg4 bannerPresentationManager:(id)arg5 notificationCenter:(id)arg6 offlineModeState:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

