//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface GADNActionURLHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _bufferActionsPaused;
    NSMutableArray *_bufferedURLRequests;
    id _messageSource;
}

- (void).cxx_destruct;
- (void)resumeBufferedActions;
- (void)pauseBufferedActions;
- (void)handleActionURLRequest:(id)arg1;
- (id)initWithMessageSource:(id)arg1;

@end

