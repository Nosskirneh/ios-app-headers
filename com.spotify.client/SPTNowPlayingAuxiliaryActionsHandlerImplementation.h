//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenterDelegate-Protocol.h"
#import "SPTNowPlayingAuxiliaryActionsHandler-Protocol.h"
#import "SPTNowPlayingAuxiliaryActionsModelObserver-Protocol.h"
#import "SPTPodcastPreferencesObserver-Protocol.h"
#import "SPTSleepTimerEventObserver-Protocol.h"
#import "SPTSleepTimerTimeObserver-Protocol.h"

@class NSString, SPTNowPlayingContextMenuHeaderFactory, SPTNowPlayingLogger, SPTNowPlayingModel, SPTObserverManager;
@protocol SPContextMenuFeature, SPTContextMenuPresenter, SPTGaiaDevicePickerPresenter, SPTLinkDispatcher, SPTNowPlayingLegacyFeedbackCoordinator, SPTNowPlayingManager, SPTNowPlayingModeResolver, SPTNowPlayingTestManager, SPTPodcastContextMenuProvider, SPTPodcastSpeedControlManager, SPTQueueLogger, SPTShareFeature, SPTShowContextMenuControllerOptions, SPTSleepTimerController, SPTSleepTimerService, SPTUIPresentationService;

@interface SPTNowPlayingAuxiliaryActionsHandlerImplementation : NSObject <SPTNowPlayingAuxiliaryActionsModelObserver, SPTPodcastPreferencesObserver, SPTContextMenuPresenterDelegate, SPTSleepTimerTimeObserver, SPTSleepTimerEventObserver, SPTNowPlayingAuxiliaryActionsHandler>
{
    SPTNowPlayingContextMenuHeaderFactory *_contextMenuHeaderFactory;
    SPTNowPlayingModel *_model;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    id <SPTUIPresentationService> _presentationService;
    id <SPTGaiaDevicePickerPresenter> _devicePickerPresenter;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTNowPlayingManager> _manager;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTNowPlayingLogger *_logger;
    SPTObserverManager *_observerManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTNowPlayingLegacyFeedbackCoordinator> _feedbackCoordinator;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTNowPlayingModeResolver> _modeResolver;
    id <SPTQueueLogger> _queueLogger;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTSleepTimerService> _sleepTimerService;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTShowContextMenuControllerOptions> _podcastContextMenuOptions;
    id <SPTShareFeature> _shareFeature;
}

@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) id <SPTShowContextMenuControllerOptions> podcastContextMenuOptions; // @synthesize podcastContextMenuOptions=_podcastContextMenuOptions;
@property(readonly, nonatomic) id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(readonly, nonatomic) __weak id <SPTSleepTimerService> sleepTimerService; // @synthesize sleepTimerService=_sleepTimerService;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) __weak id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) id <SPTNowPlayingLegacyFeedbackCoordinator> feedbackCoordinator; // @synthesize feedbackCoordinator=_feedbackCoordinator;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTNowPlayingManager> manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerPresenter> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
@property(readonly, nonatomic) id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak SPTNowPlayingContextMenuHeaderFactory *contextMenuHeaderFactory; // @synthesize contextMenuHeaderFactory=_contextMenuHeaderFactory;
- (void).cxx_destruct;
- (void)presentSleepTimerMenuFromView:(id)arg1 inViewController:(id)arg2;
- (void)timerDidCancel:(id)arg1;
- (void)timerDidEnd:(id)arg1;
- (void)timerDidStart:(id)arg1;
- (void)timer:(id)arg1 timeWasUpdated:(double)arg2;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (void)podcastPlaybackSpeedDidUpdate:(id)arg1 oldSpeed:(id)arg2;
- (void)auxiliaryActionsModelDidChangeCollectionState:(id)arg1;
- (void)goToNowPlayingView:(id)arg1;
- (void)goToQueue:(id)arg1;
- (void)showEntityPage:(id)arg1;
- (_Bool)shouldHideContextMenuHeader;
- (id)extraContextMenuTasksIfAnyInViewController:(id)arg1 sender:(id)arg2;
- (void)presentContextMenuWithHeaderOptionsInViewController:(id)arg1 sender:(id)arg2;
- (void)presentContextMenuInViewController:(id)arg1 sender:(id)arg2;
- (void)minimizePlayingView:(id)arg1;
- (void)presentShareMenu:(id)arg1;
- (void)presentConnectDevicePicker:(id)arg1;
- (void)presentSpeedControlMenuFromView:(id)arg1 inViewController:(id)arg2;
- (void)logNegativeFeedbackResults;
- (void)removeFromCollectionIfNeededWithConfirmation:(_Bool)arg1;
- (void)handleLegacyFeedbackFeedbackWithViewController:(id)arg1 actionControl:(id)arg2 trackOnlyBan:(_Bool)arg3 confirmation:(_Bool)arg4;
- (void)handlePremiumTierNegativeFeedbackWithViewController:(id)arg1 actionControl:(id)arg2 trackOnlyBan:(_Bool)arg3 withConfirmation:(_Bool)arg4;
- (void)handleCollectionNegativeFeedbackWithConfirmation:(_Bool)arg1;
- (void)toggleBanStateFromViewController:(id)arg1 andActionControl:(id)arg2 andTrackOnlyBan:(_Bool)arg3 withConfirmation:(_Bool)arg4;
- (void)toggleTrackBanStateFromViewController:(id)arg1 andActionControl:(id)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleTrackBanStateFromViewController:(id)arg1 andActionControl:(id)arg2;
- (void)toggleBanStateFromViewController:(id)arg1 andActionControl:(id)arg2;
- (void)toggleCollectionStateFromViewController:(id)arg1 andActionControl:(id)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleCollectionStateFromViewController:(id)arg1 andActionControl:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool isHeartActionAllowed;
@property(readonly, nonatomic) _Bool isBanActionAllowed;
@property(readonly, nonatomic) _Bool isCurrentTrackInCollection;
@property(readonly, nonatomic) _Bool isCurrentTrackBanned;
- (void)dealloc;
- (id)initWithModel:(id)arg1 speedControlManager:(id)arg2 presentationService:(id)arg3 devicePickerPresenter:(id)arg4 contextMenuService:(id)arg5 podcastContextMenuProvider:(id)arg6 nowPlayingManager:(id)arg7 linkDispatcher:(id)arg8 feedbackCoordinator:(id)arg9 modeResolver:(id)arg10 logger:(id)arg11 queueLogger:(id)arg12 testManager:(id)arg13 sleepTimerService:(id)arg14 shareFeature:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

