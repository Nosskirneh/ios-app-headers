//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSDKCoreGMSGHandlerDelegate-Protocol.h"
#import "GADSDKCoreWebViewNotification-Protocol.h"

@class GADSDKCoreWebView, GADWebViewConfiguration, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GADSDKCoreController : NSObject <GADSDKCoreWebViewNotification, GADSDKCoreGMSGHandlerDelegate>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_pendingActiveWebViewLoadDelegates;
    NSMutableArray *_activeViewSDKCoreWebViews;
    unsigned long long _lastWebViewRefreshTimestamp;
    unsigned long long _requestID;
    unsigned long long _activeViewUnloadCacheMaxSize;
    _Bool _activeViewRequestedSDKCoreReload;
    GADSDKCoreWebView *_activeViewSDKCoreWebView;
    _Bool _useNewWebViewsForActiveViewProcessing;
    double _activeViewSamplingInterval;
    _Bool _SDKCoreUpdateHandled;
    NSMutableDictionary *_pendingJavaScriptBlocks;
    NSMutableDictionary *_pendingJavaScriptBlockExecutionCompletionHandlers;
    NSMutableDictionary *_pendingJavaScriptCompletionHandlers;
    NSMutableDictionary *_pendingBuildAdURLDelegates;
    double _SDKCoreJavaScriptCompletionBlockTimeoutInterval;
    _Bool _hasReportedSDKCoreStateAtLeastOnce;
    _Bool _refreshPaused;
    NSString *_SDKCoreWebViewExperimentID;
    GADWebViewConfiguration *_webViewConfiguration;
    NSArray *_activeViewMonitorRefreshIntervals;
    GADSDKCoreWebView *_activeSDKCoreWebView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GADSDKCoreWebView *activeSDKCoreWebView; // @synthesize activeSDKCoreWebView=_activeSDKCoreWebView;
@property(copy) NSArray *activeViewMonitorRefreshIntervals; // @synthesize activeViewMonitorRefreshIntervals=_activeViewMonitorRefreshIntervals;
- (void).cxx_destruct;
- (void)SDKCoreGMSGHandlerDidReceiveResumeSDKCoreRefreshAction:(id)arg1;
- (void)SDKCoreGMSGHandlerDidReceivePauseSDKCoreRefreshAction:(id)arg1;
- (void)SDKCoreGMSGHandler:(id)arg1 didReceiveResultActionWithRequestID:(id)arg2 arguments:(id)arg3;
- (void)SDKCoreGMSGHandlerDidReceiveSDKCoreUpdateNotification:(id)arg1;
- (void)SDKCoreGMSGHandler:(id)arg1 didReceiveInvalidAdWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 loadAdWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 loadAdURLWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 didLoadSDKConstants:(id)arg2;
- (void)handleSDKCoreUpdate;
- (void)executePendingJavaScriptBlocks;
- (id)nextRequestID;
@property double SDKCoreJavaScriptCompletionBlockTimeoutInterval;
@property double activeViewSamplingInterval;
- (void)observeSDKCoreWebViewForSDKCoreLoadRequestCompleted;
- (void)didFinishLoadingSDKCoreInSDKCoreWebView:(id)arg1;
- (void)asynchronouslyRequestURLForDelegate:(id)arg1;
- (id)adRequestParameterJSONFromParameters:(id)arg1;
- (void)refreshActiveWebViewSDKCore;
- (void)attemptToRefreshActiveWebViewSDKCore;
- (void)postJavaScriptNotification:(id)arg1 userInfo:(id)arg2;
- (void)executeExportedJavaScriptCommand:(id)arg1 parameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)executeJavaScriptFromBlockWhenReady:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)buildAdURL:(id)arg1;
- (void)finishedUsingSDKCoreWebViewForActiveViewProcessing:(id)arg1;
- (id)SDKCoreWebViewForActiveViewProcessing;
- (void)dealloc;
- (id)init;
- (void)setSDKCoreWebViewExperiment;
- (void)removeFinishedActiveViewWebViews;
- (void)cacheRunningActiveViewWebView:(id)arg1;

@end

