//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKNUDPSocketDelegate-Protocol.h"

@class GCKMDNSResponseDecoder, GCKNMulticastSocket, GCKNNetworkAddress, GCKNNetworkInterface, GCKNNetworkReachability, GCKNSocketAddress, GCKNUDPSocket, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface GCKMDNSClient : NSObject <GCKNUDPSocketDelegate>
{
    NSMutableDictionary *_serviceTypeTable;
    NSMutableDictionary *_diagnosticListenerTable;
    NSMutableDictionary *_serviceInstanceTable;
    NSArray *_browseQueryPackets;
    NSArray *_browseUnicastQueryPackets;
    NSMutableSet *_resolveQuestions;
    unsigned long long _unicastQueryCounter;
    GCKNMulticastSocket *_multicastSocket;
    GCKNUDPSocket *_unicastSocket;
    GCKNNetworkAddress *_mdnsAddress;
    GCKNSocketAddress *_mdnsSocketAddress;
    NSTimer *_timer;
    GCKNNetworkReachability *_reachability;
    GCKNNetworkInterface *_networkInterface;
    GCKMDNSResponseDecoder *_responseDecoder;
    long long _queriesRemainingInInterval;
    unsigned short _transactionID;
    int _receivedPacketCount;
    int _receivedUnicastPacketCount;
    unsigned long long _listenerCount;
    unsigned short _mDNSPort;
    _Bool _allowIPv6;
    _Bool _scanning;
}

+ (void)setMulticastPort:(unsigned short)arg1;
+ (unsigned short)multicastPort;
+ (id)sharedInstanceAllowIPv6:(_Bool)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool scanning; // @synthesize scanning=_scanning;
- (void).cxx_destruct;
- (void)notifyDidFailToParseMDNSResponse:(int)arg1 fromIPAddress:(id)arg2 error:(id)arg3;
- (void)notifyDidReceiveResponses:(id)arg1 unicast:(_Bool)arg2;
- (void)notifyDidSendDiscoveryQueryWithPacketCount:(unsigned long long)arg1 unicastResponse:(_Bool)arg2;
- (void)notifyDidFailToStartScan;
- (void)notifyDiscoveryResumed;
- (void)notifyDiscoverySuspended;
- (void)notifyServiceInstanceRemoved:(id)arg1;
- (void)notifyServiceInstanceUpdated:(id)arg1 addedSubtypes:(id)arg2 removedSubtypes:(id)arg3;
- (void)notifyServiceInstanceAdded:(id)arg1;
- (void)udpSocket:(id)arg1 didCloseWithError:(id)arg2;
- (void)udpSocket:(id)arg1 didReceivePacket:(id)arg2 fromAddress:(id)arg3;
- (void)timerDidFire:(id)arg1;
- (void)handleNetworkReachabilityChange:(id)arg1;
- (void)removeServiceInstance:(id)arg1;
- (void)addServiceInstance:(id)arg1;
- (_Bool)updateService:(id)arg1 withResponse:(id)arg2 currentTime:(long long)arg3;
- (void)clearBrowseQueryPackets;
- (unsigned long long)validMTUFromNetworkInterface:(id)arg1;
- (void)generateBrowseQueryPackets;
- (void)updateDiscoveryState;
- (void)stopScan;
- (void)startScan;
- (void)stopTimer;
- (void)startTimer;
- (void)destroyUnicastSocket;
- (id)createUnicastSocket;
- (void)destroyMulticastSocket;
- (id)createMulticastSocket;
- (id)serviceInstancesForType:(id)arg1;
- (void)removeDiagnosticListener:(id)arg1;
- (void)addDiagnosticListener:(id)arg1 forServiceType:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 forServiceType:(id)arg2 subtypes:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)initWithNetworkReachability:(id)arg1 allowIPv6:(_Bool)arg2;
- (id)initAllowIPv6:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

