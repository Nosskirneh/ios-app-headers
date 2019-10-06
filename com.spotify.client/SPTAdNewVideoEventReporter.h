//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserver-Protocol.h"
#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString;
@protocol BMPlaybackIdentity, BMPlaybackTimeObservable, OS_dispatch_queue, SPTAdsBaseCosmosBridge, SPTAdsBaseRegistry, SPTResolver;

@interface SPTAdNewVideoEventReporter : NSObject <SPTAdsBaseRegistryObserver, BMEventObserver>
{
    _Bool _firedOnThreshold;
    _Bool _shouldFireImpressionOnStart;
    _Bool _started;
    _Bool _ended;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTResolver> _resolver;
    id <SPTAdsBaseRegistry> _registry;
    double _trackDuration;
    unsigned long long _quartilesPlayed;
    id <BMPlaybackIdentity> _currentIdentity;
    id <BMPlaybackTimeObservable> _timeObservable;
    double _currentPosition;
}

+ (_Bool)isAd:(id)arg1;
@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) double currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) __weak id <BMPlaybackTimeObservable> timeObservable; // @synthesize timeObservable=_timeObservable;
@property(retain, nonatomic) id <BMPlaybackIdentity> currentIdentity; // @synthesize currentIdentity=_currentIdentity;
@property(nonatomic) _Bool shouldFireImpressionOnStart; // @synthesize shouldFireImpressionOnStart=_shouldFireImpressionOnStart;
@property(nonatomic) unsigned long long quartilesPlayed; // @synthesize quartilesPlayed=_quartilesPlayed;
@property(nonatomic) double trackDuration; // @synthesize trackDuration=_trackDuration;
@property(nonatomic) _Bool firedOnThreshold; // @synthesize firedOnThreshold=_firedOnThreshold;
@property(readonly, nonatomic) id <SPTAdsBaseRegistry> registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)logSkipEventAtPosition:(double)arg1;
- (void)logCompleteEventAtPosition:(double)arg1;
- (void)logErrorAndTerminatedEventAtPosition:(double)arg1;
- (void)processVideoPlayerEvent:(id)arg1;
- (void)subscribeToVideoPlayerEvents;
- (id)eventData;
- (void)logImpressionAtPosition:(double)arg1;
- (void)logEvent:(id)arg1 position:(double)arg2;
- (_Bool)shouldFireImpressionOnEnd;
- (_Bool)shouldFireImpressionOnThreshold;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)didEndPlaybackWithReason:(long long)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didChangeDuration:(double)arg1 timestamp:(double)arg2;
- (void)didBecomeReadyAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didCreatePlaybackInBackground:(_Bool)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (id)initWithCosmosBridge:(id)arg1 registry:(id)arg2 resolver:(id)arg3 identity:(id)arg4 timeObservable:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

