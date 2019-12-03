//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSCache, NSString, SPTObserverManager, SPTPlayerState;
@protocol SPTOfflineModeState, SPTPlayerFeature, SPTVideoURLAssetLoader;

@interface SPTCanvasNowPlayingContentReloader : NSObject <SPTPlayerObserver, SPTOfflineModeStateObserver>
{
    _Bool _offline;
    NSCache *_tracksToReload;
    SPTPlayerState *_currentState;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    id <SPTOfflineModeState> _offlineState;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(retain, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(retain, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSCache *tracksToReload; // @synthesize tracksToReload=_tracksToReload;
- (void).cxx_destruct;
- (_Bool)trackHasCanvasMetadata:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)reloadContentIfNeededUsingPlayerState:(id)arg1;
- (void)loaderDidProvideContentForTrack:(id)arg1;
- (void)loaderFailToProvideContentForTrack:(id)arg1;
- (_Bool)canLoadCanvasModel:(id)arg1 forTrack:(id)arg2;
- (_Bool)shouldLoadCanvasForTrack:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerFeature:(id)arg1 videoAssetLoader:(id)arg2 offlineState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
