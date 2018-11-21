//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSTimer, SPTPersistentCache, SPTPersistentCacheOptions;

@interface SPTPersistentCacheGarbageCollector : NSObject
{
    SPTPersistentCache *_cache;
    NSOperationQueue *_queue;
    NSTimer *_timer;
    SPTPersistentCacheOptions *_options;
}

@property(copy, nonatomic) SPTPersistentCacheOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak SPTPersistentCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isGarbageCollectionScheduled) _Bool garbageCollectionScheduled;
- (void)unschedule;
- (void)schedule;
- (void)enqueueGarbageCollection:(id)arg1;
- (void)dealloc;
- (id)initWithCache:(id)arg1 options:(id)arg2 queue:(id)arg3;

@end

