//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINRemoteLock : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
}

- (void)unlock;
- (void)lock;
- (void)lockWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 lockType:(unsigned long long)arg2;
- (id)init;

@end

