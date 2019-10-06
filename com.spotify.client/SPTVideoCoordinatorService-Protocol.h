//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol BMEventObserverFactory, BMPlaybackEventObserver, BMVideoSurfaceManager, SPTAVPlayerSource;

@protocol SPTVideoCoordinatorService <SPTService>
- (void)removeVideoPlaybackEventObserver:(id <BMPlaybackEventObserver>)arg1;
- (void)addVideoPlaybackEventObserver:(id <BMPlaybackEventObserver>)arg1;
- (void)registerPlaybackEventObserverFactoryBlock:(id <BMEventObserver> (^)(id <BMPlaybackIdentity>, id <BMPlayOptions>, id <BMPlaybackTimeObservable>))arg1;
- (void)registerPlaybackEventObserverFactory:(id <BMEventObserverFactory>)arg1;
- (id <SPTAVPlayerSource>)providePlayerSource;
- (id <BMVideoSurfaceManager>)provideSurfaceManager;
@end

