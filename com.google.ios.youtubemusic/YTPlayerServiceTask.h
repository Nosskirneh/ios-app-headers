//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPCAsyncRequest-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"

@class GIMMe, MLQOEPingController, NSString, YTDispatchTimer, YTIPlayerServiceRetryConfig, YTInnerTubeRequest, YTInnerTubeRequestor, YTReachabilityController, YTRetryInterval;
@protocol YTApiaryParser, YTStopwatch;

@interface YTPlayerServiceTask : NSObject <YTReachabilityObserver, GPCAsyncRequest>
{
    YTInnerTubeRequest *_request;
    YTIPlayerServiceRetryConfig *_config;
    CDUnknownBlockType _completionBlock;
    YTInnerTubeRequestor *_requestor;
    id <YTApiaryParser> _resourceParser;
    MLQOEPingController *_QOEController;
    id <YTStopwatch> _stopwatch;
    YTRetryInterval *_retryInterval;
    YTReachabilityController *_reachabilityController;
    int _remainingRetriesOnReachabilityChange;
    _Bool _cancelled;
    YTDispatchTimer *_retryTimer;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)retryOrFailWithError:(id)arg1;
- (_Bool)maybeScheduleRetryForError:(id)arg1;
- (_Bool)canRetry;
- (void)sendRequest;
- (void)reachabilityDidChange;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 config:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 requestor:(id)arg4 resourceParser:(id)arg5 QOEController:(id)arg6 stopwatch:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

