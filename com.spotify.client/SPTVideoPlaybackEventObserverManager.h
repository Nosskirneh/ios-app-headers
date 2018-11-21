//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackEventNotifierProxyHolder-Protocol.h"

@class NSMutableArray, NSString, SPTObserverManager;
@protocol OS_dispatch_queue;

@interface SPTVideoPlaybackEventObserverManager : NSObject <SPTVideoPlaybackEventNotifierProxyHolder>
{
    NSMutableArray *_observers;
    SPTObserverManager *_internalObserverManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) SPTObserverManager *internalObserverManager; // @synthesize internalObserverManager=_internalObserverManager;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)notifierProxy;
- (void)addObserver:(id)arg1;
- (id)initWithFactories:(id)arg1 playbackIdentity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

