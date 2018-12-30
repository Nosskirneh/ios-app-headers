//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"
#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class GCDAsyncSocket, NSMutableArray, NSNetService, NSNetServiceBrowser, NSString;
@protocol ConnectivityManagerDelegate;

@interface ConnectivityManager : NSObject <NSNetServiceBrowserDelegate, GCDAsyncSocketDelegate, NSNetServiceDelegate>
{
    id <ConnectivityManagerDelegate> _delegate;
    id <ConnectivityManagerDelegate> _synaction;
    NSMutableArray *_services;
    NSNetService *_connectedService;
    NSMutableArray *_allSockets;
    GCDAsyncSocket *_socket;
    NSNetService *_service;
    NSNetServiceBrowser *_serviceBrowser;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) NSMutableArray *allSockets; // @synthesize allSockets=_allSockets;
@property(retain, nonatomic) NSNetService *connectedService; // @synthesize connectedService=_connectedService;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(nonatomic) id <ConnectivityManagerDelegate> synaction; // @synthesize synaction=_synaction;
@property(nonatomic) id <ConnectivityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (id)parseBody:(id)arg1;
- (unsigned long long)parseHeader:(id)arg1;
- (void)sendPacket:(id)arg1 toSockets:(id)arg2;
- (void)disconnetWithService:(id)arg1;
- (_Bool)connectWithService:(id)arg1;
- (void)stopBonjour;
- (void)startBrowsingForBonjourBroadcast;
- (void)startBonjourBroadcast;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

