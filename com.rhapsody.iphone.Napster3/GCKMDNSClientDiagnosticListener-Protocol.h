//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKMDNSClient, GCKMDNSError, GCKMDNSResponse, NSSet, NSString;

@protocol GCKMDNSClientDiagnosticListener <NSObject>
- (void)MDNSClient:(GCKMDNSClient *)arg1 didFailToParseResponse:(int)arg2 fromIPAddress:(NSString *)arg3 error:(GCKMDNSError *)arg4;
- (void)MDNSClient:(GCKMDNSClient *)arg1 didReceiveResponse:(GCKMDNSResponse *)arg2 unicast:(_Bool)arg3;
- (void)MDNSClient:(GCKMDNSClient *)arg1 didSendDiscoveryQueryWithServiceType:(NSString *)arg2 subtypes:(NSSet *)arg3 unicastResponse:(_Bool)arg4 transactionID:(unsigned short)arg5 packetCount:(unsigned long long)arg6;
@end

