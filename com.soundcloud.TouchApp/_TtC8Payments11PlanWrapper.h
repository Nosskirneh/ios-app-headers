//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface _TtC8Payments11PlanWrapper : NSObject
{
    // Error parsing type: , name: testVendor
}

- (CDUnknownBlockType).cxx_destruct;
- (id)changeSubscriptionTo:(id)arg1 isShinyOnboardingActive:(_Bool)arg2 techLogger:(id)arg3;
@property(nonatomic, readonly) NSString *termsOfServiceMessage;
@property(nonatomic, readonly) _Bool purchasedThroughApple;
@property(nonatomic, readonly) UIColor *subscriptionStatusCellTextColor;
@property(nonatomic, readonly) _Bool shouldShowRestorationCell;
@property(nonatomic, readonly) NSString *moreMenuStatusLabelKey;
@property(nonatomic, readonly) _Bool isSubscribedApplePlan;
@property(nonatomic, readonly) _Bool isSubscribedPlan;
@property(nonatomic, readonly) long long integerIdentifier;
@property(nonatomic, readonly) NSString *appStoreIdentifier;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, copy) NSString *vendor;
- (_Bool)isFree;
- (unsigned long long)planType;
- (id)init;

@end

