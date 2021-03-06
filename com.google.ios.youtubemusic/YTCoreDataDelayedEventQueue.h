//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDelayedEventQueue-Protocol.h"

@class GIMMe, NSString, YTDelayedEventEntityStore;

@interface YTCoreDataDelayedEventQueue : NSObject <YTDelayedEventQueue>
{
    YTDelayedEventEntityStore *_entityStore;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)stringForDelayedEventType:(int)arg1;
- (void)fetchEventCountWithEventType:(int)arg1 maxRetries:(unsigned long long)arg2 tier:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dequeueEventsForAllIdentitiesWithSize:(unsigned long long)arg1 eventType:(int)arg2 maxRetries:(unsigned long long)arg3 tier:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dequeueEventsWithSize:(unsigned long long)arg1 eventType:(int)arg2 maxRetries:(unsigned long long)arg3 tier:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

