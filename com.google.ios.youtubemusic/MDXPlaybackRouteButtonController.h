//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXPromotionManagerObserver-Protocol.h"
#import "MDXScreenManagerObserver-Protocol.h"
#import "YTActionSheetControllerDelegate-Protocol.h"
#import "YTPlaybackRouteButtonController-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class MDXPromotionManager, MDXRepeatingTimer, MDXScreenManager, NSHashTable, NSMapTable, NSString, YTActionSheetController;
@protocol MDXScreen, YTResponder;

@interface MDXPlaybackRouteButtonController : NSObject <MDXPromotionManagerObserver, MDXScreenManagerObserver, YTActionSheetControllerDelegate, YTResponder, YTSystemNotificationsObserver, YTPlaybackRouteButtonController>
{
    NSMapTable *_buttonToResponderMap;
    NSHashTable *_buttonVisibilityObservers;
    YTActionSheetController *_actionSheet;
    MDXPromotionManager *_promotionManager;
    MDXRepeatingTimer *_autoCastDelayTimer;
    id <MDXScreen> _autoCastScreen;
    int _connectButtonVECounter;
    long long _lastReceivedOnlineScreenCount;
    id <YTResponder> _parentResponder;
    MDXScreenManager *_screenManager;
}

@property(readonly, nonatomic) MDXScreenManager *screenManager; // @synthesize screenManager=_screenManager;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)shouldShowLearnMore;
- (_Bool)isPersistentCastIconEnabled;
- (_Bool)isOneCastEnabled;
- (_Bool)shouldAutoCast;
- (id)newActionSheetWithMessage:(id)arg1;
- (id)selectedMediaRouteClientDataForScreen:(id)arg1;
- (void)cancelPromotionsForButton:(id)arg1;
- (id)buttonForResponder:(id)arg1;
- (void)promotionManager:(id)arg1 willDisplayPromotionWithElementType:(long long)arg2;
- (void)autoConnect;
- (void)connectToScreen:(id)arg1 afterDelay:(double)arg2;
- (void)showToastWithMessage:(id)arg1;
- (void)autoCastFromButton:(id)arg1;
- (void)showDeviceListFromButton:(id)arg1;
- (void)showConnectedDeviceFromButton:(id)arg1;
- (void)setCastIconImageForButton:(id)arg1 withColor:(id)arg2;
- (void)notifyPlaybackRouteButtonVisibilityDidChange;
- (void)notifyPlaybackRouteButtonWillShowPromotion;
- (void)screenGraftAttachChildForButton:(id)arg1 VEType:(int)arg2 VECounter:(int)arg3;
- (void)screenGraftAttachChildForButton:(id)arg1 VEType:(int)arg2;
- (void)logClickForButton:(id)arg1 VEType:(int)arg2 clientData:(id)arg3;
- (void)logClickForButton:(id)arg1 VEType:(int)arg2;
- (void)logVisibilityUpdateForButton:(id)arg1 VEType:(int)arg2 VECounter:(int)arg3;
- (void)logVisibilityUpdateForButton:(id)arg1 VEType:(int)arg2;
- (void)connectToScreen:(id)arg1;
- (void)didPressButton:(id)arg1;
- (void)hideButton:(id)arg1;
- (void)showButton:(id)arg1;
- (void)updateButton:(id)arg1;
- (void)updateAllButtons;
- (void)appWillResignActive:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)MDXScreenManagerAirPlayConnectionDidEnd:(id)arg1;
- (void)MDXScreenManager:(id)arg1 airPlayConnectionDidStart:(id)arg2;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (void)MDXScreenManager:(id)arg1 onlineScreensDidChange:(id)arg2;
- (void)updateColorForButton:(id)arg1 withColor:(id)arg2;
- (void)removeButtonVisibilityObserver:(id)arg1;
- (void)addButtonVisibilityObserver:(id)arg1;
- (void)screenGraftAttachChildForButton:(id)arg1;
- (void)cancelAutoCast;
- (void)showDeviceListOrAutoCastFromButton:(id)arg1;
- (void)disablePlaybackRoutePromotionsForResponder:(id)arg1;
- (void)enablePlaybackRoutePromotionsForResponder:(id)arg1;
- (id)newRegisteredPlaybackRouteButtonWithColor:(id)arg1 responder:(id)arg2;
- (id)newRegisteredQTMPlaybackRouteButtonWithColor:(id)arg1 responder:(id)arg2;
- (void)registerPlaybackRouteButton:(id)arg1 withColor:(id)arg2 responder:(id)arg3;
- (void)dealloc;
- (id)initWithScreenManager:(id)arg1 promotionManager:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
