//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsObserver-Protocol.h"

@class APAnalyticsAttributeRegistry, APAnalyticsController, AnalyticsDimensions, AuthUserNotificationFactory, MarketingController, NSString, RACDisposable;

@interface AnalyticsAuthObserver : NSObject <AnalyticsObserver>
{
    APAnalyticsController *_analyticsController;
    MarketingController *_marketingController;
    AuthUserNotificationFactory *_notificationFactory;
    AnalyticsDimensions *_analyticsDimensions;
    APAnalyticsAttributeRegistry *_analyticsAttributeRegistry;
    RACDisposable *_disposable;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) APAnalyticsAttributeRegistry *analyticsAttributeRegistry; // @synthesize analyticsAttributeRegistry=_analyticsAttributeRegistry;
@property(readonly, nonatomic) AnalyticsDimensions *analyticsDimensions; // @synthesize analyticsDimensions=_analyticsDimensions;
@property(readonly, nonatomic) AuthUserNotificationFactory *notificationFactory; // @synthesize notificationFactory=_notificationFactory;
@property(readonly, nonatomic) MarketingController *marketingController; // @synthesize marketingController=_marketingController;
@property(readonly, nonatomic) APAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (id)subscribeUserDidLogout;
- (id)subscribeUserDidLogin;
- (void)startObserving;
- (id)initWithAnalyticsController:(id)arg1 marketingController:(id)arg2 authUserNotificationFactory:(id)arg3 analyticsDimensions:(id)arg4 analyticsAttributeRegistry:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
