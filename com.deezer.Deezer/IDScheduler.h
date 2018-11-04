//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDScheduler : NSObject
{
    _Bool _allowedToFlush;
    _Bool _runFlushScheduled;
    NSMutableSet *_objectsNeedingFlush;
}

@property _Bool runFlushScheduled; // @synthesize runFlushScheduled=_runFlushScheduled;
@property(getter=isAllowedToFlush) _Bool allowedToFlush; // @synthesize allowedToFlush=_allowedToFlush;
@property(retain) NSMutableSet *objectsNeedingFlush; // @synthesize objectsNeedingFlush=_objectsNeedingFlush;
- (void).cxx_destruct;
- (void)raiseExceptionIfNotOnMainThread:(const char *)arg1;
- (void)clear;
- (void)stop;
- (void)start;
- (void)addObjectNeedingFlush:(id)arg1;
- (void)setNeedsFlush;
- (void)runFlush;
- (id)init;

@end

