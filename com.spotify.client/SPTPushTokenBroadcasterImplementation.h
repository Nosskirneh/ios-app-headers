//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPushTokenBroadcaster-Protocol.h"

@class NSData, NSString, SPTObserverManager;

@interface SPTPushTokenBroadcasterImplementation : NSObject <SPTPushTokenBroadcaster>
{
    NSData *_currentToken;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(copy, nonatomic) NSData *currentToken; // @synthesize currentToken=_currentToken;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)trackEvent:(id)arg1 info:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

