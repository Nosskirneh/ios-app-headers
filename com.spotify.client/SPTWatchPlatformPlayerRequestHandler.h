//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"
#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader, SPTaskCompletionSource;
@protocol SPTExternalIntegrationPlaybackController, SPTUICompletionNotifier, SPTVolumeAPI;

@interface SPTWatchPlatformPlayerRequestHandler : NSObject <SPTExternalIntegrationPlaybackControllerObserver, SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTVolumeAPI> _volumeController;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    SPTaskCompletionSource *_awaitPlayerReadyTaskFactory;
}

@property(retain, nonatomic) SPTaskCompletionSource *awaitPlayerReadyTaskFactory; // @synthesize awaitPlayerReadyTaskFactory=_awaitPlayerReadyTaskFactory;
@property(readonly, nonatomic) __weak id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(readonly, nonatomic) id <SPTVolumeAPI> volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)handleSkipRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (void)sendCompletionResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (void)startHandlingRequests;
- (id)initWithDataLoader:(id)arg1 playbackController:(id)arg2 volumeController:(id)arg3 UICompletionNotifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

