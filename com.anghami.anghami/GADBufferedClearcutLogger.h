//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface GADBufferedClearcutLogger : NSObject
{
    long long _bufferedCommandSize;
    NSMutableArray *_bufferedCommands;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)reportBufferedEventsToLogger:(id)arg1;
- (void)bufferParameters:(id)arg1;
- (void)bufferEvent:(id)arg1;
- (id)init;

@end

