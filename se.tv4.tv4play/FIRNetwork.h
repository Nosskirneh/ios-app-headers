//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRNetworkLoggerDelegate-Protocol.h"
#import "FIRReachabilityDelegate-Protocol.h"

@class FIRMutableDictionary, FIRReachabilityChecker, NSString;
@protocol FIRNetworkLoggerDelegate, FIRNetworkReachabilityDelegate;

@interface FIRNetwork : NSObject <FIRReachabilityDelegate, FIRNetworkLoggerDelegate>
{
    FIRReachabilityChecker *_reachability;
    FIRMutableDictionary *_requests;
    _Bool _networkConnected;
    _Bool _isDebugModeEnabled;
    id <FIRNetworkReachabilityDelegate> _reachabilityDelegate;
    id <FIRNetworkLoggerDelegate> _loggerDelegate;
    double _timeoutInterval;
}

+ (void)handleEventsForBackgroundURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) _Bool isDebugModeEnabled; // @synthesize isDebugModeEnabled=_isDebugModeEnabled;
@property(nonatomic) __weak id <FIRNetworkLoggerDelegate> loggerDelegate; // @synthesize loggerDelegate=_loggerDelegate;
@property(nonatomic) __weak id <FIRNetworkReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected; // @synthesize networkConnected=_networkConnected;
- (void).cxx_destruct;
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 contexts:(id)arg4;
- (void)handleErrorWithCode:(long long)arg1 queue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)reachability:(id)arg1 statusChanged:(int)arg2;
@property(readonly, nonatomic, getter=hasUploadInProgress) _Bool uploadInProgress;
- (id)getURL:(id)arg1 headers:(id)arg2 queue:(id)arg3 usingBackgroundSession:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)postURL:(id)arg1 payload:(id)arg2 queue:(id)arg3 usingBackgroundSession:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithReachabilityHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
