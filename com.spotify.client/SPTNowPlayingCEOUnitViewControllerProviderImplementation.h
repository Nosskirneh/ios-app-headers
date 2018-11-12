//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTNowPlayingCEOUnitViewControllerProvider-Protocol.h"

@class NSString, SPTContentEngagementOptionsLocalSettingsManager, SPTContentEngagementOptionsLogger, SPTContentEngagementOptionsStringsManager, UIViewController;
@protocol SPTGaiaDevicesAvailableViewProvider, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainedViewController, SPTPlayer;

@interface SPTNowPlayingCEOUnitViewControllerProviderImplementation : NSObject <SPTNowPlayingCEOUnitViewControllerProvider>
{
    UIViewController<SPTNowPlayingContainedViewController> *_footerUnitViewController;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    id <SPTGaiaDevicesAvailableViewProvider> _devicesAvailableViewProvider;
    id <SPTPlayer> _player;
    SPTContentEngagementOptionsLocalSettingsManager *_localSettingsManager;
    SPTContentEngagementOptionsStringsManager *_stringsManager;
    SPTContentEngagementOptionsLogger *_logger;
}

@property(readonly, nonatomic) SPTContentEngagementOptionsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTContentEngagementOptionsStringsManager *stringsManager; // @synthesize stringsManager=_stringsManager;
@property(readonly, nonatomic) SPTContentEngagementOptionsLocalSettingsManager *localSettingsManager; // @synthesize localSettingsManager=_localSettingsManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTGaiaDevicesAvailableViewProvider> devicesAvailableViewProvider; // @synthesize devicesAvailableViewProvider=_devicesAvailableViewProvider;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *footerUnitViewController; // @synthesize footerUnitViewController=_footerUnitViewController;
- (void).cxx_destruct;
- (id)provideFooterUnitViewController;
- (id)initWithAuxiliaryActionsHandler:(id)arg1 devicesAvailableViewProvider:(id)arg2 localSettingsManager:(id)arg3 stringsManager:(id)arg4 logger:(id)arg5 player:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
