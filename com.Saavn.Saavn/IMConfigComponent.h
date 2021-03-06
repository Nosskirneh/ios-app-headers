//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMConfigNetworkDelegate-Protocol.h"

@class IMConfigDao, IMConfigNetworkInterface, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IMConfigComponent : NSObject <IMConfigNetworkDelegate>
{
    _Bool _isAppInForeground;
    int _noOfConfigFetchInProgress;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_requestedConfigs;
    NSMutableDictionary *_registeredListeners;
    IMConfigNetworkInterface *_configNetworkInterface;
    IMConfigDao *_configDao;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMConfigDao *configDao; // @synthesize configDao=_configDao;
@property(nonatomic) _Bool isAppInForeground; // @synthesize isAppInForeground=_isAppInForeground;
@property int noOfConfigFetchInProgress; // @synthesize noOfConfigFetchInProgress=_noOfConfigFetchInProgress;
@property(retain, nonatomic) IMConfigNetworkInterface *configNetworkInterface; // @synthesize configNetworkInterface=_configNetworkInterface;
@property(retain, nonatomic) NSMutableDictionary *registeredListeners; // @synthesize registeredListeners=_registeredListeners;
@property(retain, nonatomic) NSMutableDictionary *requestedConfigs; // @synthesize requestedConfigs=_requestedConfigs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)cancelTimer;
- (id)getFromRegisteredListenersForConfigType:(id)arg1;
- (void)removeFromRegisteredListenersForConfigType:(id)arg1;
- (void)addToRegisteredListeners:(id)arg1 forConfigType:(id)arg2;
- (_Bool)isConfigPresentInConfigRequested:(id)arg1;
- (_Bool)countOfRequestedConfigs;
- (void)removeFromRequestedConfigs:(id)arg1;
- (id)getFromRequestedConfigs:(id)arg1;
- (void)addToRequestedConfigs:(id)arg1;
- (void)configResponseReceived:(id)arg1;
- (void)fetchConfigFromNetwork;
- (_Bool)configBatchContainsRootConfig:(id)arg1;
- (id)createConfigBatch;
- (void)fetchConfigs:(id)arg1;
- (_Bool)isConfigExpired:(double)arg1 expiry:(double)arg2;
- (void)registerForConfig:(id)arg1 delegate:(id)arg2;
- (void)getConfig:(id)arg1 delegate:(id)arg2;
- (void)stop;
- (void)start;
- (id)init;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

