//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACScheduler.h"

@class NSManagedObjectContext;

@interface CoreDataScheduler : RACScheduler
{
    NSManagedObjectContext *_context;
}

@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)isMainThreadContext;
- (_Bool)isOnMainThread;
- (id)setCurrentScheduler:(id)arg1;
- (id)currentSchedulerForThread;
- (_Bool)runImmediately;
- (id)after:(id)arg1 repeatingEvery:(double)arg2 withLeeway:(double)arg3 schedule:(CDUnknownBlockType)arg4;
- (id)after:(id)arg1 schedule:(CDUnknownBlockType)arg2;
- (id)schedule:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1;

@end
