//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface SPTRecentlyPlayedDataLoader : NSObject
{
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    NSMutableArray *_additionalContentTypes;
    NSMutableDictionary *_subscription;
    id <SPTCollectionPlatformTestManager> _testManager;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _requestToken;
}

@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSMutableDictionary *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSMutableArray *additionalContentTypes; // @synthesize additionalContentTypes=_additionalContentTypes;
@property(readonly, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
- (void).cxx_destruct;
- (id)setupRequestBody;
- (id)setupRequestString;
- (_Bool)enableContentType:(unsigned long long)arg1;
- (void)hideEntityWithUrl:(id)arg1;
- (void)subscribeOnSuccess:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (id)initWithCosmosDataLoader:(id)arg1 testManager:(id)arg2;

@end

