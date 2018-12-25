//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FCDRPC)
- (id)fcdrpc_errorAnnotatedAsTransportRetryable;
- (id)fcdrpc_errorAnnotatedAsServerTimeout;
- (id)fcdrpc_errorAnnotatedAsClientTimeout;
- (id)fcdrpc_errorAddingRPCStatus:(id)arg1;
- (id)fcdrpc_errorAddingHTTPStatusCode:(long long)arg1;
- (_Bool)fcdrpc_isTransportRetryableError;
- (_Bool)fcdrpc_isTimeoutError;
- (_Bool)fcdrpc_isClientTimeoutError;
- (_Bool)fcdrpc_isServerTimeoutError;
- (id)fcdrpc_RPCStatus;
- (id)fcdrpc_HTTPStatusCode;
@end

