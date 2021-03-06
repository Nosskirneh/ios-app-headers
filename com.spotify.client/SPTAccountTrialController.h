//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSDate, NSNotificationCenter, NSString, SPSession;
@protocol SPTAccountTrialControllerDelegate;

@interface SPTAccountTrialController : NSObject <SPSessionObserver, SPTProductStateObserver>
{
    long long _state;
    NSDate *_expirationDate;
    id <SPTAccountTrialControllerDelegate> _delegate;
    SPSession *_session;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTAccountTrialControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sessionUserDidLogoutNotification;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)showTrialStartedMessage;
- (void)showTrialEndedMessageWithPaymentState;
- (void)showTrialMessageIfNeeded;
- (void)setExpirationDate:(id)arg1;
- (void)setState:(long long)arg1;
- (void)resetPaymentState;
- (void)updatePaymentState;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithSession:(id)arg1 notificationCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

