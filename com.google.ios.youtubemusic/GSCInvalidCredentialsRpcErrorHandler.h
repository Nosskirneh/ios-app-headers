//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCRpcErrorHandler-Protocol.h"

@class NSString;
@protocol GSCAuthorizationProvider;

@interface GSCInvalidCredentialsRpcErrorHandler : NSObject <GSCRpcErrorHandler>
{
    id <GSCAuthorizationProvider> _authorizationProvider;
}

- (void).cxx_destruct;
- (void)ensureAuthorizationProvider;
- (id)handleError:(id)arg1 forRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
