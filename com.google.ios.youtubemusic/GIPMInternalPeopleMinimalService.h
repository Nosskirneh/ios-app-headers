//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCService.h"

#import "GIPMInternalPeopleMinimalService-Protocol.h"
#import "SRLService-Protocol.h"

@class FCDRPC, FCDRPCContext, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDRPCServiceInterceptorsProvider, FCDTransport;

@interface GIPMInternalPeopleMinimalService : FCDRPCService <SRLService, GIPMInternalPeopleMinimalService>
{
    FCDRPC *_listRankedPeopleRPC;
    FCDRPC *_listRankedTargetsRPC;
    FCDRPC *_listPeopleByKnownIdRPC;
}

+ (id)oauthScopesForRPCID:(id)arg1;
+ (id)serviceHostNames;
+ (id)servicePackage;
+ (id)serviceName;
@property(readonly, nonatomic) FCDRPC *listPeopleByKnownIdRPC; // @synthesize listPeopleByKnownIdRPC=_listPeopleByKnownIdRPC;
@property(readonly, nonatomic) FCDRPC *listRankedTargetsRPC; // @synthesize listRankedTargetsRPC=_listRankedTargetsRPC;
@property(readonly, nonatomic) FCDRPC *listRankedPeopleRPC; // @synthesize listRankedPeopleRPC=_listRankedPeopleRPC;
- (void).cxx_destruct;
- (id)initWithRPCManager:(id)arg1 authorizer:(id)arg2 interceptorsProvider:(id)arg3 transport:(id)arg4 context:(id)arg5;
- (id)initWithContext:(id)arg1;
- (id)initWithAuthorizer:(id)arg1 RPCManager:(id)arg2 RPCServiceInterceptorsProvider:(id)arg3 transport:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <FCDRPCServiceInterceptorsProvider> interceptorsProvider;
@property(readonly, nonatomic) FCDRPCContext *rpcContext;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <FCDTransport> transport;

@end

