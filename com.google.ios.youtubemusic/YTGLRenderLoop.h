//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class CADisplayLink, NSString, NSThread, YTSystemNotifications;
@protocol OS_dispatch_queue, YTGLRenderTarget;

@interface YTGLRenderLoop : NSObject <YTSystemNotificationsObserver>
{
    NSObject<OS_dispatch_queue> *_renderThreadControlQueue;
    _Bool _renderThreadAvailable;
    YTSystemNotifications *_systemNotifications;
    _Bool _applicationPaused;
    _Bool _displayLinkShouldBePaused;
    NSThread *_renderThread;
    id <YTGLRenderTarget> _renderTarget;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)displayLinkCallbackFromRenderThread:(id)arg1;
- (void)shutDownWithBeforeShutDownBlockFromRenderThread:(CDUnknownBlockType)arg1;
- (void)setRenderingPausedFromRenderThread:(id)arg1;
- (void)renderThreadMain;
- (void)setRenderingPausedFromMainThread:(_Bool)arg1 waitUntilDone:(_Bool)arg2;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (double)displayDuration;
- (_Bool)currentThreadIsRenderThread;
- (void)performBlockInRenderThread:(CDUnknownBlockType)arg1;
- (void)shutDownWithBeforeShutDownBlock:(CDUnknownBlockType)arg1;
- (void)unpauseRenderingWhenInForeground;
- (void)pauseRendering;
- (id)initWithRenderTarget:(id)arg1 systemNotifications:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

