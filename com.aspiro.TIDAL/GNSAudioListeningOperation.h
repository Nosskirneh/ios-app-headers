//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GNSModemListener-Protocol.h"

@class GNSAudioRecorder, GNSBroadcasterListenerParams, GNSTokenListenerParams;
@protocol OS_dispatch_queue;

@interface GNSAudioListeningOperation : NSObject <GNSModemListener>
{
    GNSAudioRecorder *_dsssRecorder;
    GNSAudioRecorder *_dtmfRecorder;
    GNSTokenListenerParams *_tokenListenerParams;
    CDUnknownBlockType _tokensReceivedHandler;
    GNSBroadcasterListenerParams *_broadcasterListenerParams;
    CDUnknownBlockType _onBroadcasterFound;
    CDUnknownBlockType _onBroadcasterNotFound;
    NSObject<OS_dispatch_queue> *_recorderQueue;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recorderQueue; // @synthesize recorderQueue=_recorderQueue;
@property(copy, nonatomic) CDUnknownBlockType onBroadcasterNotFound; // @synthesize onBroadcasterNotFound=_onBroadcasterNotFound;
@property(copy, nonatomic) CDUnknownBlockType onBroadcasterFound; // @synthesize onBroadcasterFound=_onBroadcasterFound;
@property(retain, nonatomic) GNSBroadcasterListenerParams *broadcasterListenerParams; // @synthesize broadcasterListenerParams=_broadcasterListenerParams;
@property(copy, nonatomic) CDUnknownBlockType tokensReceivedHandler; // @synthesize tokensReceivedHandler=_tokensReceivedHandler;
@property(retain, nonatomic) GNSTokenListenerParams *tokenListenerParams; // @synthesize tokenListenerParams=_tokenListenerParams;
@property(retain, nonatomic) GNSAudioRecorder *dtmfRecorder; // @synthesize dtmfRecorder=_dtmfRecorder;
@property(retain, nonatomic) GNSAudioRecorder *dsssRecorder; // @synthesize dsssRecorder=_dsssRecorder;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithParams:(id)arg1 tokensReceivedHandler:(CDUnknownBlockType)arg2 broadcasterListenerParams:(id)arg3 onBroadcasterFound:(CDUnknownBlockType)arg4 onBroadcasterNotFound:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6;

@end

