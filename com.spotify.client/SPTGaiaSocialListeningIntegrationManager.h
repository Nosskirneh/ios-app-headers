//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTObserverManager, UIView, UIViewController;
@protocol SPTGaiaConnectManager, SPTSocialListeningModel, SPTSocialListeningSessionViewController, SPTSocialListeningTestManager, SPTSocialListeningUserInterfaceFactory;

@interface SPTGaiaSocialListeningIntegrationManager : NSObject <SPTGaiaConnectManagerObserver, SPTSocialListeningModelObserver>
{
    id <SPTSocialListeningTestManager> _testManager;
    id <SPTSocialListeningUserInterfaceFactory> _userInterfaceFactory;
    id <SPTSocialListeningModel> _model;
    id <SPTGaiaConnectManager> _connectManager;
    SPTObserverManager *_observers;
    NSNotificationCenter *_notificationCenter;
    UIViewController<SPTSocialListeningSessionViewController> *_controller;
}

@property(retain, nonatomic) UIViewController<SPTSocialListeningSessionViewController> *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTSocialListeningModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTSocialListeningUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)socialListeningModel:(id)arg1 didDeleteSession:(id)arg2;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2;
- (void)attachDeviceAutomaticallyIfNeeded:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyUpdate;
@property(readonly, nonatomic) _Bool shouldShowParticipantsInNowPlayingView;
@property(readonly, nonatomic) NSString *numberOfParticipantsString;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIViewController<SPTSocialListeningSessionViewController> *viewController;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)devicePickerWillAppear;
- (void)dealloc;
- (id)initWithTestManager:(id)arg1 userInterfaceFactory:(id)arg2 model:(id)arg3 connectManager:(id)arg4 notificationCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

