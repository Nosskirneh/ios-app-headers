//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInstrumentationRemotePlayingHandler.h"

@class NSString, SPTObserverManager;

@interface SPTInstrumentationRemotePlayingHandlerImplementation : NSObject <SPTInstrumentationRemotePlayingHandler>
{
    _Bool _playingRemotely;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) _Bool playingRemotely; // @synthesize playingRemotely=_playingRemotely;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)remotePlayingStateChanged:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
