//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OS_dispatch_queue;

@interface _TtC4WiMP21LocalPlayQueueService : NSObject
{
    // Error parsing type: , name: currentContext
    // Error parsing type: , name: needsToBlockScrolling
    // Error parsing type: , name: lastActivesUpdateTime
    // Error parsing type: , name: playQueueItems
    // Error parsing type: , name: position
    // Error parsing type: , name: serialQueue
}

+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (void)setPlayQueueItems:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, readonly) OS_dispatch_queue *serialQueue; // @synthesize serialQueue;

@end

