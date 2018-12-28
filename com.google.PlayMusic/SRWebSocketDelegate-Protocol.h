//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, SRWebSocket;

@protocol SRWebSocketDelegate <NSObject>
- (void)webSocket:(SRWebSocket *)arg1 didReceiveMessage:(id)arg2;

@optional
- (void)webSocket:(SRWebSocket *)arg1 didReceivePong:(NSData *)arg2;
- (void)webSocket:(SRWebSocket *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(SRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(SRWebSocket *)arg1;
@end

