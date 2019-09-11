//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKNHTTPRequestDelegate-Protocol.h"

@class GCKDBNetworkInfo, GCKDatabase, GCKNHTTPClient, GCKNNetworkReachability, NSDictionary, NSMutableSet, NSString, NSTimer, NSURL;

@interface GCKCloudDiscoveryService : NSObject <GCKNHTTPRequestDelegate>
{
    GCKNNetworkReachability *_networkReachability;
    GCKDatabase *_database;
    GCKDBNetworkInfo *_currentNetworkInfo;
    GCKNHTTPClient *_httpClient;
    NSString *_lnidW;
    NSURL *_cloudDiscoveryConnectActionURL;
    NSDictionary *_cloudDiscoveryServiceParams;
    NSTimer *_downloadTimer;
    NSMutableSet *_devicesAttemptedToLink;
    int _ipAddressHighBytes;
}

- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2;
- (void)updateNetworkReachability;
- (void)updateCloudDiscoveryServiceDevices:(id)arg1;
- (void)addOrUpdateDatabase:(id)arg1;
- (_Bool)processResponse:(id)arg1;
- (void)queryDevicesOnNetwork;
- (void)queryDevicesOnNetworkWithExistingDevice:(id)arg1;
- (id)initWithCastOptions:(id)arg1 networkReachability:(id)arg2 database:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

