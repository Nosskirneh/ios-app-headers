//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKMDNSClientDiagnosticListener-Protocol.h"
#import "GCKMDNSClientListener-Protocol.h"

@class GCKMDNSDiscoveryOptions, NSSet, NSString;
@protocol GCKMDNSServiceBrowserDelegate;

@interface GCKMDNSServiceBrowser : NSObject <GCKMDNSClientListener, GCKMDNSClientDiagnosticListener>
{
    NSString *_serviceType;
    NSSet *_subtypes;
    GCKMDNSDiscoveryOptions *_discoveryOptions;
    _Bool _searchRequested;
    id <GCKMDNSServiceBrowserDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKMDNSServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MDNSClient:(id)arg1 didFailToParseResponse:(int)arg2 fromIPAddress:(id)arg3 error:(id)arg4;
- (void)MDNSClient:(id)arg1 didReceiveResponse:(id)arg2 unicast:(_Bool)arg3;
- (void)MDNSClient:(id)arg1 didSendDiscoveryQueryWithServiceType:(id)arg2 subtypes:(id)arg3 unicastResponse:(_Bool)arg4 transactionID:(unsigned short)arg5 packetCount:(unsigned long long)arg6;
- (void)MDNSClient:(id)arg1 didRemoveServiceInstance:(id)arg2;
- (void)MDNSClient:(id)arg1 didUpdateServiceInstance:(id)arg2;
- (void)MDNSClient:(id)arg1 didAddServiceInstance:(id)arg2;
- (void)MDNSClientDidFailToStartScan:(id)arg1;
- (void)MDNSClientDidResumeDiscovery:(id)arg1;
- (void)MDNSClientDidSuspendDiscovery:(id)arg1;
@property(readonly, nonatomic) _Bool searching;
- (id)serviceInstances;
- (void)stopSearch;
- (_Bool)startSearchWithSubtypes:(id)arg1;
- (_Bool)startSearch;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1 sendUnicastQueries:(_Bool)arg2;
- (id)initWithServiceType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

