//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAKVONotificationCenter : NSObject
{
}

+ (id)defaultCenter;
+ (void)initialize;
- (void)_swizzleObjectClassIfNeeded:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4;
- (id)addObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned long long)arg6;
- (id)addObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;

@end
