//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLDataService-Protocol.h"

@class GPBEnumArray, GPCPromise, GSCAccount, NSString, PDLClientConfigInternal;
@protocol GSCDataAccessService, OS_dispatch_queue, PDLClientInfoProvider, PDLMetricsLogger, PDLTopNCache, PeopleApiDataService;

@interface PDLFEDSDataProvider : NSObject <PDLDataService>
{
    PDLClientConfigInternal *_clientConfig;
    id <PDLMetricsLogger> _metricsLogger;
    NSObject<OS_dispatch_queue> *_peopleCacheQueue;
    NSObject<OS_dispatch_queue> *_refreshCacheIfNecessaryQueue;
    NSObject<OS_dispatch_queue> *_loadTopNPromisesQueue;
    id <PDLTopNCache> _topNCache;
    GSCAccount *_account;
    id <GSCDataAccessService> _dataAccessService;
    id <PDLClientInfoProvider> _clientInfoProvider;
    PDLClientConfigInternal *_noFlattenClientConfig;
    GPCPromise *_latestLoadTopNPromise;
    id <PeopleApiDataService> _peopleApiDataService;
    GPBEnumArray *_includeContainerArray;
}

@property(retain, nonatomic) GPBEnumArray *includeContainerArray; // @synthesize includeContainerArray=_includeContainerArray;
@property(readonly, nonatomic) id <PeopleApiDataService> peopleApiDataService; // @synthesize peopleApiDataService=_peopleApiDataService;
@property(retain) GPCPromise *latestLoadTopNPromise; // @synthesize latestLoadTopNPromise=_latestLoadTopNPromise;
@property(readonly, nonatomic) PDLClientConfigInternal *noFlattenClientConfig; // @synthesize noFlattenClientConfig=_noFlattenClientConfig;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
@property(readonly, nonatomic) id <GSCDataAccessService> dataAccessService; // @synthesize dataAccessService=_dataAccessService;
@property(readonly, nonatomic) GSCAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadTopNPromisesQueue; // @synthesize loadTopNPromisesQueue=_loadTopNPromisesQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *refreshCacheIfNecessaryQueue; // @synthesize refreshCacheIfNecessaryQueue=_refreshCacheIfNecessaryQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *peopleCacheQueue; // @synthesize peopleCacheQueue=_peopleCacheQueue;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) PDLClientConfigInternal *clientConfig; // @synthesize clientConfig=_clientConfig;
- (void).cxx_destruct;
- (_Bool)enableIRPC;
- (void)registerExtension;
- (id)errorWithContent:(id)arg1;
- (void)addPersonsToGroupMembersWithTargetingMethodsDictionary:(struct NSMutableDictionary *)arg1 serverPersonDictionary:(id)arg2;
- (void)dropLegacyAutocompletionsWithResultSoFar:(id)arg1;
- (void)populateTopNCacheWithListRankedTargetsResponse:(id)arg1 maxResults:(unsigned long long)arg2 resultSoFar:(id)arg3 serverPersonDictionary:(id)arg4;
- (id)listRankedTargetsRequestWithMaxResults:(unsigned long long)arg1;
- (id)listRankedTargets:(unsigned long long)arg1 results:(id)arg2 isBackgroundOperation:(_Bool)arg3;
- (id)autocompletePeopleByQuery:(id)arg1 client:(id)arg2 retrialCount:(unsigned long long)arg3 isCacheWarmupCall:(_Bool)arg4 withQueue:(id)arg5;
- (id)loadTopNCacheIfNecessaryWithClientConfig:(id)arg1;
- (id)loadTopNCacheWithIsBackgroundOperation:(_Bool)arg1 clientConfig:(id)arg2;
- (void)bootstrapStarlightCacheWithClientConfig:(id)arg1;
- (id)autocompletePeopleByQuery:(id)arg1 client:(id)arg2 withQueue:(id)arg3 clientConfig:(id)arg4;
- (id)initWithContext:(id)arg1 clientConfig:(id)arg2 autocompleteCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
