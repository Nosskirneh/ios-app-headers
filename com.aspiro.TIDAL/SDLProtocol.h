//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLProtocolListener-Protocol.h"
#import "SDLTransportDelegate-Protocol.h"

@class NSHashTable, NSMutableData, NSMutableDictionary, NSString, SDLPrioritizedObjectCollection, SDLProtocolReceivedMessageRouter;
@protocol OS_dispatch_queue, SDLSecurityType, SDLTransportType;

@interface SDLProtocol : NSObject <SDLProtocolListener, SDLTransportDelegate>
{
    unsigned int _messageID;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    SDLPrioritizedObjectCollection *_prioritizedCollection;
    int _hashId;
    NSString *_debugConsoleGroupName;
    id <SDLTransportType> _transport;
    NSHashTable *_protocolDelegateTable;
    id <SDLSecurityType> _securityManager;
    NSString *_appId;
    NSMutableData *_receiveBuffer;
    SDLProtocolReceivedMessageRouter *_messageRouter;
    NSMutableDictionary *_serviceHeaders;
}

+ (id)sdl_serverSecurityFailedMessageWithClientMessageHeader:(id)arg1 messageId:(unsigned int)arg2;
+ (id)sdl_serverSecurityHandshakeMessageWithData:(id)arg1 clientMessageHeader:(id)arg2 messageId:(unsigned int)arg3;
@property(nonatomic) int hashId; // @synthesize hashId=_hashId;
@property(retain, nonatomic) NSMutableDictionary *serviceHeaders; // @synthesize serviceHeaders=_serviceHeaders;
@property(retain, nonatomic) SDLProtocolReceivedMessageRouter *messageRouter; // @synthesize messageRouter=_messageRouter;
@property(retain, nonatomic) NSMutableData *receiveBuffer; // @synthesize receiveBuffer=_receiveBuffer;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) id <SDLSecurityType> securityManager; // @synthesize securityManager=_securityManager;
@property(retain, nonatomic) NSHashTable *protocolDelegateTable; // @synthesize protocolDelegateTable=_protocolDelegateTable;
@property(nonatomic) __weak id <SDLTransportType> transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *debugConsoleGroupName; // @synthesize debugConsoleGroupName=_debugConsoleGroupName;
- (void).cxx_destruct;
- (void)sdl_processSecurityMessage:(id)arg1;
- (void)sdl_logControlNAKPayload:(id)arg1;
- (void)onError:(id)arg1 exception:(id)arg2;
- (void)onProtocolClosed;
- (void)onProtocolOpened;
- (void)onProtocolMessageReceived:(id)arg1;
- (void)handleHeartbeatACK;
- (void)handleHeartbeatForSession:(unsigned char)arg1;
- (void)handleProtocolEndServiceNAKMessage:(id)arg1;
- (void)handleProtocolEndServiceACKMessage:(id)arg1;
- (void)handleProtocolStartServiceNAKMessage:(id)arg1;
- (void)handleProtocolStartServiceACKMessage:(id)arg1;
- (void)processMessages;
- (void)handleBytesFromTransport:(id)arg1;
- (void)sdl_sendRawData:(id)arg1 onService:(unsigned char)arg2 encryption:(_Bool)arg3;
- (void)sendEncryptedRawData:(id)arg1 onService:(unsigned char)arg2;
- (void)sendRawData:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)sdl_sendDataToTransport:(id)arg1 onService:(long long)arg2;
- (_Bool)sendRPC:(id)arg1 encrypted:(_Bool)arg2 error:(id *)arg3;
- (void)sendRPC:(id)arg1;
- (void)endServiceWithType:(unsigned char)arg1;
- (void)sdl_initializeTLSEncryptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sdl_createStartServiceMessageWithType:(unsigned char)arg1 encrypted:(_Bool)arg2 payload:(id)arg3;
- (void)startSecureServiceWithType:(unsigned char)arg1 payload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startServiceWithType:(unsigned char)arg1 payload:(id)arg2;
- (void)onDataReceived:(id)arg1;
- (void)onTransportDisconnected;
- (void)onTransportConnected;
- (unsigned char)sdl_retrieveSessionIDforServiceType:(unsigned char)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

