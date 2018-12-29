//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCDAsyncUdpSocket, NSData, NSError;

@protocol GCDAsyncUdpSocketDelegate <NSObject>

@optional
- (void)udpSocketDidClose:(GCDAsyncUdpSocket *)arg1 withError:(NSError *)arg2;
- (void)udpSocket:(GCDAsyncUdpSocket *)arg1 didReceiveData:(NSData *)arg2 fromAddress:(NSData *)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(GCDAsyncUdpSocket *)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(NSError *)arg3;
- (void)udpSocket:(GCDAsyncUdpSocket *)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocket:(GCDAsyncUdpSocket *)arg1 didNotConnect:(NSError *)arg2;
- (void)udpSocket:(GCDAsyncUdpSocket *)arg1 didConnectToAddress:(NSData *)arg2;
@end

