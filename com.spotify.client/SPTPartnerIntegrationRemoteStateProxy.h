//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "SPTPartnerIntegrationAuthorizable-Protocol.h"

@class NSString;
@protocol SPTPartnerIntegration;

@interface SPTPartnerIntegrationRemoteStateProxy : NSProxy <SPTPartnerIntegrationAuthorizable>
{
    _Bool _isConnected;
    NSString *_clientId;
    id <SPTPartnerIntegration> _integration;
}

@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) id <SPTPartnerIntegration> integration; // @synthesize integration=_integration;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithIntegration:(id)arg1 clientId:(id)arg2 isConnected:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

