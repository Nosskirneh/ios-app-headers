//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HJCircularBuffer : NSObject
{
    NSMutableArray *buffer;
    int nextIndex;
}

+ (void)test;
+ (id)bufferWithCapacity:(int)arg1;
- (id)allObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(long long)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)findObject:(id)arg1;
- (long long)findIndexOfObject:(id)arg1;
- (id)swapObject:(id)arg1 atIndex:(long long)arg2;
- (id)addObjectBuffer:(id)arg1;
- (long long)length;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1;

@end

