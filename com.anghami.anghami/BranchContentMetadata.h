//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSMutableArray, NSMutableDictionary, NSString;

@interface BranchContentMetadata : NSObject
{
    NSMutableArray *_imageCaptions;
    NSMutableDictionary *_customMetadata;
    NSString *_contentSchema;
    double _quantity;
    NSDecimalNumber *_price;
    NSString *_currency;
    NSString *_sku;
    NSString *_productName;
    NSString *_productBrand;
    NSString *_productCategory;
    NSString *_productVariant;
    NSString *_condition;
    double _ratingAverage;
    long long _ratingCount;
    double _ratingMax;
    double _rating;
    NSString *_addressStreet;
    NSString *_addressCity;
    NSString *_addressRegion;
    NSString *_addressCountry;
    NSString *_addressPostalCode;
    double _latitude;
    double _longitude;
}

+ (id)contentMetadataWithDictionary:(id)arg1;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *addressPostalCode; // @synthesize addressPostalCode=_addressPostalCode;
@property(retain, nonatomic) NSString *addressCountry; // @synthesize addressCountry=_addressCountry;
@property(retain, nonatomic) NSString *addressRegion; // @synthesize addressRegion=_addressRegion;
@property(retain, nonatomic) NSString *addressCity; // @synthesize addressCity=_addressCity;
@property(retain, nonatomic) NSString *addressStreet; // @synthesize addressStreet=_addressStreet;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) double ratingMax; // @synthesize ratingMax=_ratingMax;
@property(nonatomic) long long ratingCount; // @synthesize ratingCount=_ratingCount;
@property(nonatomic) double ratingAverage; // @synthesize ratingAverage=_ratingAverage;
@property(retain, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSString *productVariant; // @synthesize productVariant=_productVariant;
@property(retain, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(retain, nonatomic) NSString *productBrand; // @synthesize productBrand=_productBrand;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(nonatomic) double quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *contentSchema; // @synthesize contentSchema=_contentSchema;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSMutableArray *imageCaptions;
@property(copy, nonatomic) NSMutableDictionary *customMetadata;
- (id)dictionary;

@end

