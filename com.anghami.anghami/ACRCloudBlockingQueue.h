//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACRCloudBlockingQueue : NSObject
{
    NSMutableArray *_queue;
    NSCondition *_lock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSCondition *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;
- (void)clear;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end

