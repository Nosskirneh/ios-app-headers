//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKProduct, _TtC8Payments23AppleProductsCollection;
@protocol _TtP8Features13PlanUpselling_;

@interface _TtC8Payments38HighTierSubscriberUpsellViewDataSource : NSObject
{
    // Error parsing type: , name: products
    // Error parsing type: , name: upsell
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long adjustProductType;
@property(nonatomic, readonly) NSString *restrictionsText;
@property(nonatomic, readonly) SKProduct *mainProduct;
@property(nonatomic, readonly) NSString *descriptionText;
@property(nonatomic, readonly) NSString *morePlansText;
@property(nonatomic, readonly) NSString *priceText;
@property(nonatomic, readonly) NSString *purchaseText;
@property(nonatomic, readonly) NSString *titleText;
@property(nonatomic, readonly) id <_TtP8Features13PlanUpselling_> upsell; // @synthesize upsell;
@property(nonatomic, retain) _TtC8Payments23AppleProductsCollection *products; // @synthesize products;

@end

