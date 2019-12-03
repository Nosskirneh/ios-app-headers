//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaPopupPresenter-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTGaiaDeviceAppearanceMapping, SPTGaiaLogger, SPTGaiaPopupContentViewController, SPTGaiaSocialListeningIntegrationManager, SPTPopupDialog, SPTTheme, UIApplication;
@protocol SPTAlertInterface, SPTGaiaAttachPopupControllerDelegate, SPTGaiaConnectManager, SPTPlayer, SPTProductState;

@interface SPTGaiaPopupController : NSObject <SPTPlayerObserver, SPTGaiaConnectManagerObserver, SPTGaiaPopupPresenter>
{
    _Bool _devicePickerVisible;
    _Bool _delayedPopup;
    id <SPTGaiaAttachPopupControllerDelegate> attachPopupDelegate;
    id <SPTProductState> _productState;
    id <SPTPlayer> _player;
    id <SPTAlertInterface> _alertInterface;
    SPTGaiaDeviceAppearanceMapping *_deviceIconMapper;
    NSNotificationCenter *_notificationCenter;
    SPTGaiaLogger *_logger;
    id <SPTGaiaConnectManager> _connectManager;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
    UIApplication *_application;
    SPTPopupDialog *_currentDialog;
    SPTGaiaPopupContentViewController *_contentController;
    SPTTheme *_theme;
    double _presentedAt;
}

@property(nonatomic) double presentedAt; // @synthesize presentedAt=_presentedAt;
@property(nonatomic) _Bool delayedPopup; // @synthesize delayedPopup=_delayedPopup;
@property(nonatomic) _Bool devicePickerVisible; // @synthesize devicePickerVisible=_devicePickerVisible;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTGaiaPopupContentViewController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) SPTPopupDialog *currentDialog; // @synthesize currentDialog=_currentDialog;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *deviceIconMapper; // @synthesize deviceIconMapper=_deviceIconMapper;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTGaiaAttachPopupControllerDelegate> attachPopupDelegate; // @synthesize attachPopupDelegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 didEncounterError:(id)arg2;
- (void)attachDevice;
- (_Bool)activeDeviceIsSocialListening;
- (_Bool)activeDeviceIsAttached;
- (id)activeDevice;
- (void)presentSimpleAlertWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3;
- (void)presentTransferFailedPopup:(id)arg1;
- (void)presentContextUnavailablePopup;
- (void)playHereButtonAction:(id)arg1;
- (void)continueButtonAction:(id)arg1;
- (void)dismissTransferPopup;
- (void)displayPopupForType:(long long)arg1;
- (void)presentTransferPopupForCurrentActiveDevice;
- (void)presentTransferPopupForType:(long long)arg1;
- (void)presentTransferPopup;
- (_Bool)shouldShowTransferPopup;
- (_Bool)appIsBackgrounded;
- (void)connectManager:(id)arg1 didReceiveTransferError:(id)arg2;
- (void)handleActiveDeviceChange:(id)arg1;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)devicePickerDidDisappear:(id)arg1;
- (void)devicePickerDidAppear:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)initWithAlertInterface:(id)arg1 player:(id)arg2 productState:(id)arg3 theme:(id)arg4 deviceIconMapper:(id)arg5 notificationCenter:(id)arg6 logger:(id)arg7 connectManager:(id)arg8 socialListeningManager:(id)arg9 application:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

