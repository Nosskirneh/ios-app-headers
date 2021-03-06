//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, UAAnalytics, UAInAppMessage, UAInAppMessageController, UAPreferenceDataStore, UIColor, UIFont;
@protocol UAInAppMessageControllerDelegate, UAInAppMessagingDelegate;

@interface UAInAppMessaging : NSObject
{
    _Bool _displayASAPEnabled;
    _Bool _keyboardDisplayed;
    UIFont *_font;
    UIColor *_defaultPrimaryColor;
    UIColor *_defaultSecondaryColor;
    double _displayDelay;
    id <UAInAppMessagingDelegate> _messagingDelegate;
    id <UAInAppMessageControllerDelegate> _messageControllerDelegate;
    UAInAppMessageController *_messageController;
    UAPreferenceDataStore *_dataStore;
    UAAnalytics *_analytics;
    NSTimer *_autoDisplayTimer;
}

+ (id)inAppMessagingWithAnalytics:(id)arg1 dataStore:(id)arg2;
@property(nonatomic, getter=isKeyboardDisplayed) _Bool keyboardDisplayed; // @synthesize keyboardDisplayed=_keyboardDisplayed;
@property(retain, nonatomic) NSTimer *autoDisplayTimer; // @synthesize autoDisplayTimer=_autoDisplayTimer;
@property(retain, nonatomic) UAAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAInAppMessageController *messageController; // @synthesize messageController=_messageController;
@property(nonatomic) __weak id <UAInAppMessageControllerDelegate> messageControllerDelegate; // @synthesize messageControllerDelegate=_messageControllerDelegate;
@property(nonatomic) __weak id <UAInAppMessagingDelegate> messagingDelegate; // @synthesize messagingDelegate=_messagingDelegate;
@property(nonatomic, getter=isDisplayASAPEnabled) _Bool displayASAPEnabled; // @synthesize displayASAPEnabled=_displayASAPEnabled;
@property(nonatomic) double displayDelay; // @synthesize displayDelay=_displayDelay;
@property(retain, nonatomic) UIColor *defaultSecondaryColor; // @synthesize defaultSecondaryColor=_defaultSecondaryColor;
@property(retain, nonatomic) UIColor *defaultPrimaryColor; // @synthesize defaultPrimaryColor=_defaultPrimaryColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)handleRemoteNotification:(id)arg1;
- (void)handleNotificationResponse:(id)arg1;
- (void)dealloc;
- (void)displayMessage:(id)arg1;
- (void)displayMessage:(id)arg1 forcefully:(_Bool)arg2;
- (void)displayPendingMessage;
- (void)displayPendingMessage:(_Bool)arg1;
- (void)deletePendingMessage:(id)arg1;
@property(nonatomic, getter=isAutoDisplayEnabled) _Bool autoDisplayEnabled;
@property(copy, nonatomic) UAInAppMessage *pendingMessage;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)keyboardDidHide;
- (void)keyboardDidShow;
- (void)autoDisplayTimerFired:(id)arg1;
- (void)scheduleAutoDisplayTimer:(_Bool)arg1;
- (void)invalidateAutoDisplayTimer;
- (id)initWithAnalytics:(id)arg1 dataStore:(id)arg2;

@end

