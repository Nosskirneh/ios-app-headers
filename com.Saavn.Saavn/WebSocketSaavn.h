//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SRWebSocketDelegate-Protocol.h"

@class NSData, NSString, NSTimer, SRWebSocket;
@protocol WebSocketSaavnDelegate;

@interface WebSocketSaavn : NSObject <SRWebSocketDelegate>
{
    SRWebSocket *saavnSocket;
    NSData *requestedData;
    NSTimer *socketCloserTimer;
    NSTimer *socketTimeOutTimer;
    id <WebSocketSaavnDelegate> delegate;
}

+ (id)sharedManager;
@property(nonatomic) id <WebSocketSaavnDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSTimer *socketTimeOutTimer; // @synthesize socketTimeOutTimer;
@property(retain, nonatomic) NSTimer *socketCloserTimer; // @synthesize socketCloserTimer;
@property(retain, nonatomic) SRWebSocket *saavnSocket; // @synthesize saavnSocket;
- (void).cxx_destruct;
- (void)processReachability:(long long)arg1;
- (_Bool)webSocketShouldConvertTextFrameToString:(id)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceivePong:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)startRequest:(id)arg1 withDelegate:(id)arg2;
- (void)timeOutConnection;
- (void)requestTimerStop;
- (void)requestTimerStart;
- (void)closeTimer;
- (void)startTimer;
- (void)closeSocket;
- (void)closeConnection;
- (void)openConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

