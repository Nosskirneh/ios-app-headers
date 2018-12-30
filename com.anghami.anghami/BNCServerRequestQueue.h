//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BNCServerRequestQueue : NSObject
{
    NSMutableArray *_queue;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_source> *_persistTimer;
}

+ (id)getInstance;
+ (void)initialize;
+ (void)moveOldQueueFile;
+ (id)URLForQueueFile;
+ (id)queueFile_deprecated;
+ (id)exceptionString:(id)arg1;
@property(retain) NSObject<OS_dispatch_source> *persistTimer; // @synthesize persistTimer=_persistTimer;
@property(retain) NSObject<OS_dispatch_queue> *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property(retain) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)retrieve;
@property(readonly) _Bool isDirty;
- (void)persistImmediately;
- (void)persistEventually;
- (_Bool)containsClose;
- (id)moveInstallOrOpenToFront:(long long)arg1;
- (_Bool)removeInstallOrOpen;
- (_Bool)containsInstallOrOpen;
- (void)clearQueue;
- (id)description;
@property(readonly) long long queueDepth;
- (id)peekAt:(unsigned long long)arg1;
- (id)peek;
- (void)remove:(id)arg1;
- (id)removeAt:(unsigned long long)arg1;
- (id)dequeue;
- (void)insert:(id)arg1 at:(unsigned long long)arg2;
- (void)enqueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

