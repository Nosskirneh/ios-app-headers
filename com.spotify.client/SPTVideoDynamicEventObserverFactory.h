//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserverFactory-Protocol.h"

@class NSMutableOrderedSet, NSString;

@interface SPTVideoDynamicEventObserverFactory : NSObject <BMEventObserverFactory>
{
    NSMutableOrderedSet *_observerFactories;
}

@property(retain, nonatomic) NSMutableOrderedSet *observerFactories; // @synthesize observerFactories=_observerFactories;
- (void).cxx_destruct;
- (id)createPlaybackEventObserverForPlaybackIdentity:(id)arg1 options:(id)arg2 timeObservable:(id)arg3;
- (void)registerPlaybackEventObserverFactory:(id)arg1;
- (void)unregisterPlaybackEventObserverFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

