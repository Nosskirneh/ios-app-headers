//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface UVMulticastDelegate : NSObject
{
    NSPointerArray *delegates;
}

- (void).cxx_destruct;
- (unsigned long long)delegateCount;
- (id)allDelegates;
- (_Bool)anyRespondsToSelector:(SEL)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

@end

