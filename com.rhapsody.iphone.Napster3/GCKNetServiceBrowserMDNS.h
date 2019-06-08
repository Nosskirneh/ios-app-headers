//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKNetServiceBrowser.h"

#import "GCKMDNSServiceBrowserDelegate-Protocol.h"

@class GCKMDNSServiceBrowser, NSMutableDictionary, NSString;

@interface GCKNetServiceBrowserMDNS : GCKNetServiceBrowser <GCKMDNSServiceBrowserDelegate>
{
    GCKMDNSServiceBrowser *_browser;
    NSMutableDictionary *_serviceMap;
}

- (void).cxx_destruct;
- (void)MDNSServiceBrowser:(id)arg1 didStopSearchWithError:(id)arg2;
- (void)MDNSServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)MDNSServiceBrowser:(id)arg1 didUpdateService:(id)arg2;
- (void)MDNSServiceBrowser:(id)arg1 didFindService:(id)arg2;
- (void)stopSearch;
- (_Bool)startSearchWithSubtypes:(id)arg1;
- (_Bool)startSearch;
- (id)initWithServiceType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

