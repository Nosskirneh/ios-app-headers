//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableSet;

@interface WazeTransport : NSObject
{
    NSData *_ivData;
    NSData *_keyData;
    id <WazeTransportDelegate> _delegate;
    _Bool _monitoring;
    int _local_port;
    int _server_port;
    _Bool _isConnected;
    NSMutableSet *_readSources;
    NSMutableSet *_listenSources;
    NSMutableSet *_writeSources;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)monitorChanges;
- (void)addSource:(id)arg1 toSet:(id)arg2;
- (void)removeSource:(id)arg1 fromSet:(id)arg2;
- (void)handleReceivedData:(id)arg1;
- (void)setConnected:(_Bool)arg1 wazeVersion:(id)arg2;
- (void)scheduleConnectionMonitor;
- (void)cancelConnectionMonitorRequest;
- (id)decryptMessage:(id)arg1;
- (id)encryptMessage:(id)arg1;
- (void)terminate;
- (_Bool)sendCustomInfo:(id)arg1;
- (_Bool)sendReturnRequest;
- (_Bool)stopNavigation;
- (_Bool)setAddressQuery:(id)arg1;
- (_Bool)setAddressQuery:(id)arg1 refLocation:(id)arg2;
- (_Bool)setLocation:(id)arg1;
- (void)sendDict:(id)arg1;
- (void)startWithAddressQuery:(id)arg1 delegate:(id)arg2 returnURL:(id)arg3;
- (void)startWithAddressQuery:(id)arg1 refLocation:(id)arg2 delegate:(id)arg3 returnURL:(id)arg4;
- (void)startWithLocation:(id)arg1 delegate:(id)arg2 returnURL:(id)arg3;
- (void)startWazeWithLocation:(id)arg1 orAddressQuery:(id)arg2 refLocation:(id)arg3 delegate:(id)arg4 returnURL:(id)arg5;
- (id)urlEncode:(id)arg1;
- (id)getRandomData:(unsigned long long)arg1;
- (void)log:(id)arg1;
- (id)getDocPath;
- (id)init;

@end

