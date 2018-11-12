//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSessionPortDescription, AVSampleBufferAudioRenderer, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface SPTAudioRendererObserver : NSObject
{
    CDUnknownBlockType _statusChangeHandler;
    CDUnknownBlockType _automaticFlushHandler;
    CDUnknownBlockType _routePortChangeHandler;
    AVSampleBufferAudioRenderer *_audioRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak AVSampleBufferAudioRenderer *audioRenderer; // @synthesize audioRenderer=_audioRenderer;
@property(copy, nonatomic) CDUnknownBlockType routePortChangeHandler; // @synthesize routePortChangeHandler=_routePortChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType automaticFlushHandler; // @synthesize automaticFlushHandler=_automaticFlushHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler=_statusChangeHandler;
- (void).cxx_destruct;
- (void)handleRouteChangeNotifcation:(id)arg1;
- (void)handleAutomaticFlushNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
@property(readonly, nonatomic) AVAudioSessionPortDescription *currentRoutePortDescription;
- (id)initWithAudioRenderer:(id)arg1 queue:(id)arg2;

@end

