//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, Protocol;

@interface SPTObserverManager : NSObject
{
    NSHashTable *_observers;
    Protocol *_protocol;
}

+ (id)observerManagerWithProtocol:(id)arg1;
+ (id)observerManagerWithProtocol:(id)arg1 onQueue:(id)arg2;
@property(nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)notifierProxyOnQueue:(id)arg1;
- (id)notifierProxy;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long observerCount;
- (id)initWithProtocol:(id)arg1;

@end

