//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (MAKVONotification)
- (void)stopObserving:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3;
- (void)removeObserver:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3;
- (void)stopObserving:(id)arg1 keyPath:(id)arg2;
- (void)removeObserver:(id)arg1 keyPath:(id)arg2;
- (void)stopObservingAllTargets;
- (void)removeAllObservers;
- (id)observeTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)addObserver:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)addObservationKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)observeTarget:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 options:(unsigned long long)arg5;
- (id)addObserver:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 options:(unsigned long long)arg5;
@end

