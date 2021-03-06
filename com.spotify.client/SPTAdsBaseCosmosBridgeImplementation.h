//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseCosmosBridge-Protocol.h"

@class NSOperationQueue, NSString;
@protocol SPTResolver;

@interface SPTAdsBaseCosmosBridgeImplementation : NSObject <SPTAdsBaseCosmosBridge>
{
    _Bool _ready;
    id <SPTResolver> _resolver;
    NSOperationQueue *_onReadyQueue;
}

@property(readonly, nonatomic) NSOperationQueue *onReadyQueue; // @synthesize onReadyQueue=_onReadyQueue;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(readonly, nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)sendEventRequest:(id)arg1;
- (void)logCollapseVideoAd:(id)arg1 atPlaybackPosition:(double)arg2;
- (void)logExpandVideoAd:(id)arg1 atPlaybackPosition:(double)arg2;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2 playbackPosition:(double)arg3 eventData:(id)arg4;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2 eventData:(id)arg3;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2;
- (void)setRewardTime:(double)arg1 sponsorID:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)getRewardTime:(CDUnknownBlockType)arg1;
- (void)postIntent:(id)arg1 slotName:(id)arg2 targeting:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)overrideSlot:(id)arg1 enabled:(_Bool)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)clearSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)triggerSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)nextTrackSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)nextContextSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)fetchSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)createSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)del:(id)arg1 endpoint:(id)arg2 field:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)del:(id)arg1 field:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)put:(id)arg1 endpoint:(id)arg2 body:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)put:(id)arg1 endpoint:(id)arg2 field:(id)arg3 value:(id)arg4 onResponse:(CDUnknownBlockType)arg5;
- (void)put:(id)arg1 field:(id)arg2 value:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 endpoint:(id)arg2 body:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 body:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)sub:(id)arg1 endpoint:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)sub:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)get:(id)arg1 endpoint:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)get:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)performOnReady:(CDUnknownBlockType)arg1;
- (void)requestAdEndpointWithEndpointDomain:(id)arg1 endpoint:(id)arg2 action:(id)arg3 body:(id)arg4 headers:(id)arg5 priority:(_Bool)arg6 multipleResponse:(_Bool)arg7 responseBlock:(CDUnknownBlockType)arg8;
- (void)requestAdEndpoint:(id)arg1 withAction:(id)arg2 body:(id)arg3 headers:(id)arg4 priority:(_Bool)arg5 multipleResponse:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7;
- (void)requestAdEndpointWithEndpointDomain:(id)arg1 endpoint:(id)arg2 action:(id)arg3 body:(id)arg4 headers:(id)arg5 multipleResponse:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7;
- (void)requestAdEndpoint:(id)arg1 withAction:(id)arg2 body:(id)arg3 headers:(id)arg4 multipleResponse:(_Bool)arg5 responseBlock:(CDUnknownBlockType)arg6;
- (void)readyWithResolver:(id)arg1;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

