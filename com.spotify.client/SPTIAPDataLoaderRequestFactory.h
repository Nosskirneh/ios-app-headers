//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTIAPRequestFactory.h"

@class SPTDataLoaderFactory;

@interface SPTIAPDataLoaderRequestFactory : SPTIAPRequestFactory
{
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createProductActivationRequestWithReceiptData:(id)arg1;
- (id)createTransactionRequestForPayment:(id)arg1;
- (id)createItunesProductRequestForProductIdentifiers:(id)arg1;
- (id)createSpotifyProductRequest;
- (id)initWithDataLoaderFactory:(id)arg1 paymentQueue:(id)arg2 applicationVersionString:(id)arg3;

@end

