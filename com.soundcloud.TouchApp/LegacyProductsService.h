//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ProductsApi;

@interface LegacyProductsService : NSObject
{
    ProductsApi *_productsApi;
}

@property(readonly, nonatomic) ProductsApi *productsApi; // @synthesize productsApi=_productsApi;
- (void).cxx_destruct;
- (id)availableProducts;
- (id)initWithProductsApi:(id)arg1;
- (id)init;

@end

