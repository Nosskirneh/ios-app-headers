//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZRInAppPurchaseService, NSError, NSString;

@protocol DZRInAppPurchaseServiceDelegate <NSObject>
- (void)service:(DZRInAppPurchaseService *)arg1 finishedProcessForProductId:(NSString *)arg2;
- (void)service:(DZRInAppPurchaseService *)arg1 failedToValidateProductPurchase:(NSString *)arg2 withError:(NSError *)arg3;
- (void)service:(DZRInAppPurchaseService *)arg1 validatedProductPurchase:(NSString *)arg2;
- (void)service:(DZRInAppPurchaseService *)arg1 failedToPurchaseProductId:(NSString *)arg2 withError:(NSError *)arg3;
- (void)service:(DZRInAppPurchaseService *)arg1 purchasedProduct:(NSString *)arg2;
- (void)service:(DZRInAppPurchaseService *)arg1 purchasingProductDeferred:(NSString *)arg2;
- (void)service:(DZRInAppPurchaseService *)arg1 purchasingProduct:(NSString *)arg2;
@end

