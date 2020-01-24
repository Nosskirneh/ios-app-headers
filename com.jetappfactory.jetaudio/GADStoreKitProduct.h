//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKStoreProductViewController;

@interface GADStoreKitProduct : NSObject
{
    long long _productID;
    NSMutableArray *_fetchCompletionBlocks;
    _Bool _isUsed;
    SKStoreProductViewController *_controller;
    _Bool _isFetchInProgress;
    _Bool _fetchSucceeded;
}

- (void).cxx_destruct;
- (void)finishFetchingAndNotifyCompletionBlockWithResult:(_Bool)arg1 error:(id)arg2;
- (void)fetchInAppStoreWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long productID;
- (id)init;
- (id)initWithProductID:(long long)arg1;

@end

