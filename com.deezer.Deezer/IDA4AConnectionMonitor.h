//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSTimer;
@protocol IDA4AConnectionMonitorDelegate;

@interface IDA4AConnectionMonitor : NSObject
{
    _Bool _packetProcessedBeforeTimeoutExpired;
    id <IDA4AConnectionMonitorDelegate> _delegate;
    double _communicationTimeout;
    NSConditionLock *_monitoringStateCondition;
    NSTimer *_communicationTimeoutTimer;
    NSTimer *_keepAliveTimer;
}

@property(retain) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
@property _Bool packetProcessedBeforeTimeoutExpired; // @synthesize packetProcessedBeforeTimeoutExpired=_packetProcessedBeforeTimeoutExpired;
@property(retain) NSTimer *communicationTimeoutTimer; // @synthesize communicationTimeoutTimer=_communicationTimeoutTimer;
@property(retain) NSConditionLock *monitoringStateCondition; // @synthesize monitoringStateCondition=_monitoringStateCondition;
@property(readonly) double communicationTimeout; // @synthesize communicationTimeout=_communicationTimeout;
@property(readonly) __weak id <IDA4AConnectionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)handleKeepAliveTimer:(id)arg1;
- (void)handleCommunicationTimeoutTimer:(id)arg1;
- (void)processPacket:(id)arg1;
- (void)stopMonitoringWithError:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)initWithDelegate:(id)arg1 communicationTimeout:(double)arg2;
- (id)initWithDelegate:(id)arg1;

@end

