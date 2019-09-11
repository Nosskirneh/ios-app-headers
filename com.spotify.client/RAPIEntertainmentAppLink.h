//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDApplicationDelegate-Protocol.h"
#import "IDAudioServiceDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CustomPopupView, IDAccessoryMonitor, NSArray, NSException, NSMutableArray, NSString, RAPIContext, RAPIDebugMenuController, RAPILockScreenViewController;

@interface RAPIEntertainmentAppLink : NSObject <IDAudioServiceDelegate, IDApplicationDelegate, UIAlertViewDelegate>
{
    int _connectionRetryCount;
    RAPIDebugMenuController *_debugMenuController;
    RAPILockScreenViewController *_lockScreenViewController;
    RAPIContext *_rapiContext;
    IDAccessoryMonitor *_idAccessoryMonitor;
    NSException *_currentException;
    CustomPopupView *_customPopupView;
    NSArray *_customPopupButtons;
    CDUnknownBlockType _customPopupButtonPressedHandler;
    NSMutableArray *_screenTableConfig;
}

+ (void)notifyOfOpenUrl:(id)arg1;
+ (id)sharedInstance;
@property int connectionRetryCount; // @synthesize connectionRetryCount=_connectionRetryCount;
@property(retain) NSMutableArray *screenTableConfig; // @synthesize screenTableConfig=_screenTableConfig;
@property(copy) CDUnknownBlockType customPopupButtonPressedHandler; // @synthesize customPopupButtonPressedHandler=_customPopupButtonPressedHandler;
@property(retain) NSArray *customPopupButtons; // @synthesize customPopupButtons=_customPopupButtons;
@property(retain) CustomPopupView *customPopupView; // @synthesize customPopupView=_customPopupView;
@property(retain) NSException *currentException; // @synthesize currentException=_currentException;
@property(retain) IDAccessoryMonitor *idAccessoryMonitor; // @synthesize idAccessoryMonitor=_idAccessoryMonitor;
@property(retain) RAPIContext *rapiContext; // @synthesize rapiContext=_rapiContext;
@property(retain) RAPILockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
@property(retain) RAPIDebugMenuController *debugMenuController; // @synthesize debugMenuController=_debugMenuController;
- (void).cxx_destruct;
- (void)handleCDSVehicleTimeChange:(id)arg1;
- (id)languageStringForHeadUnitLanguageId:(long long)arg1;
- (void)handleCDSVehicleLanguageChange:(id)arg1;
- (void)audioService:(id)arg1 multimediaButtonEvent:(unsigned long long)arg2;
- (void)audioService:(id)arg1 interruptStateChanged:(int)arg2;
- (void)audioService:(id)arg1 entertainmentStateChanged:(int)arg2;
- (id)getAudioStateDescription:(int)arg1;
- (void)onConnectionError:(id)arg1;
- (void)onDisconnectedFromHeadUnit;
- (void)onConnectedToHeadUnit:(id)arg1;
- (void)applicationDidStop:(id)arg1;
- (void)applicationDidStart:(id)arg1;
- (void)applicationRestoreMainHmiState:(id)arg1;
- (void)application:(id)arg1 didConnectToVehicle:(id)arg2;
- (void)performLastUserMode;
- (void)bmwAccessoryDidDisconnect;
- (void)startIDApplication;
- (void)bmwAccessoryDidConnect;
- (id)enableAccessoryMonitoring;
- (void)checkConnected:(id)arg1;
- (void)setupScreenTable;
- (void)updateID4SplitscreenEntertainmentDetails;
- (void)showLockScreen:(id)arg1;
- (void)presentDebugMenuFromController:(id)arg1;
- (id)getDebugMenuController;
- (void)logStringWithFormat:(id)arg1 withArguments:(char *)arg2;
- (void)logStringWithFormat:(id)arg1;
- (void)invalidateScreen:(long long)arg1 withErrorMessage:(id)arg2;
- (void)postAudioServiceAvailability:(long long)arg1;
- (void)setMasterOptionButtonEnabled:(_Bool)arg1 forScreen:(long long)arg2;
- (void)setActionButtonEnabled:(_Bool)arg1 forButton:(long long)arg2 forScreen:(long long)arg3;
- (void)invalidateImageForRow:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (void)setCheckmarkPosition:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (void)setToolbarTargetScreen:(long long)arg1 forButton:(long long)arg2;
- (void)setToolbarImage:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarTooltip:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarButtonVisible:(_Bool)arg1 forButton:(long long)arg2;
- (void)setToolbarButtonHoverable:(_Bool)arg1 clickable:(_Bool)arg2 forButton:(long long)arg3;
- (void)hideStatusMessageForScreen:(long long)arg1;
- (void)showStatusMessage:(id)arg1 displayProgressIndicator:(_Bool)arg2 forScreen:(long long)arg3;
- (void)setProgressBarVisible:(_Bool)arg1;
- (void)setLogoVisible:(unsigned char)arg1;
- (void)setCoverArt:(id)arg1;
- (void)setTrackIndex:(long long)arg1 trackCount:(long long)arg2;
- (void)setTrackName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)onCustomPopupButtonPress:(id)arg1;
- (void)closePopup;
- (void)showPopupWithTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 onButtonPressed:(CDUnknownBlockType)arg4;
- (void)setAppName:(id)arg1;
- (_Bool)startedByAppSwitcher;
- (void)shutdown;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithScreenTableConfig:(id)arg1 andDelegate:(id)arg2 handleOnItemClicked:(SEL)arg3 useConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

