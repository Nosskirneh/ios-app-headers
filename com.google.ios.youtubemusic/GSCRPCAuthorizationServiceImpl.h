//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCAuthorizationProvider-Protocol.h"
#import "SRLConfigurableService-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, PHSChannel;
@protocol GSCAccountsService, GSCAuthorizationService, OS_dispatch_queue;

@interface GSCRPCAuthorizationServiceImpl : NSObject <SRLConfigurableService, GSCAuthorizationProvider>
{
    id <GSCAccountsService> _accountsService;
    id <GSCAuthorizationService> _authorizationService;
    NSArray *_authScopes;
    NSMutableDictionary *_fetcherServicePromisesMap;
    PHSChannel *_accountListUpdateChannel;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
- (void)removeFetcherServiceForGaiaId:(id)arg1;
- (void)subscribeToAccountListUpdates;
- (id)fetcherServiceForGaiaId:(id)arg1;
- (id)initWithAccountsService:(id)arg1 authorizationService:(id)arg2 authScopes:(id)arg3;
- (id)initWithContext:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

