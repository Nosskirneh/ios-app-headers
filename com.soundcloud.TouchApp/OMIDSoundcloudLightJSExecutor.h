//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OMIDSoundcloudJSExecutor-Protocol.h"
#import "OMIDSoundcloudJSInvoker-Protocol.h"

@class JSContext, NSString, OMIDSoundcloudJSNetworkBridge, OMIDSoundcloudJSTimer;
@protocol OS_dispatch_queue;

@interface OMIDSoundcloudLightJSExecutor : NSObject <OMIDSoundcloudJSExecutor, OMIDSoundcloudJSInvoker>
{
    JSContext *_jsContext;
    OMIDSoundcloudJSTimer *_timer;
    OMIDSoundcloudJSNetworkBridge *_networkBridge;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)lightJSExecutor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) OMIDSoundcloudJSNetworkBridge *networkBridge; // @synthesize networkBridge=_networkBridge;
@property(readonly, nonatomic) OMIDSoundcloudJSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (void)invokeScript:(id)arg1;
- (void)invokeCallback:(id)arg1 argument:(id)arg2;
- (void)invokeCallback:(id)arg1;
- (void)injectJavaScriptFromString:(id)arg1;
@property(readonly, nonatomic) id jsEnvironment;
@property(readonly, nonatomic) _Bool supportBackgroundThread;
- (id)initWithTimer:(id)arg1 networkBridge:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

