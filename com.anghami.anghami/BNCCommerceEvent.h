//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSString;

@interface BNCCommerceEvent : NSObject
{
    NSDecimalNumber *_revenue;
    NSString *_currency;
    NSString *_transactionID;
    NSDecimalNumber *_shipping;
    NSDecimalNumber *_tax;
    NSString *_coupon;
    NSString *_affiliation;
    NSArray *_products;
}

@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSString *affiliation; // @synthesize affiliation=_affiliation;
@property(retain, nonatomic) NSString *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) NSDecimalNumber *tax; // @synthesize tax=_tax;
@property(retain, nonatomic) NSDecimalNumber *shipping; // @synthesize shipping=_shipping;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSDecimalNumber *revenue; // @synthesize revenue=_revenue;
- (void).cxx_destruct;
- (id)description;
- (id)dictionary;

@end

