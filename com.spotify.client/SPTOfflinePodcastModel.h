//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineContentModel-Protocol.h"

@class NSDictionary, NSString;
@protocol SPTCosmosDictionaryDataLoader, SPTCosmosDictionaryDataLoaderRequestToken, SPTOfflineContentModelDelegate;

@interface SPTOfflinePodcastModel : NSObject <SPTOfflineContentModel>
{
    _Bool _loaded;
    id <SPTOfflineContentModelDelegate> delegate;
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _requestToken;
    NSDictionary *_currentResponse;
}

+ (id)policy;
+ (id)requestURL;
@property(copy, nonatomic) NSDictionary *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
@property(nonatomic) __weak id <SPTOfflineContentModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)updateModelEntity;
- (void)loadOfflinePodcastEpisodes;
- (void)tearDown;
- (void)loadModel;
- (id)initWithCosmosDictionaryDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

