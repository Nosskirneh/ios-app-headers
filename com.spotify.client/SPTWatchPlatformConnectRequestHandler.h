//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTGaiaDeviceManager, SPTWatchConnectivityDataLoader;

@interface SPTWatchPlatformConnectRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    SPTGaiaDeviceManager *_gaiaDeviceManager;
}

@property(readonly, nonatomic) __weak SPTGaiaDeviceManager *gaiaDeviceManager; // @synthesize gaiaDeviceManager=_gaiaDeviceManager;
@property(readonly, nonatomic) __weak SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)handleActivateDeviceRequest:(id)arg1;
- (void)handleDevicesRequest:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)sendResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithDataLoader:(id)arg1 gaiaDeviceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

