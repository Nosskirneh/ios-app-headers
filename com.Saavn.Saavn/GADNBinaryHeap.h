//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADNBinaryHeap : NSObject
{
    struct __CFBinaryHeap *_heap;
}

- (id)sortedObjects;
- (id)removedMinimum;
- (id)minimum;
@property(readonly, nonatomic) long long count;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectToHeap:(id)arg1;
- (void)dealloc;
- (id)initWithComparator:(CDUnknownFunctionPointerType)arg1;

@end

