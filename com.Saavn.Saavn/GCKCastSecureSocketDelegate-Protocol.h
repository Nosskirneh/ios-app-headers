//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastSecureSocket, NSData, NSError;

@protocol GCKCastSecureSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSecureSocket *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didFailToConnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didConnectWithPeerSecTrust:(struct __SecTrust *)arg2;
@end

