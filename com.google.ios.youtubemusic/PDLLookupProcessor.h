//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDLClientConfigInternal, PDLLookupPersonCache, PDLPeopleLookupFEDSDataProvider, PDLPeopleLookupGRPCDataProvider, PDLPeopleLookupOptions, PDLResourceCollector, Reachability;
@protocol GSCAddressBookService, OS_dispatch_queue, PDLCacheService, PDLExperimentsService, PDLMetricsLogger, PDLMetricsTimer, PDLTopNCache;

@interface PDLLookupProcessor : NSObject
{
    PDLPeopleLookupOptions *_options;
    CDUnknownBlockType _callback;
    PDLPeopleLookupFEDSDataProvider *_lookupDataProvider;
    PDLPeopleLookupGRPCDataProvider *_lookupGRPCDataProvider;
    id <PDLTopNCache> _topNCache;
    PDLLookupPersonCache *_lookupPersonCache;
    PDLClientConfigInternal *_commonClientConfig;
    PDLClientConfigInternal *_emailClientConfig;
    PDLClientConfigInternal *_phoneClientConfig;
    PDLClientConfigInternal *_iantClientConfig;
    NSObject<OS_dispatch_queue> *_peopleWithIDsQueue;
    id <GSCAddressBookService> _addressBookService;
    id <PDLMetricsLogger> _metricsLogger;
    id <PDLCacheService> _cacheService;
    Reachability *_reachability;
    unsigned long long _totalPersonIDs;
    long long _callbackCount;
    unsigned long long _resultPosition;
    NSArray *_remainingPersonIDs;
    id <PDLMetricsTimer> _executeLookupTimer;
    id <PDLExperimentsService> _experimentsService;
    PDLResourceCollector *_resourceCollector;
}

@property(retain, nonatomic) PDLResourceCollector *resourceCollector; // @synthesize resourceCollector=_resourceCollector;
@property(retain, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) id <PDLMetricsTimer> executeLookupTimer; // @synthesize executeLookupTimer=_executeLookupTimer;
@property(retain, nonatomic) NSArray *remainingPersonIDs; // @synthesize remainingPersonIDs=_remainingPersonIDs;
@property unsigned long long resultPosition; // @synthesize resultPosition=_resultPosition;
@property long long callbackCount; // @synthesize callbackCount=_callbackCount;
@property(readonly, nonatomic) unsigned long long totalPersonIDs; // @synthesize totalPersonIDs=_totalPersonIDs;
@property(readonly) Reachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <PDLCacheService> cacheService; // @synthesize cacheService=_cacheService;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) id <GSCAddressBookService> addressBookService; // @synthesize addressBookService=_addressBookService;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *peopleWithIDsQueue; // @synthesize peopleWithIDsQueue=_peopleWithIDsQueue;
@property(readonly, nonatomic) PDLClientConfigInternal *iantClientConfig; // @synthesize iantClientConfig=_iantClientConfig;
@property(readonly, nonatomic) PDLClientConfigInternal *phoneClientConfig; // @synthesize phoneClientConfig=_phoneClientConfig;
@property(readonly, nonatomic) PDLClientConfigInternal *emailClientConfig; // @synthesize emailClientConfig=_emailClientConfig;
@property(readonly, nonatomic) PDLClientConfigInternal *commonClientConfig; // @synthesize commonClientConfig=_commonClientConfig;
@property(readonly, nonatomic) PDLLookupPersonCache *lookupPersonCache; // @synthesize lookupPersonCache=_lookupPersonCache;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) PDLPeopleLookupGRPCDataProvider *lookupGRPCDataProvider; // @synthesize lookupGRPCDataProvider=_lookupGRPCDataProvider;
@property(readonly, nonatomic) PDLPeopleLookupFEDSDataProvider *lookupDataProvider; // @synthesize lookupDataProvider=_lookupDataProvider;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) PDLPeopleLookupOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)shouldReturnAllMethodFields;
- (_Bool)enableGRPC;
- (_Bool)validateEncodeProfileIdForField:(id)arg1;
- (id)clientConfigWithType:(long long)arg1;
- (id)autocompletionsFromPersons:(id)arg1;
- (id)pickResultFromCandidates:(id)arg1 forIdType:(long long)arg2 query:(id)arg3 dataSource:(long long)arg4 clientConfig:(id)arg5;
- (id)filterFlattenAutocompletion:(id)arg1 type:(long long)arg2 requiresEmailCertificate:(_Bool)arg3;
- (id)matchedPersonFromAutocompletions:(id)arg1 type:(long long)arg2 query:(id)arg3 dataSource:(long long)arg4 requiresEmailCertificate:(_Bool)arg5;
- (void)deliverFoundResults:(id)arg1 notFoundIDs:(id)arg2 errors:(id)arg3 isLastCallback:(_Bool)arg4 delayStatus:(long long)arg5 callbackIndex:(unsigned long long)arg6 dataSource:(long long)arg7 numberSentToNetwork:(unsigned long long)arg8;
- (void)lookupPeopleAPIByIDs:(id)arg1 type:(long long)arg2;
- (void)lookupPeopleAPICache;
- (void)lookupPeopleAPI;
- (void)lookupWithRequiresEmailCertificate:(_Bool)arg1 dataSource:(long long)arg2 cacheLookupBlock:(CDUnknownBlockType)arg3;
- (id)lookupAddressbook;
- (void)lookupTopNCache;
- (void)executeLookup;
- (id)initWithContext:(id)arg1 personIDs:(id)arg2 options:(id)arg3 clientID:(long long)arg4 cacheService:(id)arg5 peopleWithIDsQueue:(id)arg6 callback:(CDUnknownBlockType)arg7;

@end

