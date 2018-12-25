//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTNotificationServiceObserver-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSubscribeControlVisibilityDelegate-Protocol.h"
#import "YTSubscriptionServiceObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, GOOAlertView, NSString, YTConfirmDialogController, YTISubscribeButtonRenderer, YTIToggleButtonRenderer, YTNotificationService, YTSubscriptionNotificationOptionsDialogController, YTSubscriptionService;
@protocol YTResponder, YTSubscribeSwitchContainer, YTSubscribeSwitchControllerDelegate;

@interface YTSubscribeSwitchController : NSObject <GOOAlertViewDelegate, YTNotificationServiceObserver, YTSubscriptionServiceObserver, YTSystemNotificationsObserver, YTResponder, YTSubscribeControlVisibilityDelegate>
{
    YTISubscribeButtonRenderer *_subscribeButtonRenderer;
    id <YTSubscribeSwitchContainer> _subscribeSwitchContainer;
    long long _subscribeState;
    YTSubscriptionService *_subscriptionService;
    YTNotificationService *_notificationService;
    GOOAlertView *_messageAlertView;
    _Bool _optimisticallyToggledNotificationButton;
    YTSubscriptionNotificationOptionsDialogController *_notificationOptionsController;
    int _cachedMultiStateBellStateBeforeOptimisticUpdate;
    _Bool _loggedSubscribeRendererVisibilityUpdate;
    _Bool _loggedNotificationOptionsRendererVisibilityUpdate;
    _Bool _loggedNotificationToggleRendererVisibilityUpdate;
    _Bool _loggedNotificationMultiToggleRendererVisibilityUpdate;
    YTConfirmDialogController *_confirmDialogController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTSubscribeSwitchControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTSubscribeSwitchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)sendClickForNotificationToggleButtonWithToggleOn:(_Bool)arg1;
- (void)sendClickForSubscribeSwitchWithSwitchOn:(_Bool)arg1;
- (id)notificationMultiToggleButton;
- (id)notificationOptionsButton;
- (id)notificationToggleButton;
- (void)generateHapticFeedback;
- (void)resetOptimisticMultiStateBellUpdate;
- (void)didFailModifyChannelNotificationPreferenceWithEntry:(id)arg1;
- (void)setNotificationOptionsRenderer:(id)arg1;
- (id)notificationOptionsRenderer;
- (void)setNotificationMultiToggleRenderer:(id)arg1;
- (id)notificationMultiToggleRenderer;
@property(retain, nonatomic) YTIToggleButtonRenderer *notificationToggleRenderer;
- (void)cleanUpDialogController;
- (void)visibilityDidChangeForSubscribeControl:(id)arg1;
- (void)displayMessage;
- (void)restoreToSubscribedState;
- (void)didPressSubscribeSwitch:(id)arg1;
- (void)unsubscribe;
- (void)subscribe;
- (void)launchNotificationsOptionsDialog:(id)arg1;
- (void)didPressNotificationOptionsButton;
- (void)didPressNotificationToggleButton;
- (void)didPressNotificationMultiToggleButton;
- (void)setSubscribeState:(long long)arg1;
- (id)buttonTextForState:(long long)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)didModifyChannelNotificationPreferenceWithResponse:(id)arg1;
- (void)updateSubscribeSwitchContainerWithNotificationButtonAnimated:(_Bool)arg1;
- (void)setSubscribeSwitchContainer:(id)arg1;
- (void)setSubscribeSwitch:(id)arg1;
- (void)dealloc;
- (id)initWithSubscribeButtonRenderer:(id)arg1 subscriptionService:(id)arg2 notificationService:(id)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
