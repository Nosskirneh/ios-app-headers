//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NetworkRequestDelegate-Protocol.h"
#import "SSDPScannerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, SSDPScanner;

@interface SonosDeviceScanner : NSObject <SSDPScannerDelegate, NetworkRequestDelegate>
{
    NSMutableArray *_records;
    NSMutableArray *_pendingRecords;
    NSMutableArray *_listeners;
    NSTimer *_expiredRecordTimer;
    SSDPScanner *_ssdpScanner;
    _Bool _scanning;
    NSString *_userAgent;
}

@property(nonatomic) _Bool scanning; // @synthesize scanning=_scanning;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)networkRequest:(id)arg1 didFailWithError:(id)arg2;
- (id)findRecordForNetworkRequest:(id)arg1;
- (void)networkRequestDidComplete:(id)arg1;
- (void)deviceOffline:(id)arg1;
- (void)deviceOnline:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)completeDeviceRecord:(id)arg1;
- (_Bool)removeRecordForDeviceID:(id)arg1;
- (_Bool)addOrUpdateRecordFor:(id)arg1 atLocation:(id)arg2 groupCode:(id)arg3 groupID:(id)arg4 groupName:(id)arg5 webSocketURL:(id)arg6;
- (void)expireRecords;
- (void)didReceiveScanResponse:(id)arg1;
@property(readonly, nonatomic) _Bool hasDiscoveredDevices;
@property(readonly, copy, nonatomic) NSArray *devices;
- (void)stopScan;
- (void)startScan;
- (id)initWithUserAgent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

