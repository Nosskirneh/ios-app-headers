//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastDeviceScanner.h"

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSSet, NSString, NSTimer;

@interface GCKCastDeviceBonjourScanner : GCKCastDeviceScanner <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    double _deviceTimeoutInterval;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServiceSubtypeBrowsers;
    NSSet *_subtypes;
    NSMutableDictionary *_entries;
    NSTimer *_intervalTimer;
    NSTimer *_rescanTimer;
}

- (void).cxx_destruct;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)intervalTimerDidFire:(id)arg1;
- (void)rescanTimerDidFire:(id)arg1;
- (void)updateEntryForService:(id)arg1;
- (id)findEntryForDeviceID:(id)arg1 otherThanEntry:(id)arg2;
- (void)startResolveForEntry:(id)arg1;
- (void)stopNetServiceScan;
- (void)startNetServiceScan;
- (void)clearCache;
- (void)stopScan;
- (_Bool)startScanWithSubtypes:(id)arg1;
- (id)initWithDeviceTimeoutInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

