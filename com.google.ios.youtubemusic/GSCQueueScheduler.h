//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCScheduler-Protocol.h"

@class GPCQueue;

@interface GSCQueueScheduler : NSObject <GSCScheduler>
{
    int _scheduleMode;
    GPCQueue *_queue;
}

@property(nonatomic) int scheduleMode; // @synthesize scheduleMode=_scheduleMode;
@property(retain, nonatomic) GPCQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)run:(CDUnknownBlockType)arg1;
- (id)runTask:(CDUnknownBlockType)arg1;

@end

