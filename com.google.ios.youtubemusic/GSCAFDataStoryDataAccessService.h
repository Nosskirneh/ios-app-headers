//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCDataAccessService-Protocol.h"
#import "SRLService-Protocol.h"

@class NSString;
@protocol GSCAFDataStoryRPCService, GSCAccountId, GSCSideChannelDataManager, OS_dispatch_queue;

@interface GSCAFDataStoryDataAccessService : NSObject <SRLService, GSCDataAccessService>
{
    id <GSCAccountId> _accountID;
    id <GSCAFDataStoryRPCService> _rpcService;
    id <GSCSideChannelDataManager> _sideChannelDataManager;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
- (id)errorWithResponseErrorStatus:(id)arg1;
- (id)errorWithIncompleteResponse:(id)arg1;
- (id)startRequestForBatchKey:(id)arg1;
- (id)startRequestWithMutateData:(id)arg1;
- (id)mutate:(id)arg1;
- (id)batchFetch:(id)arg1;
- (id)fetch:(id)arg1;
- (id)initWithAccountID:(id)arg1 dataStoryRPCService:(id)arg2 sideChannelDataManager:(id)arg3;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

