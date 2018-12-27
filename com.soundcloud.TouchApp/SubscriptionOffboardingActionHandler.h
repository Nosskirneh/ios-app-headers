//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SignificantDataChangeNotificationFactory;
@protocol _TtP8Payments25TrackPolicyUpdateProvider_, _TtP8Payments28SubscriptionChangeHandleable_;

@interface SubscriptionOffboardingActionHandler : NSObject
{
    id <_TtP8Payments28SubscriptionChangeHandleable_> _delegate;
    SignificantDataChangeNotificationFactory *_notificationFactory;
    id <_TtP8Payments25TrackPolicyUpdateProvider_> _policyService;
}

@property(readonly, nonatomic) id <_TtP8Payments25TrackPolicyUpdateProvider_> policyService; // @synthesize policyService=_policyService;
@property(readonly, nonatomic) SignificantDataChangeNotificationFactory *notificationFactory; // @synthesize notificationFactory=_notificationFactory;
@property(readonly, nonatomic) __weak id <_TtP8Payments28SubscriptionChangeHandleable_> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)continueWithoutResubscription;
- (void)resubscribe;
- (id)initWithPolicyService:(id)arg1 notificationFactory:(id)arg2 delegate:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

