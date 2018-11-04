//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SPCallbackHolder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <NSCopying> _callback;
}

@property(copy, nonatomic) id <NSCopying> callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)executeFinallyAsync:(_Bool)arg1;
- (void)executeErrbackAsync:(id)arg1;
- (void)executeCallbackAsync:(id)arg1 parent:(id)arg2;
- (id)initWithCallback:(id)arg1 onQueue:(id)arg2;

@end
