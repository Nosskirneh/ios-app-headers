//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKNSocketAddress, GCKNUDPSocket, NSData, NSError;

@protocol GCKNUDPSocketDelegate <NSObject>
- (void)udpSocket:(GCKNUDPSocket *)arg1 didCloseWithError:(NSError *)arg2;
- (void)udpSocket:(GCKNUDPSocket *)arg1 didReceivePacket:(NSData *)arg2 fromAddress:(GCKNSocketAddress *)arg3;
@end

