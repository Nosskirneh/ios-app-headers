//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSArray, NSString, SSDigitalRight, SSProduct;

@interface SSPriceQuote : SSBaseResponseObject
{
    NSString *_type;
    NSString *_prepaidMonthly;
    NSArray *_pricePoints;
    SSDigitalRight *_digitalRight;
    SSProduct *_product;
    NSString *_retrievalToken;
    NSArray *_servicePlanIds;
}

+ (id)quoteWithJSON:(id)arg1;
@property(retain, nonatomic) NSArray *servicePlanIds; // @synthesize servicePlanIds=_servicePlanIds;
@property(retain, nonatomic) NSString *retrievalToken; // @synthesize retrievalToken=_retrievalToken;
@property(retain, nonatomic) SSProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) SSDigitalRight *digitalRight; // @synthesize digitalRight=_digitalRight;
@property(retain, nonatomic) NSArray *pricePoints; // @synthesize pricePoints=_pricePoints;
@property(retain, nonatomic) NSString *prepaidMonthly; // @synthesize prepaidMonthly=_prepaidMonthly;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initInternal;

@end
