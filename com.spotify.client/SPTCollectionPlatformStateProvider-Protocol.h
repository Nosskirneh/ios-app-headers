//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL;
@protocol SPTCollectionPlatformDataLoaderRequestToken;

@protocol SPTCollectionPlatformStateProvider <NSObject>
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeCollectionStateForURLs:(NSArray *)arg1 inContextURL:(NSURL *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeCollectionStateForURL:(NSURL *)arg1 inContextURL:(NSURL *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)collectionStateForURLs:(NSArray *)arg1 inContextURL:(NSURL *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)collectionStateForURL:(NSURL *)arg1 inContextURL:(NSURL *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeCollectionStateForURLs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeCollectionStateForURL:(NSURL *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)collectionStateForURLs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)collectionStateForURL:(NSURL *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
@end

