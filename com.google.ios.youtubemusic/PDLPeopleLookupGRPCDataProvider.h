//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCAccount;
@protocol GIPMInternalPeopleMinimalService, OS_dispatch_queue, PDLClientInfoProvider, PDLMetricsLoggerFactory;

@interface PDLPeopleLookupGRPCDataProvider : NSObject
{
    id <PDLClientInfoProvider> _clientInfoProvider;
    NSObject<OS_dispatch_queue> *_peopleWithIDsQueue;
    NSObject<OS_dispatch_queue> *_lookupPeopleQueue;
    GSCAccount *_account;
    id <PDLMetricsLoggerFactory> _metricsLoggerFactory;
    id <GIPMInternalPeopleMinimalService> _internalPeopleMinimalService;
}

+ (_Bool)gRPCDependenciesExistWithContext:(id)arg1;
@property(readonly, nonatomic) id <GIPMInternalPeopleMinimalService> internalPeopleMinimalService; // @synthesize internalPeopleMinimalService=_internalPeopleMinimalService;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory; // @synthesize metricsLoggerFactory=_metricsLoggerFactory;
@property(readonly, nonatomic) GSCAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupPeopleQueue; // @synthesize lookupPeopleQueue=_lookupPeopleQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *peopleWithIDsQueue; // @synthesize peopleWithIDsQueue=_peopleWithIDsQueue;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
- (void).cxx_destruct;
- (void)savePerson:(id)arg1 toMap:(id)arg2 fromMap:(id)arg3 clientConfig:(id)arg4;
- (struct NSDictionary *)lookupResultWithIDToPersonMap:(id)arg1 matches:(id)arg2 clientConfig:(id)arg3;
- (int)requestTypeWithPersonType:(long long)arg1;
- (id)serverRequestWithPersonIDs:(id)arg1 type:(long long)arg2 clientConfig:(id)arg3;
- (void)lookupPeopleByKnownIDs:(id)arg1 type:(long long)arg2 clientConfig:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 peopleWithIDsQueue:(id)arg2;

@end

