//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLDataService-Protocol.h"

@class GPBEnumArray, GPCPromise, GSCAccount, NSString;
@protocol GIPMInternalPeopleMinimalService, GIPMPeopleApiAutocompleteMinimalService, GSCAccountId, OS_dispatch_queue, PDLClientInfoProvider, PDLMetricsLoggerFactory, PDLTopNCache;

@interface PDLGRPCDataProvider : NSObject <PDLDataService>
{
    id <GSCAccountId> _accountID;
    NSObject<OS_dispatch_queue> *_peopleCacheQueue;
    NSObject<OS_dispatch_queue> *_refreshCacheIfNecessaryQueue;
    NSObject<OS_dispatch_queue> *_loadTopNPromisesQueue;
    id <PDLTopNCache> _topNCache;
    GSCAccount *_account;
    id <PDLClientInfoProvider> _clientInfoProvider;
    GPCPromise *_latestLoadTopNPromise;
    GPBEnumArray *_includeContainerArray;
    id <GIPMInternalPeopleMinimalService> _internalPeopleMinimalService;
    id <GIPMPeopleApiAutocompleteMinimalService> _peopleApiAutocompleteMinimalService;
    id <PDLMetricsLoggerFactory> _metricsLoggerFactory;
}

+ (_Bool)gRPCDependenciesExistWithContext:(id)arg1;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory; // @synthesize metricsLoggerFactory=_metricsLoggerFactory;
@property(readonly, nonatomic) id <GIPMPeopleApiAutocompleteMinimalService> peopleApiAutocompleteMinimalService; // @synthesize peopleApiAutocompleteMinimalService=_peopleApiAutocompleteMinimalService;
@property(readonly, nonatomic) id <GIPMInternalPeopleMinimalService> internalPeopleMinimalService; // @synthesize internalPeopleMinimalService=_internalPeopleMinimalService;
@property(retain, nonatomic) GPBEnumArray *includeContainerArray; // @synthesize includeContainerArray=_includeContainerArray;
@property(retain) GPCPromise *latestLoadTopNPromise; // @synthesize latestLoadTopNPromise=_latestLoadTopNPromise;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
@property(readonly, nonatomic) GSCAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadTopNPromisesQueue; // @synthesize loadTopNPromisesQueue=_loadTopNPromisesQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *refreshCacheIfNecessaryQueue; // @synthesize refreshCacheIfNecessaryQueue=_refreshCacheIfNecessaryQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *peopleCacheQueue; // @synthesize peopleCacheQueue=_peopleCacheQueue;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)noFlattenClientConfigWithClientConfig:(id)arg1;
- (id)errorWithContent:(id)arg1;
- (void)addPersonsToGroupMembersWithTargetingMethodsDictionary:(struct NSMutableDictionary *)arg1 serverPersonDictionary:(id)arg2 clientConfig:(id)arg3;
- (void)dropLegacyAutocompletionsWithResultSoFar:(id)arg1;
- (void)populateTopNCacheWithListRankedTargetsResponse:(id)arg1 maxResults:(unsigned long long)arg2 resultSoFar:(id)arg3 serverPersonDictionary:(id)arg4 clientConfig:(id)arg5 metricsLogger:(id)arg6;
- (id)listRankedTargetsRequestWithMaxResults:(unsigned long long)arg1 clientConfig:(id)arg2;
- (id)listRankedTargets:(unsigned long long)arg1 results:(id)arg2 isBackgroundOperation:(_Bool)arg3 clientConfig:(id)arg4 metricsLogger:(id)arg5;
- (id)autocompletePeopleByQuery:(id)arg1 client:(id)arg2 retrialCount:(unsigned long long)arg3 isCacheWarmupCall:(_Bool)arg4 withQueue:(id)arg5 clientConfig:(id)arg6;
- (id)loadTopNCacheIfNecessaryWithClientConfig:(id)arg1;
- (id)loadTopNCacheWithIsBackgroundOperation:(_Bool)arg1 clientConfig:(id)arg2;
- (void)bootstrapStarlightCacheWithClientConfig:(id)arg1;
- (id)autocompletePeopleByQuery:(id)arg1 client:(id)arg2 withQueue:(id)arg3 clientConfig:(id)arg4;
- (id)initWithContext:(id)arg1 autocompleteCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

