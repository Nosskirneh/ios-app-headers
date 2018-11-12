//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SimplePingDelegate-Protocol.h"

@class NSDate, NSString, NSTimer, SimplePing;
@protocol DZRTracerouteDelegate;

@interface DZRTraceroute : NSObject <SimplePingDelegate>
{
    int _currentTTL;
    id <DZRTracerouteDelegate> _delegate;
    SimplePing *_ping;
    NSDate *_startDate;
    NSTimer *_sendTimer;
    long long _sendSequence;
    long long _packetCountPerTTL;
    NSString *_ipAddress;
    NSString *_icmpSrcAddress;
    NSString *_host;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *icmpSrcAddress; // @synthesize icmpSrcAddress=_icmpSrcAddress;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(nonatomic) long long packetCountPerTTL; // @synthesize packetCountPerTTL=_packetCountPerTTL;
@property(nonatomic) int currentTTL; // @synthesize currentTTL=_currentTTL;
@property(nonatomic) long long sendSequence; // @synthesize sendSequence=_sendSequence;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) SimplePing *ping; // @synthesize ping=_ping;
@property(nonatomic) __weak id <DZRTracerouteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (id)displayAddressForAddress:(id)arg1;
- (void)dealloc;
- (_Bool)sendPing;
- (void)checkSingleRoundTimeout;
- (void)invalidSendTimer;
- (void)traceWithTTL:(int)arg1;
- (void)prepareForReuse;
- (void)stop;
- (void)start:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
