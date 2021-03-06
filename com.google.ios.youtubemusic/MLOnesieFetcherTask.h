//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMDataLoadTaskDelegate-Protocol.h"
#import "YTFetcherTask-Protocol.h"

@class GIMMe, MLHAMDataLoaderProvider, MLOnesieController, MLOnesieFetcherService, MLOnesieResponseParser, MLQOEPingController, NSMutableURLRequest, NSString;
@protocol HAMClock, HAMDataLoadTask, HAMDataLoader, MLNetworkRequestObserver, YTLatencyTickLoggerProtocol;

@interface MLOnesieFetcherTask : NSObject <HAMDataLoadTaskDelegate, YTFetcherTask>
{
    MLOnesieController *_controller;
    MLOnesieResponseParser *_parser;
    id <HAMDataLoader> _dataLoader;
    MLHAMDataLoaderProvider *_dataLoaderProvider;
    id <HAMDataLoadTask> _dataLoadTask;
    id <HAMClock> _clock;
    id <MLNetworkRequestObserver> _networkRequestObserver;
    MLOnesieFetcherService *_fetcherService;
    id <YTLatencyTickLoggerProtocol> _latencyLogger;
    MLQOEPingController *_QOEController;
    long long _requestNumber;
    double _dataLoadTaskStartTime;
    long long _totalBandwidthDataBytes;
    _Bool _started;
    _Bool _cancelled;
    NSMutableURLRequest *_request;
    _Bool _firstByteEventLogged;
    _Bool _firstHundredKilobytesEventLogged;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)startDataLoadTask;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resume;
- (void)cancel;
- (id)initWithPlayerRequest:(id)arg1 context:(id)arg2 onesieHotConfig:(id)arg3 authorization:(id)arg4 passURLResponseToCompletionBlock:(_Bool)arg5 cryptor:(id)arg6 playerCompletionBlock:(CDUnknownBlockType)arg7 fallbackTaskBlock:(CDUnknownBlockType)arg8 fetcherService:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

