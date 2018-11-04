//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUpsellLogger.h"

@class NSString;

@interface SPTUpsellLogMessageLogger : NSObject <SPTUpsellLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTProductState> _productState;
}

+ (id)userIntentFromActionType:(long long)arg1;
+ (id)targetUriFromActionType:(long long)arg1;
+ (id)stringFromStyle:(long long)arg1;
+ (id)stringFromType:(long long)arg1;
+ (id)stringFromReason:(long long)arg1;
+ (id)promotedOfferFromAvailableProduct:(long long)arg1;
+ (id)interactionForButton:(id)arg1;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)currentProduct;
- (void)logDismissAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
- (void)logGetAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
- (void)logInteraction:(id)arg1 forAvailableProduct:(long long)arg2 reason:(long long)arg3 type:(long long)arg4;
- (void)logDidPresentAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
@property(readonly, copy, nonatomic) NSString *loggerIdentifier;
- (void)logTermsAndConditionsOnUpsell:(id)arg1;
- (void)logInteractionWithUpsell:(id)arg1 dismissType:(id)arg2;
- (void)logInteractionWithUpsell:(id)arg1 viaButton:(id)arg2;
- (void)logImpressionOfUpsell:(id)arg1;
- (void)logUpsellEventOfUpsell:(id)arg1 message:(id)arg2 messageList:(id)arg3;
- (id)initWithLogCenter:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

