//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPBarTransitableViewController-Protocol.h"
#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPTNowPlayingBarModelObserver-Protocol.h"
#import "SPTNowPlayingBarViewControllerObservable-Protocol.h"
#import "SPTNowPlayingBarVoiceCompanionDelegate-Protocol.h"
#import "SPTPlayerTrackScrollDataSourceDelegate-Protocol.h"
#import "SPTPlayerTrackScrollViewOffsetDelegate-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSString, NSURL, SPForegroundObserver, SPTNowPlayingBarContentView, SPTNowPlayingBarModel, SPTNowPlayingLogger, SPTNowPlayingSkipLimitReachedMessageRequester, SPTObserverManager, SPTPlayerTrackScrollDataSource, SPTTheme, UIView;
@protocol NSObject, SPTConnectUIDevicePickerPresenter, SPTGaiaConnectAPI, SPTGaiaDevicesAvailableView, SPTNowPlayingManager, SPTNowPlayingTestManager;

@interface SPTNowPlayingBarViewController : UIViewController <SPBarTransitableViewController, SPForegroundObserverDelegate, SPTPlayerTrackScrollDataSourceDelegate, SPTPlayerTrackScrollViewOffsetDelegate, SPTNowPlayingBarModelObserver, SPTNowPlayingBarVoiceCompanionDelegate, SPViewController, SPTNowPlayingBarViewControllerObservable>
{
    _Bool _barShown;
    _Bool _revealTriggeredByTap;
    SPTNowPlayingBarModel *_nowPlayingModel;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    id <SPTGaiaConnectAPI> _connectManager;
    id <SPTConnectUIDevicePickerPresenter> _devicePickerPresenter;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingBarContentView *_contentView;
    SPTPlayerTrackScrollDataSource *_playerTrackScrollDataSource;
    SPForegroundObserver *_foregroundObserver;
    SPTNowPlayingLogger *_logger;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <NSObject> _SPTBarObserverObject;
    id <NSObject> _SPTBarObserverObjectForPersistence;
    id <NSObject> _SPTBarObserverForDevicesObject;
    id <NSObject> _SPTOverlayObserverObject;
    SPTObserverManager *_observerManager;
}

@property(nonatomic) _Bool revealTriggeredByTap; // @synthesize revealTriggeredByTap=_revealTriggeredByTap;
@property(nonatomic) _Bool barShown; // @synthesize barShown=_barShown;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <NSObject> SPTOverlayObserverObject; // @synthesize SPTOverlayObserverObject=_SPTOverlayObserverObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverForDevicesObject; // @synthesize SPTBarObserverForDevicesObject=_SPTBarObserverForDevicesObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObjectForPersistence; // @synthesize SPTBarObserverObjectForPersistence=_SPTBarObserverObjectForPersistence;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObject; // @synthesize SPTBarObserverObject=_SPTBarObserverObject;
@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) SPTPlayerTrackScrollDataSource *playerTrackScrollDataSource; // @synthesize playerTrackScrollDataSource=_playerTrackScrollDataSource;
@property(retain, nonatomic) SPTNowPlayingBarContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTConnectUIDevicePickerPresenter> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
- (void).cxx_destruct;
- (void)didTapVoiceCompanionView;
- (void)playerTrackScrollView:(id)arg1 scrolledToRelativeIndex:(long long)arg2;
- (void)playerTrackScrollViewChangedOffset:(id)arg1;
- (void)nowPlayingBarModelDidUpdateVoiceCompanionState:(id)arg1;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (void)nowPlayingBarModelDidUpdatePlayingState:(id)arg1;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (id)playerTrackScrollDataSource:(id)arg1 pageViewWithFrame:(struct CGRect)arg2 reuseIdentifier:(id)arg3;
- (void)playPauseChanged;
- (void)playPause;
- (void)removeNowPlayingBarViewControllerObserver:(id)arg1;
- (void)addNowPlayingBarViewControllerObserver:(id)arg1;
- (void)overlayWillBeShown:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)removeSPBarObserversIfObserving;
- (void)setupSPBarObserversIfNotObserving;
- (void)sp_setBarTransitionProgress:(float)arg1;
@property(readonly, nonatomic) NSURL *URI;
- (void)dealloc;
- (id)initWithPlayingModel:(id)arg1 logger:(id)arg2 skipLimitReachedMessageRequester:(id)arg3 nowPlayingManager:(id)arg4 theme:(id)arg5 connectManager:(id)arg6 devicePickerPresenter:(id)arg7 devicesAvailableView:(id)arg8 testManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

